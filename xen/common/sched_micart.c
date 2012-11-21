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

/****************************************************************************
 * (C) 2010 - Adventium Enterprises / 
 ****************************************************************************
 *
 *        File: xen/common/sched_micart.c
 *      Author: Steven A. Harp
 *
 * Description: 
 *     This scheduler is devised for hierarchical scheduling of real-time 
 *  domains alongside non-critical domains. It follows a fixed schedule; it
 *  is not time-preserving.
 *
 * Contents:
 *      Included Sources
 *      Macro Definitions
 *      Data Types
 *      Shared Variables
 *      Scheduler API
 *         CPU Hooks
 *         Domain Hooks
 *         Wake/Sleep
 *         Monitoring
 *         Scheduler
 *         Initialization & Control
 */

/******************************************************************************/

#include <xen/event.h>
#include <xen/iommu.h>
#include <xen/sched.h>
#include <asm-x86/irq.h>
#include <asm-x86/hvm/vlapic.h>
#include <asm-x86/hvm/vioapic.h>
#include <asm-x86/hvm/vpt.h>
#include <xen/hvm/hpet.h>
#include "sched_micart.h"

typedef struct {
    u8 nr_guests;
    u8 in_flight;
    u8 shareable;
    u8 ack_type;
    cpumask_t cpu_eoi_map;   /* CPUs that need to EOI this interrupt */
    struct domain *guest[7];
} irq_guest_action_t;

struct mic_private mic_priv;

/* Access:    per_cpu(mic_privcpu,cpu).SomeCounter++;
 *        MICCPU_INCF(SomeCounter,PCPU);
 *        MICCPU_GETF(SomeCounter,PCPU)
 */
DEFINE_PER_CPU(struct mic_cpu_stats, mic_privcpu);

#define MICCPU_INCF(_CNTR,_PCPU) per_cpu(mic_privcpu,_PCPU)._CNTR++
#define MICCPU_GETF(_CNTR,_PCPU) per_cpu(mic_privcpu,_PCPU)._CNTR


/* static spinlock_t mic_priv_lock = SPIN_LOCK_UNLOCKED; */
/* Usage:   MICPRIV_INCF(statname) - not currently used-avoid locks!
 */
#define MICPRIV_INCF(_X) { \
    spin_lock(&mic_priv_lock); \
    mic_priv._X++; \
    spin_unlock(&mic_priv_lock); }

/// these are hacks to debug do_schedule only!
static struct domain *My_Dom0=NULL;
static struct domain *My_IdleDom=NULL;


/******************************************************************************
 **                                Prototypes
 */

/* LOCAL */
static int  mic_accepts_slack( int, struct vcpu* );
static int  mic_add_slack_vcpu( struct mic_schedule*, struct vcpu* );
static int  mic_clear_new_schedule(void);
static void mic_dump_sched(struct mic_schedule*);
static struct vcpu* mic_find_helper_vcpu( struct vcpu* );
static struct mic_schedule* mic_get_sched( int, int );
static struct mic_slice* mic_get_slice( struct mic_schedule *, unsigned int );
static int mic_get_slice_info( struct xen_domctl_sched_micart *, int );
static int mic_getinfo(struct domain*, struct xen_domctl_scheduler_op*);
static int  mic_init_pcpu( int );
struct vcpu* mic_next_slacker( struct mic_schedule * );
static struct task_slice mic_pick_alternate( s_time_t, struct mic_schedule *,
                                             s_time_t);
static int  mic_push_new_slacker( struct mic_schedule *, struct vcpu* );
static int  mic_putinfo(struct domain*, struct xen_domctl_scheduler_op *);
static int  mic_put_slice( struct domain*, struct xen_domctl_sched_micart*);

static int  mic_put_set( struct domain*, struct xen_domctl_sched_micart*);
static void mic_irq( s_time_t, struct mic_schedule*,
                                  s_time_t, struct task_slice tslice);
static struct task_slice 
mic_next_slice( s_time_t now, struct mic_schedule *sched );

static struct task_slice mic_run_slack( s_time_t, struct mic_schedule*,
                                        s_time_t, struct vcpu*);
static int  mic_set_swap_schedule(void);
static struct task_slice mic_start_frame(s_time_t, s_time_t, struct mic_schedule*);
static int  mic_validate_new_schedule(void);
static struct vcpu* mic_validate_pcpu_vcpu(struct domain*, int, int );

#ifndef FAKE_XEN
static void mic_print_dur(const char*, s_time_t, int);
#endif

/******************************************************************************
 **                              Support Functions
 */

/**
 * Pick the next cpu in the mask after cpu, wrapping around if needed.
 * Imported from credit scheduler; used to pick cpu before a MiCART schedule
 * is established.
 */
// Now apparently built in at include/xen/cpumask.h
/* static inline int
__cycle_cpu(int cpu, const cpumask_t *mask)
{
    int nxt = next_cpu(cpu, *mask);
    if (nxt == NR_CPUS)
        nxt = first_cpu(*mask);
    return nxt;
}
*/


/**
 * Allocate and init physical cpu info.
 * This structure tracks two independent schedules: current and new
 *
 * Conjecture: nothing in here requires locking as its scope is local
 *  to this one PCPU which has yet to be scheduled, ever.
 *
 * @return 0 on success; -ENOMEM if we fail to allocate an info structure.
 */

static int
mic_init_pcpu( int cpu )
{
    int i;
    struct mic_pcpu_info *pinfo;

    pinfo = xmalloc(struct mic_pcpu_info);
    if (NULL == pinfo) {
        MPRINT(1,"** MiCART init pcpu-%d ~ ERROR: ENOMEM\n",cpu);
        return( -ENOMEM );
    }
    if ( mic_priv.ncpus <= cpu ) {
        mic_priv.ncpus = (cpu + 1); /* biggest we've seen */
    }
    per_cpu(schedule_data, cpu).sched_priv = pinfo;

    MPRINT(1,"** MiCART init pcpu-%d ~ empty schedule.\n",cpu);

    pinfo->cur = 0;

    for (i=0; i<2; i++) {
        INIT_LIST_HEAD(&pinfo->sched[i].slice_list);
        pinfo->sched[i].cur_slice = NULL;
        pinfo->sched[i].blocked_slice = NULL;
        pinfo->sched[i].pcpu = cpu;
        pinfo->sched[i].slice_count = 0;
        /* slack slice */
        INIT_LIST_HEAD(&pinfo->sched[i].slack_slice.list);
        pinfo->sched[i].slack_slice.vcpu = NULL;
        pinfo->sched[i].slack_slice.pcpu = cpu;
        pinfo->sched[i].slack_slice.phase = 0;
        pinfo->sched[i].slack_slice.dur = 0;
        /*\  \*/
        INIT_LIST_HEAD(&pinfo->sched[i].slack_list);
        pinfo->sched[i].cur_slack_vcpu = NULL;
        pinfo->sched[i].frame_dur = 0;
        pinfo->sched[i].allocated = 0;
        pinfo->sched[i].idle_time = 0;
        pinfo->sched[i].frame_start = 0;
        pinfo->sched[i].next_start_time = 0;
    }

    return 0;
}


/**
 * Check the validity of the "new" schedule before attempting to run it.
 * Aspects checked:
 *   -- must have a new schedule
 *   -- it must either have either some slices or some slackers (or both).
 *
 * @return 0 if it seems valid; -EINVAL if this schedule is defective.
 */
static int
mic_validate_new_schedule(void)
{
    int pcpu;
    struct mic_schedule *sched;

    MPRINT(1,"mic_validate_new_schedule\n");

    for (pcpu=0; pcpu < mic_priv.ncpus; pcpu++) {
        struct mic_pcpu_info *pinfo = PCPU_INFO(pcpu);
        if (NULL == pinfo) {
            printk("** ERROR: Missing schedule info on pcpu-%d!\n", pcpu);
            return( -EINVAL );
        }
        sched = &SNEW(pinfo);
        if (0 == sched->slice_count) {
            MPRINT(2,"** WARNING: no slices allocated on new sched for pcpu-%d\n",
                   pcpu);
            if (list_empty(&sched->slack_list)) {
                printk("** ERROR: no slices and no slack in new sched for pcpu-%d\n",
                       pcpu);
                return( -EINVAL );
            }
        }
    }
    MPRINT(2,"** New schedule looks OKAY on all %d PCPUs\n", mic_priv.ncpus);
    return 0;
}


/**
 * Validate the "new" schedule (non-running). Return -EINVAL if it is bad.
 * Otherwise: set the swap flags for all scheduled PCPUs so they
 * will start running the new schedule the next time  do_schedule is
 * invoked.
 *
 * @return 0 on success; -EINVAL if we the schedule is defective.
 */
static int
mic_set_swap_schedule(void)
{
    int pcpu, v;
    struct domain **pd;
    struct mic_vcpu_info *vinfo;
    struct vcpu *vcpu;

    MPRINT(1,"mic_set_swap_schedule\n");

    if ( mic_validate_new_schedule() ) {
        return (-EINVAL);
    }

    for (pcpu=0; pcpu < mic_priv.ncpus; pcpu++) {
        struct mic_pcpu_info *pinfo = PCPU_INFO(pcpu);
        pinfo->cur = (1 - pinfo->cur);
        MPRINT(1,"** switch pcpu-%d to schedule %d\n", pcpu, pinfo->cur);
    }
    /* swap all dominfo and vcpuinfo structs too
     */ 
    for ( pd = &domain_list; *pd != NULL; pd = &(*pd)->next_in_list ) {
        struct mic_domain_info *dinfo = DOM_INFO(*pd);
        if (NULL == dinfo) continue;
        MPRINT(1,"** switch domain-%d to new schedule\n", (*pd)->domain_id );
        /* any domain specific swaps would go here... */
        /* swap each vcpu of this domain */
        for (v=0; v<dinfo->nvcpus; v++) {
            vcpu = (*pd)->vcpu[v];
            if (NULL == vcpu) continue;
            vinfo = VCPU_INFO(vcpu);
            if (NULL == vinfo) continue;
            pcpu = vinfo->cur_pcpu;
            vinfo->cur_pcpu = vinfo->new_pcpu;
            vinfo->new_pcpu = pcpu;

	    // Debug prints
	    MPRINT(1,"vinfo->run_state == %d\nvinfo->cur_pcpu == %d\nvinfo->new_pcpu == %d\n", 
				vinfo->run_state, vinfo->cur_pcpu, vinfo->new_pcpu);


            MPRINT(1,"***  vcpu-%d to new schedule: now on pcpu-%d\n",
                   vcpu->vcpu_id, vinfo->cur_pcpu );
        }
    }

    // Make sure HPET is init before starting
    hpet_init(vcpu);


    /* Send scheduler interrupts to all enabled PCPUs
     * SCHEDULE_SOFTIRQ is handled by schedule() in schedule.c
     * which will deschedule the current domain and pick a new one
     * by calling our do_schedule()
     */
    cpumask_raise_softirq( cpu_possible_map, SCHEDULE_SOFTIRQ );
    return 0;
}


