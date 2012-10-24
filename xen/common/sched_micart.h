// SBIR DATA RIGHTS
// Contract No. NOOO14-1O-C-0139
// Contractor Name: Adventium Enterprises	
// Contractor Address: 111 Third Ave S., Suite 100, Minneapolis, MN 55401
//
// The Government's rights to use, modify, reproduce, release, perform,
// display, or disclose technical data or computer software marked with
// this legend are restricted during the period shown as provided in
// paragraph (b)(4) of the Rights in Noncommercial Technical Data and
// Computer Software--Small Business Innovative Research (SBIR) Program
// clause contained in the above identified contract. No restrictions
// apply after the expiration date shown above. Any reproduction of
// technical data, computer software, or portions thereof marked with
// this legend must also reproduce the markings.

#ifdef FAKE_XEN
#define MICAPI(_x) _x
#else 
#define MICAPI(_x) static _x
#endif


#include <xen/config.h>
#include <xen/init.h>
#include <xen/lib.h>
#include <xen/sched.h>
#include <xen/domain.h>
#include <xen/delay.h>
#include <xen/time.h>
#include <xen/event.h>
#include <xen/sched-if.h>
#include <xen/trace.h>
#include <xen/percpu.h>


/******************************************************************************
 **                               Macro Definitions
 */

/* RUNNABLE:
 *  a vcpu is "vcpu_runnable()" iff
 *  - its pause flags are all 0,
 *  - its pause count is 0, AND
 *  - its domain's pause count is 0
 *
 * Pause flags (sched.h) include:
 *    VPF_blocked_in_xen - evt channel: waits for event to be consumed by Xen
 *    VPF_blocked - event channel: waiting for event to be consumed by domain
 *    VPF_migrating - (vcpu_migrate) migrating after cpu affinity has changed 
 *    VPF_down - vcpu is Offline
 *
 * Pause count is incremented temporarily for various reasons, e.g. vcpu
 * - vcpu being initialized, reset, shutdown, adjusted or dumped
 * - domain "frozen"
 * - domain paused in debugger
 * - domain being killed
 * - domain being resumed
 * - on request of system controller, e.g. during setup, DOMCTL pausedomain
 * - vcpu/domain during certain hvm OPs, VMCS and vlAPIC operations
 * - domain during shadow feature, HAP, or paging log test/enable/disable
 * see vcpu_pause(), domain_pause(), vcpu_unpause(), domain_unpause()
 */

/* A given vcpu will either be runnable or blocked
 */
#define MIC_VCPU_RUNNABLE   0
#define MIC_VCPU_UNINITIALIZED 1
#define MIC_VCPU_BLOCKED   32

/* used when we have not yet bound a vcpu to a particular pcpu
 */
#define MIC_PCPU_UNBOUND (-1)

/* Frame durations used before any custom schedule is established.
 */
#define MIC_DEFAULT_FRAME_DUR  MILLISECS(100)
#define MIC_SHORT_FRAME_DUR    MILLISECS(1)

/* Guess at how long a context switch takes. Our 2010 estimate for
 * Intel x86_64 systems is about 4uS. This could be way off;
 * it would be nice to be able to dynamically tune this on each
 * system before running this scheduler.
 */
#define MIC_IRQ_FRAME_DUR  MILLISECS(10)
#define CSWITCH_DUR MICROSECS(4)
//#define CSWITCH_DUR MICROSECS(150)

/* Set a lower bound on how short a slice may be. This will depend on
 * the typical context switch time for the CPU.
 */
#define MIC_MIN_SLICE_DUR (CSWITCH_DUR + MICROSECS(1))

/* This is a tolerance used to assess whether a slice is Close Enough
 * To Being Done to finish it.  Criticality: Unknown.
 */
// A trial running of the system needs this at least 250us
#define CETBD_DUR MICROSECS(400)
//#define CETBD_DUR CSWITCH_DUR


/* This is a tolerance used to assess whether do_schedule is being
 * called significantly late. A warning is printed and micart will
 * try to catch up.
 */
