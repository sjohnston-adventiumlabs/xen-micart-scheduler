/****************************************************************************
 * (C) 2010 - Steve Harp - Adventium Labs
 ****************************************************************************
 *
 *        File: xc_micart.c
 *      Author: Steven Harp
 *
 * Description: XC Interface to the MiCART scheduler
 *
 */
#include "xc_private.h"
#include <stdio.h>


int
xc_sched_micart_domain_set(
    int xc_handle,
    uint32_t domid,
    struct xen_domctl_sched_micart *sdom)
{
    DECLARE_DOMCTL;

//TODO
    FILE * pFile;
    uint32_t retval;
    //

    domctl.cmd = XEN_DOMCTL_scheduler_op;
    domctl.domain = (domid_t) domid;
    domctl.u.scheduler_op.sched_id = XEN_SCHEDULER_MICART;
    domctl.u.scheduler_op.cmd = XEN_DOMCTL_SCHEDOP_putinfo;
    domctl.u.scheduler_op.u.micart = *sdom;

    //TODO
    pFile = fopen ("/home/sjohnston/DEBUG.txt","a");
    if (pFile!=NULL)
    {
	fprintf (pFile, "\nxc_micart\n");
	fprintf (pFile, "domctl.cmd == %d\n", domctl.cmd);
	fprintf (pFile, "domctl.domain == %d\n", domctl.domain);
	fprintf (pFile, "domctl.u.scheduler_op.sched_id == %d\n", XEN_SCHEDULER_MICART);
	fprintf (pFile, "domctl.u.scheduler_op.cmd == %d\n", XEN_DOMCTL_SCHEDOP_putinfo);
	fprintf (pFile, "sdom.vcpu == %d\n", sdom->vcpu);
	fprintf (pFile, "sdom.pcpu == %d\n", sdom->pcpu);
	fprintf (pFile, "sdom.period == %d\n", sdom->period);
	fprintf (pFile, "sdom.helper == %d\n", sdom->helper);
	fclose (pFile);
    }
    //

    return do_domctl(xc_handle, &domctl);
}

int
xc_sched_micart_domain_get(
    int xc_handle,
    uint32_t domid,
    struct xen_domctl_sched_micart *sdom)
{
    DECLARE_DOMCTL;
    int err;

    domctl.cmd = XEN_DOMCTL_scheduler_op;
    domctl.domain = (domid_t) domid;
    domctl.u.scheduler_op.sched_id = XEN_SCHEDULER_MICART;
    domctl.u.scheduler_op.cmd = XEN_DOMCTL_SCHEDOP_getinfo;
    domctl.u.scheduler_op.u.micart = *sdom;

    err = do_domctl(xc_handle, &domctl);
    if ( 0 == err ) {
        *sdom = domctl.u.scheduler_op.u.micart;
    }
    
    return err;
}