/**
 * Any new schedule information that has been entered will be cleared.  This
 * function is present to allow a schedule that has been partially entered but
 * is faulty to be erased so a correct one may be entered. It is also
 * important to transition to the first new schedule after swapping out the
 * default schedule provided at boot.
 */
static int
mic_clear_new_schedule(void)
{
    // presuming here that the schedule info is previously locked for
    // us by schedule.c
    int k;
    MPRINT(0,"** there are %d PCPUs to clear new schedules on\n", mic_priv.ncpus);
    MPRINT(0,"**\n");

    for (k=0; k<mic_priv.ncpus; k++) {
        struct mic_pcpu_info *pinfo = PCPU_INFO(k);
        MPRINT(1,"** clear schedule for pcpu-%d\n", k);
        if (NULL == pinfo) {
            MPRINT(1,"** ODD: schedule for pcpu-%d lacks pcpu info!\n", k);
            continue;
        } else {
            struct mic_schedule *new_sched = &SNEW(pinfo);
            struct list_head *p, *tmplh;
            struct mic_slice *slice;
            struct mic_slack_vcpu *msvc;

            BUG_ON( NULL == new_sched );
            // xfree all slices in cur_slice
            list_for_each_safe(p, tmplh, &new_sched->slice_list) {
                slice = list_entry(p, struct mic_slice, list);
                list_del( p );
                xfree( slice );
            }
            // xfree slack pool elements in cur_slack_vcpu
            list_for_each_safe(p, tmplh, &new_sched->slack_list) {
                msvc = list_entry(p, struct mic_slack_vcpu, list);
                list_del( p );
                xfree( msvc );
            }

            new_sched->slice_count = 0;
            new_sched->cur_slack_vcpu = NULL;
            new_sched->frame_dur = 0;  /* zero implies not initialized. */
            new_sched->allocated = 0;
            new_sched->idle_time = 0;
            new_sched->frame_start = 0;
            new_sched->next_start_time = 0;
        }
    }
    return 0;
}


/* Print out the given schedule configuration using printk.
 * This is used by the dump_cpu_state API implementation.
 */
static void mic_dump_sched(struct mic_schedule *sched)
{
    struct list_head *p, *tmplh;
    struct mic_slice *slice;
    struct vcpu* vc;
    struct mic_slack_vcpu *msvc;
    int scount, i=0;

    if (NULL == sched) {
        printk("   ? NULL schedule ?\n");
        return;
    }
    /* dump slices */
    scount = sched->slice_count;
    if (0 == scount) {
        printk("   0 slices have been configured.\n");
    } else {
        mic_print_dur("   Frame duration is ", sched->frame_dur, 1);
        if (1==scount) {
            printk("   1 slice has been configured, ");
        } else {
            printk("   %d slices have been configured, ", sched->slice_count);
        }
        mic_print_dur("spanning ", sched->allocated, 1 );
        list_for_each_safe(p, tmplh, &sched->slice_list) {
            slice = list_entry(p, struct mic_slice, list);
            vc = slice->vcpu;
            if (vc) {
                printk("  %2d: Dom%d.vcpu_%d ",i++,
                       vc->domain->domain_id, vc->vcpu_id);
                mic_print_dur("phase=", slice->phase,0);
                mic_print_dur(", duration=",slice->dur,1);
            } else {
                printk("  %2d: (missing vcpu)\n",i++);
            }
        }
    }

    /* dump slacktime vcpus */
    if (list_empty(&sched->slack_list)) {
        printk("   Slack VCPUs:  (none)\n");
        return;
    }
    printk("   Slack VCPUs:\n");
    i = 0;
    list_for_each_safe(p, tmplh, &sched->slack_list) {
        msvc = list_entry(p, struct mic_slack_vcpu, list);
        vc = msvc->vcpu;
        if (vc) {
            printk("   %2d: Dom%d.vcpu_%d",i++,
                   vc->domain->domain_id,vc->vcpu_id);
            if (msvc == sched->cur_slack_vcpu) {
                printk(" (current)\n");
            } else {
                printk("\n");
            }
        }
    }
    printk("  \n");
}


/*--------------------------------------------------------------------------*/

/** 
 * printk ns duration x with optional label (non-NULL) and newline (non zero)
 * the primary job of this function is scaling to sensible units,
 * one of: ns, us, ms, s
 */

#ifndef FAKE_XEN
static
#endif
void 
mic_print_dur(const char* label, s_time_t x, int newlinep)
{
    unsigned long ax = ((x >= 0) ? x : -x);
    if (label) {
        printk("%s",label);
    }
    if (ax < 1000) {  // nsec
        printk("%ldns", x );
    }
    else if (ax < 10000000) {  // us
        printk("%ld\316\274s", x/1000 );
    }
    else if (ax < 1000000000) { // ms
        printk("%ldms", x/1000000 );
    }
    else {  // s
        printk("%lds", x/1000000000 );
    }
    if (newlinep) {
        printk("\n");
    }
}


/*--------------------------------------------------------------------------*/

/**
 * debug printing of task slice with identifying string mps_where.
 * Do not attempt this when in the real hypervisor!
 */
#if (MIC_DEBUG_LEVEL < 2)
#define mic_print_slice(_x,_y)
#else
static void
mic_print_slice( const char* mps_where,  struct task_slice *slice )
{
    if (NULL == slice->task) {
        printk("** %s returns a NULL(!) vcpu ", mps_where);
    } else {
        printk("** %s returns VCPU-%d of dom-%d (%s) ", mps_where,
               slice->task->vcpu_id,
               slice->task->domain->domain_id,
               "-");   /* slice->task->domain->domain_name ) */
    }
    mic_print_dur("for ", slice->time, 1 );
}
#endif


/*--------------------------------------------------------------------------*/

static int 
mic_add_slack_vcpu( struct mic_schedule *sched, struct vcpu* vc )
{
    struct mic_slack_vcpu *msvc = xmalloc(struct mic_slack_vcpu);
    if ( NULL == msvc) {
        return( -ENOMEM );
    }
    msvc->vcpu = vc;
    list_add_tail( &msvc->list, &sched->slack_list );
    if (NULL == sched->cur_slack_vcpu) {
        sched->cur_slack_vcpu = msvc;
    }
    return 0;
}


/*--------------------------------------------------------------------------*/

/* Return the next slack vcpu to run in the schedule.  If the cur_slack_vcpu
 * is runnable, return it and advance the list to the next entry.  Otherwise
 * scan the list for the next runnable one.  If none of them are runnable,
 * return the Idle vcpu for the processor.
 */
struct vcpu*
mic_next_slacker( struct mic_schedule *sched )
{
    struct list_head *elt = &sched->cur_slack_vcpu->list;
    struct list_head *selt = elt; /* where we started the search */

    if ((NULL == elt) || list_empty(elt)) {
        MPRINT(1,"** MiCART No declared slack VCPUs on PCPU-%d so run IDLE (!)\n",
           sched->pcpu);
        MICCPU_INCF(nds_idle_dom,sched->pcpu);
        return CPU_IDLETASK( sched->pcpu );
    }
    do {
        elt = elt->next;                 /* advance to next element */
        if (elt == &sched->slack_list) { /* skip special head element */
	    elt = elt->next;
        }
        sched->cur_slack_vcpu = list_entry(elt,struct mic_slack_vcpu,list);
        if (vcpu_runnable(sched->cur_slack_vcpu->vcpu)) {
            return sched->cur_slack_vcpu->vcpu;
        }
    } while (elt != selt);      /* stop after full circuit */

    // Failure: return Idle vcpu.
    MPRINT(1,"** MiCART None of the slack VCPUs on PCPU-%d are runnable: IDLE.\n",
           sched->pcpu);
    MICCPU_INCF(nds_idle_dom,sched->pcpu);

    return CPU_IDLETASK( sched->pcpu );
}


/*--------------------------------------------------------------------------*/

/* Add the vcpu to the slack list of the given schedule unless already present.
 */
static int mic_push_new_slacker( struct mic_schedule *sched, struct vcpu* vcpu )
{
    struct list_head *p, *tmplh;
    struct mic_slack_vcpu  *msvc;

    /* scan list -- if already present exit right away
     */
    list_for_each_safe(p, tmplh, &sched->slack_list) {
        msvc = list_entry(p, struct mic_slack_vcpu, list);
        if (vcpu == msvc->vcpu) {
            return 0;
        }
    }
    return mic_add_slack_vcpu( sched, vcpu );
}

/*--------------------------------------------------------------------------*/

/* (do_schedule helper)
 * This schedule is brand spanking new--initialize and return first slice.
 * If the first micart slice has phase=0 then schedule it now,
 * otherwise pick a slacker and run it until first slice phase is ready.
 */
static struct task_slice 
mic_first_dosched( s_time_t now, struct mic_schedule *sched )
{
    struct task_slice tslice;   /* task slice to return */
    struct mic_slice *mslice;      /* the first micart slice in frame */
    s_time_t phase;                /* frame offset for first slice */

    MPRINT(2,"** Initializing schedule for pcpu-%d\n",sched->pcpu);

    sched->frame_start = now;   /* start a new frame "now" */
    MICCPU_INCF(nframes_started,sched->pcpu);

    mslice = list_entry( sched->slice_list.next, struct mic_slice, list);

    phase = mslice->phase;
    /* Ready for first slice? */
    if (0 == phase) {   /* TBD: allow a little slack in this condition? */
        sched->cur_slice = mslice;
        sched->next_start_time = (now + mslice->dur);
        tslice.time = mslice->dur;
        tslice.task = mslice->vcpu;
        /* recklessly assumes this vcpu is runnable...fix! TBD */
        return tslice;
    }
    /* Pick next slacker to run  */
    return mic_run_slack(now,sched,phase,NULL);
}


/*--------------------------------------------------------------------------*/

/* (do_schedule helper)
 * The currently scheduled slice is over. The schedule should be advanced
 * to the next slice. Some special conditions to handle here:
 * (a) If near or past the frame_end, start a new frame.
 * (b) If no more slices left in frame but time remains, run slack
 * (c) If next slice is not scheduled to start for a while, run slack 
 * (d) If next vcpu is not runnable, schedule a slack vcpu for the slice.
 * (e) Otherwise, run the next real slice right away
 */