#define TARDY_DUR MICROSECS(2)


/* Debug printing based on verbosity setting. Note that doing
 * verbose debug trace may cause Xen to get wedged. Level 1 is safe.
 *
 * 1 - infrequent major operations and signs of serious problems
 * 2 - single line for each do_schedule
 * 3 - detailed do_schedule trace
 */
#ifndef MIC_DEBUG_LEVEL
#define MIC_DEBUG_LEVEL 0
#endif

#define MPRINT(_f, _a...)                        \
    do {                                        \
        if ( (_f) <= MIC_DEBUG_LEVEL )          \
            printk(_a );                        \
    } while ( 0 )

#define MPRINT_DUR(_f,_a...) \
    do {                                        \
        if ( (_f) <= MIC_DEBUG_LEVEL )          \
            mic_print_dur(_a );                     \
    } while ( 0 )


// defined in include/xen/lib.h
// #define ABS(_s) ( _s >=0 ? _s : -1*_s)

/* Given a vcpu*, return a pointer to the associate mic_vcpu_info
 */
#define VCPU_INFO(_v) ((struct mic_vcpu_info *)((_v)->sched_priv))


/* Given a domain*, return a pointer to the associated mic_domain_info
 */
#define DOM_INFO(_d) ((struct mic_domain_info *)((_d)->sched_priv))


/* given a pcpu number, return a pointer to the associated mic_pcpu_info
 */
#define PCPU_INFO(_c) ((struct mic_pcpu_info *)per_cpu(schedule_data,_c).sched_priv)


/* given pointer p to struct mic_pcpu_info,
 * return a pointer to the CURRENT schedule
 */
#define SCUR(p)  (p->sched[p->cur])

/* given pointer p to struct mic_pcpu_info,
 * return a pointer to the NEW schedule
 */
#define SNEW(p)  (p->sched[1 - p->cur])

/* How many PCPUS are out there for scheduling? The std Xen way to get
 * this seems to be counting bits on in a cpumask. We shortcut that here
 * by tracking the number declared alive in mic_priv and assuming they
 * do not go offline.
 */
#define TOTAL_PCPUS() (mic_priv.ncpus)

/* given a pcpu number, return a pointer to the associated idler vcpu
 */
#define CPU_IDLETASK(_c) (per_cpu(schedule_data,_c).idle)

/* True iff the schedule has no configured slices. This will be
 * be the case for the "current" schedule run at boot.
 */
#define SCHED_UNCONFIGURED(_s) (0 == _s.slice_count)

/* True iff the schedule has not been used yet to make a scheduling 
 * decision.  It will need some initialization.
 */
#define SCHED_UNINITIALIZED(_s) (_s->next_start_time == _s->frame_start)


/******************************************************************************
 **                                  Data Types
 */

/**
 * MiCART PCPU-specific scheduler statistics.  See global: mic_privcpu[]
 * rapidly changing stats are clustered near the top of the struct.
 */
struct mic_cpu_stats {
    uint64_t ndo_sched;          /* calls to do_schedule */
    uint64_t nds_unconfig;       /* do_sched in unconfigured mode */
    uint64_t nwake;              /* how many calls to wake */
    uint64_t nwake_runnable;     /* calls to wake when vcpu already runnable */
    uint64_t nwake_not_runnable; /* calls to wake when vcpu is not runnable? */
    uint64_t nwake_running;     /* calls to wake when vcpu is running */
    uint64_t nds_idle_dom;      /* how many times we schedule idle dom */
    uint64_t nsleep;           // how many calls to sleep
    uint64_t nds_init;         /* do_sched init mode */
    uint64_t nds_finished;     /* do_sched mode A: slice normal finish */
    uint64_t nds_blocked;      /* do_sched mode B: slice blocked */
    uint64_t nds_resumed;      /* do_sched mode C: slice resumed */
    uint64_t noverruns;        // how many frames have been overrun
    uint64_t nframes_started;  // how many frames have been started
    uint64_t nexceptions;      // how many serious faults detected.
};