static struct task_slice 
mic_next_slice( s_time_t now, struct mic_schedule *sched )
{
    struct task_slice tslice;   /* task slice to return */
    struct mic_slice *mslice;   /* next real micart slice in frame */
    s_time_t phase;             /* frame offset of slice */
    s_time_t frame_residue;     /* time remaining in the frame */
    s_time_t frame_offset;      /* now's offset into current frame */
    s_time_t dither;            /* different between offset and phase */
    struct list_head *next_head;

    struct domain *d;

    BUG_ON(NULL == sched->cur_slice);
    frame_residue = (sched->frame_start + sched->frame_dur) - now;
    if (frame_residue < MIC_MIN_SLICE_DUR) {
        /* (a) force the start of a new frame */
        MPRINT(1,"** MiCART mic_next_slice() - Forced start of new frame(a)\n");
        return mic_start_frame( now, frame_residue, sched );
    }

    next_head = sched->cur_slice->list.next;
    if (next_head == &sched->slice_list) {
        /* (b) end of real slices, but time remains, fill in with slack  */
        MPRINT(2,"** MiCART mic_next_slice() - Time left, slacking(b)\n");
        return mic_run_slack( now, sched, sched->frame_dur, NULL);
    }

    frame_offset = (now - sched->frame_start);
    mslice = list_entry( next_head, struct mic_slice, list);
    phase = mslice->phase;

    if ((phase - frame_offset) >= MIC_MIN_SLICE_DUR) {
        /* (c) signif. time remains before next slice: fill in with slack  */
        MPRINT(1,"** MiCART mic_next_slice() - Time left, slacking(c)\n");
        return mic_run_slack(now, sched, phase, NULL);
    }
    //move to the next slice
    dither = (frame_offset - phase);
    MPRINT_DUR(1,"** MiCART new slice dither=",dither,1);
    MPRINT(1,"dither=%ld (%ld-%ld) away from start time %ld \n",dither,
           frame_offset,phase,sched->next_start_time);
    tslice.task = mslice->vcpu;
    tslice.time = (mslice->dur - dither);
    sched->cur_slice = mslice;
    sched->next_start_time = (now + tslice.time);

    /* check if the updated slice is runnable */ 
    if ( ! vcpu_runnable(mslice->vcpu) ) {
        /* (d) next vcpu not runnable, run slack instead for the slice */
        sched->blocked_slice = mslice;
        MPRINT(1,"** MiCART mic_next_slice() - slice blocked, slacking(d)\n");
        return mic_run_slack(now,sched,mslice->dur,NULL);
    }

    // Attempt to send interrupt, set timer
    d = tslice.task->domain;

    //printk("domain_id = %d\n", d->domain_id);

    if ( (d->domain_id != 0) && (d->domain_id != 32767) ) {
	//ioapic removed to create stability
	//vioapic_irq_positive_edge(d, 3);

	//Set the HPET value with the next slice time
	micart_set_hpet(tslice.task, tslice.time);
    }
    // End attempt


    /* (e) run the next slice right now, adjusting duration a bit if needed */
    return tslice;
}


/*--------------------------------------------------------------------------*/

/* (do_schedule helper)   Start a new frame.
 * Attempt to catch up if residue is negative.
 * Idle a bit if residue is (small) positive.
 * Note that the frame might start by running slack.
 */
static struct task_slice 
mic_start_frame( s_time_t now, s_time_t residue, struct mic_schedule *sched )
{
    struct task_slice tslice;   /* task slice to return */
    struct mic_slice *mslice;   /* next real micart slice in frame */
    s_time_t phase;             /* frame offset of slice */
    s_time_t frame_tardy;      /* delta between actual and planned start */
    struct list_head *next_head;

    struct domain *d;
    s_time_t hpet;

    sched->frame_start += sched->frame_dur;  /* when we OUGHT to start it */
    frame_tardy = (now - sched->frame_start);
    sched->blocked_slice = NULL;
    MICCPU_INCF(nframes_started,sched->pcpu);

    next_head = sched->slice_list.next; /* first real slice */
    mslice = list_entry( next_head, struct mic_slice, list);
    phase = mslice->phase;

    if (phase >  MIC_MIN_SLICE_DUR) {
        /* Schedule starts in slack */
        return mic_run_slack( now, sched, phase, NULL);
    }

    MPRINT(1,"** MiCART: mic_start_frame(), starting with first slice.\n");
    tslice.task = mslice->vcpu;
    tslice.time = (mslice->dur - frame_tardy); /* adjust duration */
    sched->cur_slice = mslice;
    sched->next_start_time = (now + tslice.time);

    // Attempt to send interrupt, set timer
    d = tslice.task->domain;

    if ( (d->domain_id != 0) && (d->domain_id != 32767) ) {
	//ioapic removed for stability
	//vioapic_irq_positive_edge(d, 3);

	// Add slice start time and slice duration to determine slice end time
	hpet = phase + tslice.time;
	micart_set_hpet(tslice.task, hpet);
    }
    // End attempt

    return tslice;

mic_irq(now, sched, now, tslice);
}


/*--------------------------------------------------------------------------*/

/* (do_schedule helper)
 * Run a slack slice in the schedule from "now" until frame_start + "phase".
 * If "vcpu" is NULL, a vcpu is picked via mic_next_slacker(sched).
 * Make sched.cur_slice point to the schedule's internal
 * ".slack_slice", which is adjusted to the correct frame_start based
 * duration and vcpu, and made to point to the next real slice.
 */
static struct task_slice 
mic_run_slack( s_time_t now, struct mic_schedule *sched, s_time_t phase,
               struct vcpu *vcpu )
{
    struct task_slice tslice;   /* task slice to return */
    s_time_t sdur;

    if (NULL == vcpu) {
        vcpu = mic_next_slacker(sched);
    }

    if (SCHED_UNCONFIGURED((*sched))) {
        //tslice.time = phase;    /* normally MIC_DEFAULT_FRAME_DUR */
	tslice.time = MIC_DEFAULT_FRAME_DUR;
        if (is_idle_vcpu(vcpu)) {
            tslice.time = MIC_SHORT_FRAME_DUR;
        }
        tslice.task = vcpu;
        sched->slack_slice.vcpu = vcpu;
        sched->slack_slice.pcpu = sched->pcpu;
        sched->slack_slice.phase = 0;
        sched->slack_slice.dur = tslice.time;
        sched->cur_slice = &(sched->slack_slice);
        mic_print_slice( "do_schedule (unconfigured)", &tslice );

        return tslice;
    }

    /* possible need for decision code, have we moved to another slice?
     * sched->next_start_time = (sched->frame_start + phase);
     */

    sdur = (sched->next_start_time - now); 
    // If we pass a slice change
    if(sdur < 0) {
            mic_next_slice(now,sched);             //advance the slice.
            sdur = (sched->next_start_time - now); //recalculate
    }
            
    MPRINT(1,"** MiCART: mic_run_slack(), duration %ld = (%ld-%ld)\n",
           sdur,sched->next_start_time, now);

    if (sched->cur_slice) {     /* insinuate into slice list */
        sched->slack_slice.list.prev = &sched->cur_slice->list;
        sched->slack_slice.list.next = sched->cur_slice->list.next;
    } else {                    /* unconfigured: this is sole slice */
        sched->slack_slice.list.prev = &sched->slack_slice.list;
        sched->slack_slice.list.next = &sched->slack_slice.list;
    }

    sched->slack_slice.vcpu = vcpu;
    sched->slack_slice.pcpu = sched->pcpu;
    sched->slack_slice.phase = (now - sched->frame_start);
    sched->slack_slice.dur = sdur;

    tslice.task = vcpu;
    tslice.time = sdur;

    sched->cur_slice = &(sched->slack_slice);
    mic_print_slice( "do_schedule (picked from slack)", &tslice );
    // IRQ generation for guest here
    return tslice;
}


/*--------------------------------------------------------------------------*/

/* (do_schedule helper)
 * Return a designated helper cpu of the given vcpu or NULL if none.
 * The returned cpu should be currently runnable, not running now, and 
 * yet allowable on the same PCPU as the argument vcpu.
 */
static struct vcpu*
mic_find_helper_vcpu( struct vcpu* vcpu )
{
    struct mic_domain_info *dinfo = DOM_INFO(vcpu->domain);
    struct domain *hdom;        /* the helper domain */
    struct vcpu *hvcpu;         /* a helper vcpu */
    int pcpu = vcpu->processor;

    if (NULL == dinfo) {
        return NULL;
    }
    hdom = dinfo->helper;
    if (NULL == hdom) {
        MPRINT(2,"*** MiCART dom%d has no designated helper domain\n",
               vcpu->domain->domain_id );
        return NULL;
    }
    /* Scan vcpus of helper domain for one that can run on the same pcpu,
     * is runnable, but is not currently running.  The first test is based 
     * on the cpu_affinity mask of the helper vcpu which the MiCART schedule
     * loader will carefully remember to set...
     */
    for_each_vcpu( hdom, hvcpu ) {
        if ( cpu_isset(pcpu,vcpu->cpu_affinity)
             && vcpu_runnable( hvcpu )
             && ! hvcpu->is_running ) {
            MPRINT(2,"*** MiCART vcpu-%d of helper domain dom%d looks runnable\n",
                    hvcpu->vcpu_id, hdom->domain_id );
            return hvcpu;
        }
    }
    MPRINT(2,"*** MiCART Curses--failed to find a suitable helper vcpu in dom%d\n",
           hdom->domain_id );
    return NULL;
}


/*--------------------------------------------------------------------------*/

/* (do_schedule helper)
 * The current slice has is blocked and an alternate vcpu is required.
 * If a helper vcpu is runnable, offer to run it for the remainder.
 * Otherwise, run the next runnable slack vcpu for the rest of this slice.
 */
static struct task_slice 
mic_pick_alternate( s_time_t now, struct mic_schedule *sched, s_time_t tdelta)
{
    struct vcpu *cvcpu = sched->cur_slice->vcpu; 
    struct vcpu *avcpu = mic_find_helper_vcpu( cvcpu );

    if (avcpu && vcpu_runnable( avcpu )) {
        struct task_slice tslice;   /* task slice to return */
        tslice.task = avcpu;
        tslice.time = (sched->next_start_time - now);
        MPRINT(1,"*** vcpu-%d of dom%d YIELDs to designated"
                 " helper vcpu-%d of dom%d\n",
               cvcpu->vcpu_id, cvcpu->domain->domain_id,
               avcpu->vcpu_id, avcpu->domain->domain_id );
        return tslice;
    }
    MPRINT(1,"*** No designated helper vcpu to which PCPU can yield.\n");
    return mic_run_slack( now, sched, (sched->next_start_time - now), NULL);
}


/*--------------------------------------------------------------------------*/

/* (do_schedule helper)
 * The  blocked_slice is now runnable again, so run it for the residue of
 * its period.
 */
static struct task_slice 
mic_run_unblocked_slice(s_time_t now, struct mic_schedule *sched )
{
    struct task_slice tslice;   /* task slice to return */
    struct mic_slice *bslice=sched->blocked_slice;
    s_time_t remaining_time = (sched->next_start_time - now);

    if (remaining_time <= 0) {
        MPRINT(1, "*** ERROR - there is no time left in the unblocked slice.\n");
        remaining_time = 0;
    }

    sched->blocked_slice = NULL;
    sched->cur_slice = bslice;
    tslice.task = bslice->vcpu;
    tslice.time = remaining_time;

    return tslice;
}

/*--------------------------------------------------------------------------*/


/* Runs some integrity checks on a proposed new slice, micop, against the
 * schedule sched.  The PCPU's frame duration (period) may be established
 * here if this is the first slice.
 *   The new slice must start after the end of the previously allocated one.
 *   Slice duration must be at least MIC_MIN_SLICE_DUR.
 *   It must specify a frame duration if it is the first slice.
 *   Frame duration must be at least MIC_MIN_SLICE_DUR.
 *   It may not specify a different frame duration if one has been set.
 *   It may not overrun the duration of the frame.
 */
static int mic_check_new_slice (struct xen_domctl_sched_micart *micop,
                                struct mic_schedule *sched)
{
    int set_period = 0;   // did we set the period here?
    uint64_t period = micop->period;

    // If frame duration is established, check that the micop period is
    // either the same or 0 (meaning unspecified).
    //
    if (sched->frame_dur) {
        if (period && (period != sched->frame_dur)) {
            printk("ERROR: period must be constant for all slices on pcpu-%d."
                   " %lu != %lu\n", micop->pcpu, period, sched->frame_dur );
            return( -EINVAL );
        }
    } else {
        // we must establish the frame duration with the first slice.
        if (period) {
            if (period < MIC_MIN_SLICE_DUR) {
                mic_print_dur("** ERROR: proposed period is less than "
                              "minimum allowed, ", MIC_MIN_SLICE_DUR,1);
                return( -EINVAL );
            }
            sched->frame_dur = period;
            set_period = 1;
            MPRINT(2,"** MiCART establish pcpu-%d ",micop->pcpu);
            mic_print_dur("period := ", period, 1 );
        } else {
            printk("** ERROR: period must be established by the first "
                   "slice on pcpu-%d\n", micop->pcpu);
            return( -EINVAL );
        }
    }

    // Check to make sure inputted slice duration in bigger than minimun and period is set
    // Moved after above if/else to prevent error if first slice
    if ( (micop->duration < MIC_MIN_SLICE_DUR) && !set_period ) {
	mic_print_dur("** ERROR: slice duration less than minimum allowed, ",
	              MIC_MIN_SLICE_DUR,1);
    return( -EINVAL );
    }

    // check for allocation remaining...
    if ( (micop->phase < sched->allocated) && !set_period ) {
	printk("** ERROR: slice starts (");
	mic_print_dur("",micop->phase,0);
	printk(") before previous slice ends (");
	mic_print_dur("",sched->allocated,0);
	printk(")\n");
	if (set_period) {       /* cleanup on error */
	    sched->frame_dur = 0;
	}
	return( -EINVAL );
    }

    if ( ((micop->phase + micop->duration) > sched->frame_dur) && !set_period ) {
	mic_print_dur("** ERROR: adding this slice would overrun the"
	   " frame duration of ", sched->frame_dur, 1 );
	if (set_period) {       /* cleanup on error */
	    sched->frame_dur = 0;
	}
	return( -EINVAL );
    }
    return 0;  // looks good
}

/*--------------------------------------------------------------------------*/

/**
 * Check whether Domain's VCPU with given ID can run on PCPU. If unbound,
 * this relationship will be bound as a side effect of this call.
 * Returns the valid vcpu pointer or NULL if an invalid combination
 * or sufficient information is missing.
 */
static struct vcpu* mic_validate_pcpu_vcpu(struct domain *dom,
                                           int pcpuid, int vcpuid )
{
    struct mic_domain_info *dominfo = DOM_INFO(dom);
    struct mic_vcpu_info *vc_info;
    struct vcpu *vcpu;

    /* Establish a valid PCPU and VCPU
     */
    if ( pcpuid >= TOTAL_PCPUS() ) {
        printk("** MiCART ERROR MiCART scheduler adjust--Bad PCPU: %d\n", pcpuid );
        return( NULL );
    }
    if ( !dominfo ) {
        printk("** MiCART ERROR MiCART scheduler-no info for dom=%d\n", dom->domain_id );
        return( NULL );
    }
    if ( vcpuid >= dominfo->nvcpus) {
        printk("** MiCART ERROR MiCART scheduler adjust--Bad VCPU: %d\n", vcpuid );
        return( NULL );
    }

    /* Validate the PCPU/VCPU Pairing
     */
    vcpu = dom->vcpu[ vcpuid ];             /* real vcpu */

    vc_info = VCPU_INFO(vcpu);
    if (MIC_PCPU_UNBOUND == vc_info->new_pcpu) {
        MPRINT(2,"*** MiCART VCPU-%d of Domain-%d is now bound to PCPU-%d\n",
               pcpuid, dom->domain_id, pcpuid );
        vc_info->new_pcpu = pcpuid;
    }
    else if (pcpuid != vc_info->new_pcpu) {
        printk("*** MiCART ERROR  invalid vcpu/pcpu pairing.\n"
               "*** MiCART Domain-%d VCPU-%d was previously bound to PCPU-%d, "
               "not PCPU-%d\n", dom->domain_id, vcpuid, vc_info->new_pcpu,
               pcpuid);
        return( NULL );
    }
    return (vcpu);
}


/*--------------------------------------------------------------------------*/

/**
 * Handle various options setting associated with the "opts" function.
 *  SLACK:     0=VCPU does not use slacktime, 1=will burn slack time
 *  REALTIME:  0=not a realtime domain, 1=a realtime domain
 *  HELPER:    0=no helper domain,  1=helper slot specified helper domain
 * 
 */
static int mic_new_schedule_opts( struct domain *dom,
                          struct xen_domctl_sched_micart *micop )
{
    int res=0;
    int opts = micop->options;
    int pcpuid = micop->pcpu;
    int vcpuid = micop->vcpu;
    struct mic_domain_info *dominfo = DOM_INFO(dom);
    struct mic_schedule *sched;
    struct vcpu *vcpu;

    MPRINT(1,"** MiCART mic_new_schedule_opts invoked.\n");

    vcpu = mic_validate_pcpu_vcpu( dom, pcpuid, vcpuid );
    if (NULL == vcpu) {
        return (-EINVAL);
    }
    sched = &SNEW(PCPU_INFO(pcpuid));       /* the new schedule */

    if (opts & XEN_MIC_OPTION_SLACK) {
        // add to the slack time list on the given pcpu and Return
        MPRINT(1, "** MiCART options: add VCPU-%d as slack time user"
               " on PCPU-%d and return.\n",vcpuid, pcpuid );
        res=mic_push_new_slacker( sched, vcpu );
        if (res) {
            return res;
        }
    }

    if (opts & XEN_MIC_OPTION_HELPER) {
        int hid = micop->helper;
        if (0 > hid) {
            MPRINT(1, "** MiCART options: Domain %d has NO helper domain\n",
                   dom->domain_id);
            dominfo->helper = NULL; /* no helper */
        } else {
            struct domain *dh = get_domain_by_id(hid);
            if (NULL == dh) {
                printk("** MiCART ERROR: no domain with ID %d exists.\n", hid);
                res = -EINVAL;
            } else {
                dominfo->helper = dh;
                MPRINT(1, "** MiCART options: Domain %d gets helper domain %d\n",
                       dom->domain_id, hid);
            }
        }
    }
    dominfo->realtime = (opts & XEN_MIC_OPTION_REALTIME);
    MPRINT(1,"** MiCART options: realtime=%s\n",(dominfo->realtime ? "true" : "false"));
    return res;
}


/*--------------------------------------------------------------------------*/

/* Add a slice to the new schedule; details in the micop argument.
 * Various checks are done to verify it will be a consistent schedule.
 *  - valid pcpu
 *  - valid vcpu within domain
 *  - (see mic_check_new_slice)
 *
 * There are various calling quirks:
 * (a) if the the slacktime field is nonzero, the other slice parameters
 *   are ignored and the vcpu is simply added to the slack list.
 * (b) the first real slice must set a frame duration
 * (c) slices must be added in strictly increasing temporal order.
 */
static int mic_put_slice( struct domain *dom,
                          struct xen_domctl_sched_micart *micop )
{
    struct mic_schedule *sched;
    struct mic_slice *slice;
    struct vcpu *vcpu;
    int pcpuid = micop->pcpu;
    int vcpuid = micop->vcpu;

    // Establish a valid PCPU and VCPU
    vcpu = mic_validate_pcpu_vcpu( dom, pcpuid, vcpuid );
    if (NULL == vcpu) {
        return (-EINVAL);
    }
    vcpu = dom->vcpu[ vcpuid ];             /* real vcpu */
    sched = &SNEW(PCPU_INFO(pcpuid));       /* the new schedule */

    if (mic_check_new_slice(micop,sched)) {
        return( -EINVAL );
    }

    // Sane enough to try allocating a slice now
    slice = xmalloc(struct mic_slice);
    if ( NULL == slice) {
	return( -ENOMEM );
    }

    //Only create new slice if duration is given
    //MPRINT (1, "sdom.duration == %ld\n", micop->duration);
    //if ( micop->duration != 0 )
    //{
	slice->vcpu = vcpu;
	slice->pcpu = pcpuid;
	slice->phase = micop->phase;
	slice->dur = micop->duration;

	MPRINT(1,"** MiCART Adding slice to PCPU-%d ",pcpuid);
	MPRINT_DUR(1,"of duration ",slice->dur,0);
	MPRINT_DUR(1," at offset ",slice->phase,1);

	list_add_tail( &slice->list, &sched->slice_list );
	sched->slice_count++;

	// update total allocated
	sched->allocated = (micop->phase + micop->duration);
    //}
    //

    return 0;
}


/*--------------------------------------------------------------------------*/

/* Add a frame to the new schedule; details in the micop argument.
 * Various checks are done to verify it will be a consistent schedule.
 *  - valid pcpu
 *  - valid vcpu within domain
 *  - (see mic_check_new_slice)
 *
 * There are various calling quirks:
 * (a) if the the slacktime field is nonzero, the other slice parameters
 *   are ignored and the vcpu is simply added to the slack list.
 */
static int mic_put_set( struct domain *dom,
                          struct xen_domctl_sched_micart *micop )
{
    struct mic_schedule *sched;
    //struct mic_slice *slice;
    struct vcpu *vcpu;
    int pcpuid = micop->pcpu;
    int vcpuid = micop->vcpu;