/**
 * MiCART system-wide private data.  See global: mic_priv
 * rapidly changing stats are clustered near the top of the struct.
 */
struct mic_private {
    cpumask_t idlers;
    uint32_t ncpus;            // how many physical cpus have we seen
    uint32_t nvcpus_created;   // how many vcpus were initialized
    uint32_t nvcpus_destroyed; // how many vcpus were destroyed.
    uint32_t ndoms_created;    /* how many domains created */
    uint32_t ndoms_destroyed;  /* how many domains destroyed */
    uint64_t npickcpu;         /* calls to pick_cpu */
    uint64_t nadjust;          /* how many calls to adjust schedule */
    uint32_t ndump;            /* force compiler to copy */
};


/* This structure specifies a single slice in a schedule: a given vcpu
 * of a domain for a certain duration at a certain offset within a frame.
 */
struct mic_slice {
    struct list_head list;      // linked list element
    struct vcpu* vcpu;          // ptr to Xen vcpu struct owning the slice
    uint32_t pcpu;              // index of the PCPU for this slice
    s_time_t phase;             // offset (nsec) into the frame for start
    s_time_t dur;               // duration of the slice  (nsec)
};


/* A list of vcpus that have volunteered to consume slacktime cycles.
 */
struct mic_slack_vcpu {
    struct list_head list;      // linked list element in slack list
    struct vcpu* vcpu;          // the vcpu that can take slack
};


/* MiCART schedule for a single PCPU
 */
struct mic_schedule {
    struct list_head slice_list;    /* head for list of slices */
    struct mic_slice *cur_slice;    /* the current scheduled slice */
    struct mic_slice *blocked_slice; /* this slice is scheduled but blocked */
    int pcpu;                       /* the pcpu this schedules */
    int slice_count;                /* how many slices configured */
    struct mic_slice slack_slice;   /* used during unscheduled periods */
    struct list_head slack_list;    /* head for RR list of slack vcpus */
    struct mic_slack_vcpu *cur_slack_vcpu;  /* next vcpu for slack */
    s_time_t frame_dur;         /* frame duration (period) this cpu, ns */
    s_time_t allocated;         // total time committed to slices in the frame
    s_time_t idle_time;         // cumulative time spend idling, nanosec
    s_time_t frame_start;       // time at which most recent frame started
    s_time_t next_start_time;   // time stamp for start of next slice, nanosec
};


/* MiCART-specific per-PCPU data allows a current and a new schedule
 * The current schedule is .sched[.cur]
 */
struct mic_pcpu_info {
    struct mic_schedule sched[2];  // current and new schedules
    int cur;                       /* {0,1} index current schedule */
};

/* MiCART-specific per-VCPU data.
 */
struct mic_vcpu_info {
    int run_state;              // MiCART run state of the vcpu (MIC_VCPU_*)
    int cur_pcpu;               // current schedule pcpu binding
    int new_pcpu;               // new schedule pcpu binding or (-1) if none
    struct domain* owner;       // which domain owns
};


/* MiCART-specific per-Domain data.
 */
struct mic_domain_info {
    struct domain* owner;       // pointer to owning Xen domain struct
    int nvcpus;                 // how many live vcpus here
    bool_t realtime;            // nonzero if this is a realtime domain
    struct domain* helper;     // domid of associated stub domain (NULL if none)
};





/******************************************************************************
 **                                Prototypes
 */

/* API */
#ifdef FAKE_XEN
int  api_adjust(struct domain *, struct xen_domctl_scheduler_op *);
void api_destroy_domain(struct domain *);
struct task_slice api_do_schedule(s_time_t);
void api_dump_cpu_state(int);
void api_dump_settings(void);
int  api_pick_cpu(struct vcpu *);
int  api_init_domain(struct domain *);
void api_init_scheduler(void);
int  api_vcpu_init( struct vcpu*);
void api_vcpu_destroy( struct vcpu * );
void api_wake(struct vcpu *);
void mic_print_dur(const char*, s_time_t, int);
#endif


/*
 * Local variables:
 * mode: C
 * c-set-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