    // Establish a valid PCPU and VCPU
    vcpu = mic_validate_pcpu_vcpu( dom, pcpuid, vcpuid );
    if (NULL == vcpu) {
        return (-EINVAL);
    }
    vcpu = dom->vcpu[ vcpuid ];             /* real vcpu */
    sched = &SNEW(PCPU_INFO(pcpuid));       /* the new schedule */

    if (mic_check_new_slice(micop,sched)) {
        return( -EINVAL );
    }
/*
    // Sane enough to try allocating a slice now
    slice = xmalloc(struct mic_slice);
    if ( NULL == slice) {
	return( -ENOMEM );
    }

    //Only create new slice if duration is given
    //MPRINT (1, "sdom.duration == %ld\n", micop->duration);
    //if ( micop->duration != 0 )
    //{
	slice->vcpu = vcpu;
	slice->pcpu = pcpuid;
	slice->phase = micop->phase;
	slice->dur = micop->duration;

	MPRINT(1,"** MiCART Adding slice to PCPU-%d ",pcpuid);
	MPRINT_DUR(1,"of duration ",slice->dur,0);
	MPRINT_DUR(1," at offset ",slice->phase,1);

	list_add_tail( &slice->list, &sched->slice_list );
	sched->slice_count++;

	// update total allocated
	sched->allocated = (micop->phase + micop->duration);
    //}
    //
*/
    return 0;
}
//


/*--------------------------------------------------------------------------*/

/**
 * Set scheduler parameters ( xen_domctl_sched_micart ). 
 * For argument defintions, see: domctl.h
 * All setting is done on the NEW_sched schedule, not the currently
 * running one!
 *  op->micart.function  (XEN_MIC_FUNCTION_: slice, clear, swap, opts)
 *  op->micart.options
 *  op->micart.helper
 *  op->micart.pcpu
 *  op->micart.vcpu
 *  op->micart.period
 *  op->micart.phase
 *  op->micart.duration
 *
 * XEN_MIC_FUNCTION_slice  -- add a slice
 * XEN_MIC_FUNCTION_clear  -- clear the new schedule
 * XEN_MIC_FUNCTION_swap   -- swap current schedule with new
 * XEN_MIC_FUNCTION_opts   -- set options 
 *
 * Setting the function=swap will cause the swap bit to be set for
 * all PCPUs and lead to the NEW schedule becoming CURRENT and the current
 * becoming NEW. (The other parameters in an op will be ignored if the
 * execute flag is set and the DOMCTL_SCHEDOP cmd is putinfo.)
 *
 * Setting the function=clear will remove all of the slices and settings for
 * the NEW schedule.
 *
 * Setting the function=opts will cause various options to be set/cleared
 * according to the options word's bits (XEN_MIC_OPTION_):
 *
 * @param[in] d pointer to the domain to be adjusted
 * @param[in] op pointer to the scheduler operation struction
 * @return 0 is returned on success. -EINVAL is returned if a setting is invalid.
 */
static int mic_putinfo(struct domain *d, struct xen_domctl_scheduler_op *op)
{
    int func = op->u.micart.function;
    MPRINT(0,"mic_putinfo");

    /* Handle the 'swap' function: make new schedule current
     */
    if (XEN_MIC_FUNCTION_swap == func) {
        return mic_set_swap_schedule();
    }

    /* Handle the 'clear' function: clear out the new schedule
     */
    if (XEN_MIC_FUNCTION_clear == func) {
        return mic_clear_new_schedule();
    }

    /* Handle the 'opts' function: parse and set options
     */
    if (XEN_MIC_FUNCTION_opts == func) {
        return mic_new_schedule_opts(d,&op->u.micart);
    }

    /* Handle the 'default' function: parse and set options
     * 'default' function is configured right now set a frame
     */
    if (XEN_MIC_FUNCTION_default == func) {
        return mic_put_set(d, &op->u.micart);
    }
    //

    /* Verify the "slice" function.  Error if not.
     */
    if (XEN_MIC_FUNCTION_slice != func) {
        MPRINT(1,"** MiCART mic_putinfo invalid function: %d\n",op->u.micart.function);
        return( -EINVAL );
    }

    return  mic_put_slice( d, &op->u.micart );
}



/**
 * Handle enquiry regarding schedule (XEN_DOMCTL_SCHEDOP_getinfo).
 * The structure pointed to by op is modified here; this will be shipped
 * back to the caller (typically dom0 kernel), eventually ending up in 
 * some management utility like 'xm'.
 *  op->micart.function  (XEN_MIC_FUNCTION_: slice,  opts)
 *  op->micart.options
 *  op->micart.helper
 *  op->micart.pcpu
 *  op->micart.vcpu
 *  op->micart.period
 *  op->micart.phase
 *  op->micart.duration
 *
 * Two functions are supported
 * XEN_MIC_FUNCTION_slice  -- query a slice
 * XEN_MIC_FUNCTION_opts   -- query options 
 *
 * If the options "NEW" bit is set on call, then the query is assumed to 
 * pertain to the new schedule (being loaded); otherwise it is for the
 * current (running) schedule.
 *
 * [slice]  See: mic_getslice
 * [opts] The caller specifies the DOMAIN and VCPU.  On return, the OPTIONS
 *    and HELPER fields are set.
 */
static int mic_getinfo(struct domain *d, struct xen_domctl_scheduler_op *op)
{
    struct xen_domctl_sched_micart *sdom = &op->u.micart;
    int func = sdom->function;
    int newp = (XEN_MIC_OPTION_NEW & sdom->options);

    // Debug printing
    MPRINT (0, "\nmic_getinfo\n");
    MPRINT (0, "sdom.function == %d\n", sdom->function);
    MPRINT (0, "sdom.helper == %d\n", sdom->helper);
    MPRINT (0, "sdom.vcpu == %d\n", sdom->vcpu);
    MPRINT (0, "sdom.pcpu == %d\n", sdom->pcpu);
    MPRINT (0, "sdom.period == %ld\n", sdom->period);
    MPRINT (0, "sdom.options == %d\n", sdom->options);
    MPRINT (0, "sdom.phase == %ld\n", sdom->phase);
    MPRINT (0, "sdom.duration == %ld\n", sdom->duration);
    //

    if (XEN_MIC_FUNCTION_slice == func) { /* get SLICE info */
        return mic_get_slice_info( sdom, newp );
    }

    if (XEN_MIC_FUNCTION_opts == func) { /* get OPTIONS */
        uint32_t vcpuid = sdom->vcpu;
        struct mic_domain_info *dinfo = DOM_INFO(d);
        //sdom->options = 0;

        if (vcpuid >= MAX_VIRT_CPUS) {
            MPRINT(0,"*** MiCART invalid vcpuid: %u\n", vcpuid );
            return( -EINVAL );
        }
        if (dinfo->helper) {
            sdom->options |= XEN_MIC_OPTION_HELPER;
            sdom->helper = dinfo->helper->domain_id;
        }
        if (dinfo->realtime) {
            sdom->options |= XEN_MIC_OPTION_REALTIME;
        }
        /* determine whether vcpu accepts slacktime */
        if (mic_accepts_slack( newp,  d->vcpu[vcpuid]) ) {
            sdom->options |= XEN_MIC_OPTION_SLACK;
        }
        return(0);
    }

    /* No other getinfo functions */
    MPRINT(0,"*** MiCART invalid function (%d) to MiCART getinfo\n", func);
    return (-EINVAL);
}

/**
 * Fetch information about the slice indicated in sdom for running
 * schedule (or new schedule if newp is nonzero).
 * The caller specifies a particular PCPU and a SLICE index (as VCPU).
 * On return the parameters for the indexed slice on the PCPU will be 
 * filled in the micart_schedule structure: pcpu, vcpu, domid (helper),
 * period, phase, duration.  The calling domain arg d is ignored here.
 * return error status (0=ok)
 */
static int
mic_get_slice_info( struct xen_domctl_sched_micart *sdom, int newp )
{
    unsigned int slice_index = sdom->vcpu;
    int pcpuid = sdom->pcpu;
    struct mic_schedule *sched;
    struct mic_slice *mslice;

    MPRINT(0, "\nmic_get_slice_info\n");
    MPRINT(0, "newp == %d\n", newp);
    MPRINT(0,"** MiCART getinfo for slice %u on PCPU-%d (%s schedule)\n",
           slice_index, pcpuid, (newp ? "NEW" : "RUNNING") );

    sched = mic_get_sched( pcpuid, newp );
    if (NULL == sched) {
        MPRINT(0,"** MiCART schedule not found for pcpu-%d (%d)\n", pcpuid, newp);
        return (-EINVAL);
    }
    mslice = mic_get_slice( sched, slice_index );
    if (NULL == mslice) {
	MPRINT(0,"** MiCART schedule mslice == NULL\n");
        return (-EINVAL);
    }
    sdom->phase    = mslice->phase;
    sdom->vcpu     = mslice->vcpu->vcpu_id;
    sdom->pcpu     = mslice->pcpu;
    sdom->duration = mslice->dur;
    sdom->helper   = mslice->vcpu->domain->domain_id;
    // Debug printing
    MPRINT (0, "sdom.function == %d\n", sdom->function);
    MPRINT (0, "sdom.helper == %d\n", sdom->helper);
    MPRINT (0, "sdom.vcpu == %d\n", sdom->vcpu);
    MPRINT (0, "sdom.pcpu == %d\n", sdom->pcpu);
    MPRINT (0, "sdom.period == %ld\n", sdom->period);
    MPRINT (0, "sdom.options == %d\n", sdom->options);
    MPRINT (0, "sdom.phase == %ld\n", sdom->phase);
    MPRINT (0, "sdom.duration == %ld\n", sdom->duration);
    //
    return(0);
}



/**
 * Retrieve the sindex'th slice (if it exists) of the given schedule.
 * Return NULL if out of range.
 */
static struct mic_slice*
mic_get_slice( struct mic_schedule *sched, unsigned int sindex )
{
    struct list_head *p0 = &sched->slice_list;
    struct list_head *p = p0;
    int ns=0;
    while (p->next != p0) {
        p = p->next;
        if (sindex) {
            --sindex;
            ++ns;
        } else {
            return list_entry(p, struct mic_slice, list);
        }
    }
    MPRINT(2,"** MiCART no such slice: %u on pcpu-%d (has %d slices)\n",
               sindex, sched->pcpu, ns );
    return NULL;                /* no such slice */
}



/**
 * Return the micart schedule for indexed pcpu.
 * If newp, then it is the new schedule. Otherwise it is the current.
 * If the pcpu is invalid, return NULL.
 */
static struct mic_schedule*
mic_get_sched( int pcpuid, int newp )
{
    struct mic_pcpu_info *pinfo = PCPU_INFO(pcpuid);
    MPRINT(0, "\nmic_get_sched\n");
    if (NULL == pinfo) {
        /* oops */
        return NULL;
    }
    if (newp) {
        return &SNEW(pinfo);       /* the new schedule */
    }
    return &SCUR(pinfo);       /* the current schedule */
}



/* Lookup whether vcpu accepts slacktime and return 1 if so, 0 otherwise.
 * Algorithm: scan each slack_list in the new (newp!=0) or current
 * (newp=0) schedule for the vcpu.
 */
static int
mic_accepts_slack( int newp, struct vcpu* vcpu)
{
    struct mic_schedule *sched;
    struct list_head *p, *tmplh;
    struct mic_slack_vcpu  *msvc;
    int pcpuid;

    if (NULL == vcpu) {
        return 0;               /* e.g. bad vcpuid */
    }
    for (pcpuid=0; pcpuid<mic_priv.ncpus; pcpuid++) {
        if (newp) {
            sched = &SNEW(PCPU_INFO(pcpuid));       /* the new schedule */
        } else {
            sched = &SCUR(PCPU_INFO(pcpuid));       /* the current schedule */
        }
        list_for_each_safe(p, tmplh, &sched->slack_list) {
            msvc = list_entry(p, struct mic_slack_vcpu, list);
            if (msvc->vcpu == vcpu) {
                return 1;
            }
        }
    }
    return 0;
}


/******************************************************************************
 **                               Scheduler API
 **                               - CPU Hooks -
 */


/**
 * API function notes when a new VCPU has been added.
 * This is called at the very end of sched_init_vcpu.
 * Allocates and initializes mic_vcpu_info for the new VCPU
 *
 * Note that idle domain VCPUs will also be added here; we ignore them.
 * 
 * The current processor binding is noted.
 * The new PCPU bindings is set to "unbound".
 * Note that the apparent PCPU (vc->processor) could easily be invalid
 * with respect to MiCART schedule since it was picked by Xen for load
 * balancing reasons. 
 *
 * Initially, vcpus will be assigned slack time only in the current schedule.
 * This should be enough to get them booted on an system that is not
 * fully booked with allocated slices.  The correct allocation must
 * be done by scheduling commands for the "new" schedule.
 *
 * @param[in] vc the newly minted vcpu
 * @return status code, 0 on success, nonzero on error
 */
MICAPI(int)
api_vcpu_init( struct vcpu *vc )
{
    struct mic_vcpu_info *vc_info;
    struct mic_domain_info *dominfo;
    struct domain* d;
    int rc, pcpu;

    /*    s_time_t now = NOW(); */
    ASSERT(vc != NULL);
    d = vc->domain;
    ASSERT( NULL != d );
    if (is_idle_vcpu(vc)) {
        return 0;
    }
    /* count up another VCPU for this domain */
    dominfo = DOM_INFO(d);
    ASSERT( NULL != dominfo );
    dominfo->nvcpus++;

    cpu_set(vc->processor, mic_priv.idlers);

    MPRINT(1,"** MiCART api_vcpu_init vcpu-%d of domain-%d\n",
           vc->vcpu_id,d->domain_id);
    mic_priv.nvcpus_created++;
    pcpu = vc->processor;

    vc_info = xmalloc(struct mic_vcpu_info);
    if ( NULL == vc_info) {
        return( -ENOMEM );
    }
    vc->sched_priv = vc_info;

    vc_info->owner = d;
    vc_info->run_state = MIC_VCPU_UNINITIALIZED;
    vc_info->cur_pcpu =  pcpu;
    vc_info->new_pcpu = MIC_PCPU_UNBOUND;

    /* Initialize the PCPU scheduler structures if needed.
     */
    if (! PCPU_INFO(pcpu)) {
        rc = mic_init_pcpu( pcpu );
        if (rc) {
            return rc;
        }
    }
    /* If the current schedule is the unconfigured boot schedule, then
     * add this vcpu to the slack list of its apparent pcpu so it gets
     * some cycles. It could need to be removed from here later when its
     * correct pcpu is learned!
     */
    if (SCHED_UNCONFIGURED( SCUR( PCPU_INFO(pcpu) ) )) {
        rc = mic_add_slack_vcpu( &SCUR( PCPU_INFO(pcpu) ), vc );
    }

    /* We're using the HPET to push info into domains, init the HPET for this
     * VCPU.
     */
//    printk("Before HPET Init.\n");
    //hpet_init(vc);
//    printk("After HPET Init.\n");

    return rc;
}


/*--------------------------------------------------------------------------*/

/**
 * Note when a VCPU has been decommissioned.
 * 
 * API function. Frees api_vcpu_info for the new VCPU. 
 * Increment nvcpus_destroyed count.
 *
 * @param[in] vc the about-to-be destroyed vcpu
 */
MICAPI(void)
api_vcpu_destroy( struct vcpu *vc )
{
    struct mic_vcpu_info * const vc_info = VCPU_INFO( vc );
    struct mic_domain_info *dominfo;

    MPRINT(1,"* MiCART api_vcpu_destroy vcpu-%d\n", vc->vcpu_id );
    BUG_ON( NULL == vc_info );     /* Sanity check */

    /* count down another VCPU for this domain */
    if (NULL != vc->domain) {
        dominfo = DOM_INFO(vc->domain);
        if (NULL != dominfo) {
            dominfo->nvcpus--;
        }
    }

    mic_priv.nvcpus_destroyed++;

    xfree( vc_info );   /* free the mic_vcpu_info memory */
}



/******************************************************************************
 **                               Scheduler API
 **                              - Domain Hooks -
 */


/**
 * Prepares a Domain to be added to scheduling.
 *
 * API function is indirectly called by domain_create, whenever
 * a new domain is created.  The new domain will get default parameters
 * until the user adjusts them explicitly:  realtime=false.
 *
 * Idle domain is ignored here.
 *
 * @return 0 on success, a -ENOMEM if it failed to allocate memory.
 */
MICAPI(int)
api_init_domain(struct domain *dom)
{
    struct mic_domain_info *dinfo;
    if ( is_idle_domain(dom) ) {
        MPRINT(1,"* MiCART api_init_domain( domain-%d ) -- IDLE\n", dom->domain_id);
        My_IdleDom = dom;       /* Hack */
        return 0;
    }
    MPRINT(1,"* MiCART api_init_domain( domain-%d )\n", dom->domain_id);

    if (0 == dom->domain_id) {  /* Hack */
        My_Dom0 = dom;
    }
 
    mic_priv.ndoms_created++;

    dinfo = xmalloc(struct mic_domain_info);
    if (NULL == dinfo) {
        return( -ENOMEM );
    }
    dom->sched_priv = dinfo;
    dinfo->owner = dom;
    dinfo->realtime = 0;
    dinfo->helper = NULL; 
    dinfo->nvcpus = 0;
    return 0;
}

/*--------------------------------------------------------------------------*/

/**
 * API Function frees memory associated with a domain
 * Idle domain is ignored here.
 */
MICAPI(void)
api_destroy_domain(struct domain *d)
{
    struct mic_domain_info *d_info;
    if ( is_idle_domain(d) ) {
        return;
    }
    MPRINT(1,"* MiCART api_destroy_domain( domain-%d )\n", d->domain_id );
    mic_priv.ndoms_destroyed++;
    d_info = DOM_INFO(d);
    if (d_info) {
        xfree( DOM_INFO(d) );
    }
}




/******************************************************************************
 **                               Scheduler API
 **                              - Wake/Sleep -
 */

/**
 * Update the sdom for a domain which has just been unblocked.
 * Mark it runnable. If this VCPU is the one that ought to be
 * running now (scheduled slice) then signal the scheduler to
 * reschedule it.
 *
 * If we are currently running an idle vcpu, then always signal
 * do_schedule.
 *
 * @param[in] vcpu pointer to VCPU that has become unblocked.
 */
MICAPI(void)
api_wake(struct vcpu *vc)
{
    struct mic_vcpu_info *vinfo = VCPU_INFO(vc);
    int pcpu = vc->processor;
    struct mic_schedule *sched;
    struct mic_slice *slice;

    BUG_ON( is_idle_vcpu(vc) ); /* idle vcpu should never "wake" */

    MPRINT(3,"MiCART Wake vcpu-%d of dom-%d\n", vc->vcpu_id,
           vc->domain->domain_id );

    MICCPU_INCF(nwake,pcpu);

    if (!vinfo) {
        MPRINT(3,"* MiCART Wake called on vcpu with no priv info.\n");
        return;
    }
    if ( unlikely(per_cpu(schedule_data, pcpu).curr == vc) ) {
        MICCPU_INCF(nwake_running,pcpu);
        return;
    }

    if (MIC_VCPU_RUNNABLE == vinfo->run_state) {
        /* no state change, don't do_schedule unless this PCPU
         * is currently running an idler.
         */
        MICCPU_INCF(nwake_runnable,pcpu);
        if (is_idle_vcpu(per_cpu(schedule_data, pcpu).curr)) {
            cpu_raise_softirq( pcpu, SCHEDULE_SOFTIRQ ); /* stop loafing */
        }
        return;
    }
    /* State changed to runnable: possibly raise softirq. */
    vinfo->run_state = MIC_VCPU_RUNNABLE;

    /* IF this VCPU *ought* to be the one running in the current 
     * slice (and it isn't) OR there is not any schedule yet (dom0 boot time),
     * then send a schedule softirq to Xen so the pcpu will
     * switch back to it.  
     */
    sched = &SCUR(PCPU_INFO(pcpu));
    slice = sched->cur_slice;
    if (slice && (slice->vcpu == vc)) {
        MPRINT(3,"* MiCART raise scheduled soft-IRQ on PCPU-%d\n",pcpu);
        cpu_raise_softirq( pcpu, SCHEDULE_SOFTIRQ );
    } else if (SCHED_UNINITIALIZED(sched)) {
        MPRINT(3,"* MiCART raise Unscheduled soft-IRQ on PCPU-%d\n",pcpu);
        cpu_raise_softirq( pcpu, SCHEDULE_SOFTIRQ );
    }
}


/*--------------------------------------------------------------------------*/

/**
 * This implements hook ".sleep" in the scheduler api. It is called when
 * the VCPU has become blocked (RUNSTATE_offline). This can happen when
 * an I/O request from the VCPU's domain must be handled by some other
 * domain, among other reasons.
 * 
 *
 * @param[in] vcpu pointer to vcpu that has become blocked.
 */
MICAPI(void)
api_sleep( struct vcpu *vc )
{
    struct mic_vcpu_info *vinfo = VCPU_INFO(vc);
    BUG_ON( is_idle_vcpu(vc) ); /* this vcpu should never sleep! */
    MPRINT(2,"* MiCART Sleep vcpu-%d of dom-%d\n", vc->vcpu_id,
           vc->domain->domain_id );
    
    if (!vinfo) {
        MPRINT(1,"* MiCART Sleep called on vcpu with no priv info.\n");
        return;
    }
    
    vinfo->run_state = MIC_VCPU_BLOCKED;

    MICCPU_INCF(nsleep,vc->processor);

    /* If this is the current vcpu, then send schedule softirq to Xen so the
     * pcpu gets something else to do.
     */
    if (1) {                    /* TBD */
        cpu_raise_softirq( vc->processor, SCHEDULE_SOFTIRQ );
    }
}




/******************************************************************************
 **                               Scheduler API
 **                               - Monitoring -
 */


/**
 * Dump Settings API hook.
 * 
 * The 'r' key in the Xen debugger will trigger this report.
 * Note that printing this on any serial console will be a slow process
 * relative to the update rate for the rapidly changing statistics.
 * We try to take snapshots that should be consistent at least per cpu.
 */
MICAPI(void)
api_dump_settings(void)
{
    volatile struct mic_private priv;
    volatile struct mic_cpu_stats pstats;
    int pcpu;

    priv = mic_priv;
    priv.ndump++;

    printk("\n MiCART Scheduler (exp/atomic) Data:\n");
    printk("  Scheduler version: 1.0 - %s @ %s (%u)\n", __DATE__,__TIME__,priv.ndump);
    printk("  MiCART dbg level:  %d\n",MIC_DEBUG_LEVEL);
    printk("  PCPUs initialized: %u\n", priv.ncpus);
    printk("  Domains created:   %u\n", priv.ndoms_created);
    printk("  Domains destroyed: %u\n", priv.ndoms_destroyed);
    printk("  VCPUs created:     %u\n", priv.nvcpus_created);
    printk("  VCPUs destroyed:   %u\n", priv.nvcpus_destroyed);
    printk("  Calls to pickcpu:  %lu\n", priv.npickcpu);
    printk("  Calls to adjust:   %lu\n", priv.nadjust);

    for (pcpu=0; pcpu<priv.ncpus; pcpu++) {
        pstats = per_cpu(mic_privcpu,pcpu);
        printk("  PCPU-%d\n", pcpu);
        printk("    Calls to wake:     %lu\n", pstats.nwake);
        printk("     already running:  %lu\n", pstats.nwake_running);
        printk("     vcpu runnable:    %lu\n", pstats.nwake_runnable);
        printk("     not runnable:     %lu\n", pstats.nwake_not_runnable);
        printk("    Calls to sleep:    %lu\n", pstats.nsleep);
        printk("    Calls to schedule: %lu\n", pstats.ndo_sched);
        printk("         unconfigured: %lu\n", pstats.nds_unconfig);
        printk("      picked idle dom: %lu\n", pstats.nds_idle_dom);
        printk("         initializing: %lu\n", pstats.nds_init);
        printk("         slice finish: %lu\n", pstats.nds_finished);
        printk("        slice blocked: %lu\n", pstats.nds_blocked);
        printk("        slice resumed: %lu\n", pstats.nds_resumed);
        printk("           exceptions: %lu\n", pstats.nexceptions);
        printk("    Frames started:    %lu\n", pstats.nframes_started);
        printk("    Frames overrun:    %lu\n", pstats.noverruns);
    }
}

/*--------------------------------------------------------------------------*/

/**
 * dump relevant per-physical cpu state for a run queue dump  This is invoked
 * by the 'q' command in the xen monitor.
 *
 * @param[in] cpu the index of the physical CPU to dump
 */
MICAPI(void)
api_dump_cpu_state(int cpu)
{
    int topcpu = last_cpu(cpu_possible_map);

    if ((cpu < 0) || (cpu > topcpu)) {
        printk("MiCART ERROR: there is no pcpu-%d!\n", cpu);
        return;
    }
    printk(" \n + PCPU-%d\n", cpu);

    printk("  \\----------------(Current)-----------------\n");
    mic_dump_sched(&SCUR(PCPU_INFO(cpu)));

    printk("  \\------------------(New)-------------------\n");
    mic_dump_sched(&SNEW(PCPU_INFO(cpu)));
}




/******************************************************************************
 **                               Scheduler API
 **                               - Scheduler -
 */

/**
 * MiCART main scheduler function.
 *
 * Figures out which VCPU to run next for how long. There are several causes
 * that can instigate this call:
 *  A. Arrested: timer elapsed and current VCPU it was preempted
 *  B. Blocked: current vcpu has become Blocked and cannot proceed.
 *  C. Continue: current slice with time remaining has become unblocked
 *
 * Cases B and C are triggered internally via raising a SCHEDULE_SOFTIRQ.
 *
 * Outline:
 *  Determine why schedule was called (A,B,C), and run relevant code:
 *
 *  A. vcpu was ARRESTED when the cur_slice time period ended
 *       (or, rarely, was blocked with no time remaining)
 *     Advance cur_slice to the next slice in the schedule
 *     Determine the earliest time this next slice can be released
 *     If this is now, or past, or very soon:
 *        pick the cur_slice vcpu and slice dur;
 *     else start time is appreciably in the future--fairly pick a runnable
 *        vcpu allowing slacktime (or the idle vcpu if none) to make
 *        up the time until the next slice can run.
 *
 *  B. cur_slice was BLOCKED with time remaining
 *     If there is a runnable companion of the blocked vcpu, run it;
 *     this allows stub domains to share the slice of an HVM guest.
 *     If no such companion is identified, then fairly pick a 
 *     runnable VCPU allowing slacktime (or the idle vcpu if none)
 *     Schedule it to run for the remainder of the current slice.
 *
 *  C. blocked cur_slice may CONTINUE
 *     -Verify current vcpu is an idler (or slack vcpu)
 *     -Verify time remains in the slice
 *     -Verify cur_slice vcpu is runnable
 *     If any check fails then fallback to an idler vcpu
 *     else schedule the cur_slice vcpu to run for the remainder
 *
 *  Return the selected vcpu and duration.
 *
 * Before a proper MiCART schedule has been initialized, the scheduler
 * has only slack_list vcpus. When this is current, the slack vcpus
 * are cycled, round robin, each getting a default 30msec slice.
 *
 * @param[in] time The time the last task was preempted.
 * @return a task_slice structure naming next VCPU and time to run it
 */
MICAPI(struct task_slice)
api_do_schedule(s_time_t now)
{
    int pcpu = current->processor;
    struct mic_pcpu_info *pinfo = PCPU_INFO(pcpu);
    struct mic_schedule *sched = &SCUR( pinfo );
    struct mic_slice *bslice;
    s_time_t tardy;  /* ns now is beyond our scheduled next start  */

    MICCPU_INCF(ndo_sched,pcpu);

    // Case u. Unconfigured
    if (SCHED_UNCONFIGURED((*sched))) {
        MICCPU_INCF(nds_unconfig,pcpu);
        sched->frame_start = now; /* start a new frame */
        return mic_run_slack(now,sched,MIC_DEFAULT_FRAME_DUR,NULL);
    }
    // Case y. This schedule is brand spanking new--initialize.
    if (SCHED_UNINITIALIZED(sched)) {
        MICCPU_INCF(nds_init,pcpu);
        return mic_first_dosched(now,sched);
    }

    tardy = (now - sched->next_start_time);

    if (tardy > TARDY_DUR) {       /* Trap schedule slips here */
        MPRINT(1,"** MiCART: PCPU-%d is running %ld ns late!\n",pcpu,tardy);
        MPRINT(1,"***  expected preempt at %ld but now=%ld\n",
               sched->next_start_time, now );
    }

    // Case A. Current slice effectively is finished; start next slice
    if (ABS(tardy) < CETBD_DUR) {  // now ~ next_start_time
        MPRINT(1,"(A) PCPU-%d slice is effectively over (d=%ld ns)\n",
               pcpu,tardy);
        MPRINT(1," tardy = (%ld - %ld) = %ld \n",now,sched->next_start_time,tardy);
        MICCPU_INCF(nds_finished,pcpu);
	MPRINT(1,"\nTop\n");
	//return mic_irq(now,sched,MIC_DEFAULT_FRAME_DUR,NULL);
        return mic_next_slice(now,sched);
    }

    // Case B. Current slice is blocked but (nontrivial) time remains
    if (!vcpu_runnable(sched->cur_slice->vcpu)) {
        MPRINT(1,"(B) PCPU-%d slice is blocked at time %ld ns.\n",
            pcpu,now);
        sched->blocked_slice = sched->cur_slice;
        MICCPU_INCF(nds_blocked,pcpu);
        return mic_pick_alternate(now,sched,ABS(tardy));
    }

    // Case C. Current slice vcpu was blocked but is now runnable
    bslice = sched->blocked_slice;
    if (bslice && vcpu_runnable(bslice->vcpu)) {
        MPRINT(1,"(C) PCPU-%d slice is un blocked at time %ld ns.\n",
            pcpu,now);          
        MICCPU_INCF(nds_resumed,pcpu);
        return mic_run_unblocked_slice(now,sched);
    }


    /* If none of the above applies, some basic assumption has been violated.
     * Recover strategy: run a default slack frame in attempt to stay afloat.
     */
    if (! MICCPU_GETF(nexceptions,pcpu) ) {
        printk("ERROR: MiCART do_schedule exception! Run slack to stay alive.\n" );
    }
    MICCPU_INCF(nexceptions,pcpu);

    // If you fall through move to the next slice
    MICCPU_INCF(nds_finished,pcpu);
    //MPRINT(1,"Bottom\n");
    //return mic_irq(now,sched,MIC_DEFAULT_FRAME_DUR,NULL);
    return mic_next_slice(now,sched);
    //

// Remove in final code
/*
    // the next debug expression should be removed asap...
    if (bslice) { 
	struct vcpu *vcpu = bslice->vcpu; 
	MPRINT(0," if tardy = (%ld - %ld) = %ld \n", now, sched->next_start_time, tardy);
	MPRINT(1," CETBD_DUR = %ld \n", CETBD_DUR);
        if (vcpu) { 
            printk("\n BLOCKED SLICE: vcpu-%d phase %ld\n", 
        	    vcpu->vcpu_id, bslice->phase ); 
        } else { 
            printk("\n BLOCKED SLICE -- null vcpu?!\n"); 
        } 
    } else { 
	printk("BSLICE == NULL\n");	
	MPRINT(0,"else tardy = (%ld - %ld) = %ld \n", now, sched->next_start_time, tardy);
	MPRINT(1,"CETBD_DUR = %ld \n", CETBD_DUR);
    } 
    //
return mic_next_slice(now,sched);
*/
    return mic_run_slack(now,sched,MIC_DEFAULT_FRAME_DUR,NULL);
}


/*--------------------------------------------------------------------------*/

//
/* (mic_irq)
 * Attempt to set the HPET value for the next slice start time
 */
static void 
mic_irq( s_time_t now, struct mic_schedule *sched, s_time_t phase,
               struct task_slice tslice )
{
    struct domain *d;

    // Attempt to send interrupt, set timer
    d = tslice.task->domain;

    printk("domain_id = %d\n", d->domain_id);

    if ( (d->domain_id != 0) && (d->domain_id != 32767) ) {
	//MPRINT(0, "vioapic\n");
	//vioapic_irq_positive_edge(d, 3);
	MPRINT(0, "set_hpet\n");
	printk("phase == %lu\n", phase);
	printk("now == %lu\n", now);
	printk("tslice.time == %lu\n", tslice.time);
	printk("sched->next_start_time == %lu\n", sched->next_start_time);
	micart_set_hpet(tslice.task, sched->next_start_time);
    }

    // End attempt
}


/*--------------------------------------------------------------------------*/

/**
 * Pick the PCPU to run VCPU. 
 *  This is pretty well fixed in MiCART--a given VCPU is
 * bound to a particular PCPU by the running schedule, noted in the
 * mic_vcpu_info structure.  The scheduler commands and the cpu
 * affinity records must agree BY CONSPIRACY of the operator loading
 * the micart schedule!
 *
 * Affinity status at domain creation is still a bit of a mystery.
 * E.g. using XM create, the argument: cpus="1,3" 
 * can be used to restrict the VCPUs to PCPUs 1 and 3
 * The argument:   cpu=1
 * would stipulate that vcpu0 must be on pcpu-1
 * -  The create() method of XendDomainInfo handles creation of domains.
 * - Calls eventually xc_vcpu_setaffinity
 * - Hypercall to XEN_DOMCTL_setvcpuaffinity  (domctl.c)
 * - Invokes vcpu_set_affinity(vcpu,new_affinity) (schedule.c)
 *   (error if v->domain->is_pinned)
 * - Sets bit _VPF_migrating on vcpu->pause_flags
 * - vcpu_sleep_nosync(vcpu)
 * - vcpu_migrate(v) << ! >>
 *
 * When is this API function actually called?
 * AFAWK called only by vcpu_migrate() in scheduler.c
 * These in turn can potentially invoke vcpu_migrate():
 *   __vcpu_set_affinity() ; domctl( XEN_DOMCTL_setvcpuaffinity )
 *   cpu_disable_scheduler()
 *   context_saved()
 *   vcpu_force_reschedule()  <== do_vcpu_op(set/stop_periodic_timer)
 *
 * If this routine is called before the VCPU has been bound to a
 * particular PCPU, then it will return: 0.  This default should at
 * least always be legal.
 *
 * When there is no schedule in place, e.g. at boot time, then very
 * little information is available. Even mic_priv.ncpus == 0!
 *
 * Note that the bitmask of CPUs on which this VCPU may run which Xen
 * keeps in the vcpu struct (cpumask_t cpu_affinity) must always be
 * reconciled with micart schedule.  See: cpumask.h
 */
int api_pick_cpu(struct vcpu *vc)
{
    cpumask_t cpus;
    cpumask_t idlers;
    int cpu;
    int pcpu=0;
    int vid = vc->vcpu_id;
    struct mic_pcpu_info *pinfo = PCPU_INFO(pcpu);
    struct mic_schedule *sched = &SCUR( pinfo );
    struct mic_vcpu_info *vinfo = VCPU_INFO(vc);

    mic_priv.npickcpu++;

    MPRINT(1,"* MiCART api_pick_cpu for vcpu-%d of Domain-%d\n", vid,
           vc->domain->domain_id );

    /* Check against vinfo if available */
    if (vinfo && pinfo && !SCHED_UNCONFIGURED((*sched))) {
        pcpu = vinfo->cur_pcpu;
        if (MIC_PCPU_UNBOUND != pcpu) {
            MPRINT(1,"** MiCART picks pcpu=%d\n",pcpu);
            return pcpu;
        } 
        MPRINT(1,"** MiCART vcpu-%d info has cur_pcpu unbound\n", vid);
    }

    /** Lifted code from sched_credit.c this could/should be replaced
     ** with something simpler that will work when we have no MiCART schedule
     **/
    /*
     * Pick from online CPUs in VCPU's affinity mask, giving a
     * preference to its current processor if it's in there.
     */
    cpus_and(cpus, cpu_online_map, vc->cpu_affinity);
    cpu = cpu_isset(vc->processor, cpus)
            ? vc->processor
            : __cycle_cpu(vc->processor, &cpus, NR_CPUS);
    ASSERT( !cpus_empty(cpus) && cpu_isset(cpu, cpus) );

    /*
     * Try to find an idle processor within the above constraints.
     *
     * In multi-core and multi-threaded CPUs, not all idle execution
     * vehicles are equal!
     *
     * We give preference to the idle execution vehicle with the most
     * idling neighbours in its grouping. This distributes work across
     * distinct cores first and guarantees we don't do something stupid
     * like run two VCPUs on co-hyperthreads while there are idle cores
     * or sockets.
     */
    idlers = mic_priv.idlers;
    cpu_set(cpu, idlers);
    cpus_and(cpus, cpus, idlers);
    cpu_clear(cpu, cpus);

    while ( !cpus_empty(cpus) )
    {
        cpumask_t cpu_idlers;
        cpumask_t nxt_idlers;
        int nxt;

        nxt = __cycle_cpu(cpu, &cpus, NR_CPUS);

        // if ( cpu_isset(cpu, cpu_core_map[nxt]) )
        // Access method changed
        if ( cpu_isset(cpu, per_cpu(cpu_core_map, nxt)) )
        {
            // ASSERT( cpu_isset(nxt, cpu_core_map[cpu]) );
            // cpus_and(cpu_idlers, idlers, cpu_sibling_map[cpu]);
            // cpus_and(nxt_idlers, idlers, cpu_sibling_map[nxt]);
            ASSERT( cpu_isset(nxt, per_cpu(cpu_core_map, cpu)) );
            cpus_and(cpu_idlers, idlers, per_cpu(cpu_sibling_map, cpu));
            cpus_and(nxt_idlers, idlers, per_cpu(cpu_sibling_map, nxt));
        }
        else
        {
            // ASSERT( !cpu_isset(nxt, cpu_core_map[cpu]) );
            // cpus_and(cpu_idlers, idlers, cpu_core_map[cpu]);
            // cpus_and(nxt_idlers, idlers, cpu_core_map[nxt]);
            ASSERT( !cpu_isset(nxt, per_cpu(cpu_core_map, cpu)) );
            cpus_and(cpu_idlers, idlers, per_cpu(cpu_core_map, cpu));
            cpus_and(nxt_idlers, idlers, per_cpu(cpu_core_map, nxt));
        }

        if ( cpus_weight(cpu_idlers) < cpus_weight(nxt_idlers) )
        {
            cpu = nxt;
            cpu_clear(cpu, cpus);
        }
        else
        {
            cpus_andnot(cpus, cpus, nxt_idlers);
        }
    }
    MPRINT(1,"** MiCART picks pcpu=%d\n",cpu);
    return cpu;
}




/****************************************************************************
 **                               Scheduler API
 **                       - Initialization and Control -
 */

/**
 * Initialize the scheduler by setting up some private data structures.
 *
 * Initialize the Micart api counters in structure mic_priv.
 */
MICAPI(void)
api_init_scheduler(void)
{
    struct mic_cpu_stats *pstats;
    int npcpu = 4;              /* fixme: hardcoded */
    int pcpu;

    cpus_clear(mic_priv.idlers);
    mic_priv.ncpus = 0;
    mic_priv.nvcpus_created = 0;
    mic_priv.nvcpus_destroyed  = 0;
    mic_priv.ndoms_created = 0;
    mic_priv.ndoms_destroyed = 0;
    mic_priv.npickcpu = 0;
    mic_priv.nadjust = 0;
    mic_priv.ndump = 0;

    /* initialize per cpu statistics */
    for (pcpu=0; pcpu<npcpu; pcpu++) {
        pstats = &per_cpu(mic_privcpu,pcpu);
        pstats->nwake  = 0;
        pstats->nwake_runnable = 0;
        pstats->nwake_running = 0;
        pstats->nwake_not_runnable = 0;
        pstats->nsleep  = 0;
        pstats->ndo_sched  = 0;
        pstats->nds_idle_dom = 0;
        pstats->nds_unconfig = 0;
        pstats->nds_init = 0;
        pstats->nds_finished = 0;
        pstats->nds_blocked = 0;
        pstats->nds_resumed = 0;
        pstats->noverruns = 0;
        pstats->nframes_started = 0;
        pstats->nexceptions = 0;
    }
    printk("* MiCART Initialized scheduler for %d PCPUs\n", npcpu);
}

/*--------------------------------------------------------------------------*/


/**
 * Set or fetch domain scheduling parameters. All times in nanoseconds.
 * Per-domain parameters ( xen_domctl_sched_micart ):
 *  op->micart.execute
 *  op->micart.slacktime
 *  op->micart.pcpu
 *  op->micart.vcpu
 *  op->micart.period
 *  op->micart.phase
 *  op->micart.duration
 * 
 *
 * @param[in] d pointer to the domain to be adjusted
 * @param[in] op pointer to the scheduler operation struction
 * @return 0 is returned on success. -EINVAL returned if setting is invalid.
 */
MICAPI(int)
api_adjust(struct domain *d, struct xen_domctl_scheduler_op *op)
{
  mic_priv.nadjust++;
  MPRINT(0, "\napi_adjust\n");

  if ( op->cmd == XEN_DOMCTL_SCHEDOP_putinfo )  {            /* set */
      return mic_putinfo( d, op );

  } else if ( op->cmd == XEN_DOMCTL_SCHEDOP_getinfo ) {      /*  get */
      return mic_getinfo( d, op );
  }
  return 0;
}


/*--------------------------------------------------------------------------*/

struct scheduler sched_micart_def = {
    .name           = "MiCART Hard Real Time Scheduler",
    .opt_name       = "micart",
    .sched_id       = XEN_SCHEDULER_MICART,

    .init           = api_init_scheduler,

    .init_domain    = api_init_domain,
    .destroy_domain = api_destroy_domain,

    .init_vcpu      = api_vcpu_init,
    .destroy_vcpu   = api_vcpu_destroy,

    .sleep          = api_sleep,
    .wake           = api_wake,

    .do_schedule    = api_do_schedule,
    .pick_cpu       = api_pick_cpu,

    .adjust         = api_adjust,

    .dump_settings =  api_dump_settings,
    .dump_cpu_state = api_dump_cpu_state,

};


/******************************************************************************/

/*
 * Local variables:
 * mode: C
 * c-set-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
