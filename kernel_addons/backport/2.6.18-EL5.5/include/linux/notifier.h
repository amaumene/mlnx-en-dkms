#ifndef __BACKPORT_LINUX_NOTIFIER_H_TO_2_6_26__
#define __BACKPORT_LINUX_NOTIFIER_H_TO_2_6_26__

#include_next <linux/notifier.h>

#define NOTIFY_DONE		0x0000		/* Don't care */

#endif /* __BACKPORT_LINUX_NOTIFIER_H_TO_2_6_26__ */

#ifndef LINUX_NOTIFIER_BACKPORT_TO_2_6_21_H
#define LINUX_NOTIFIER_BACKPORT_TO_2_6_21_H

/* Used for CPU hotplug events occuring while tasks are frozen due to a suspend
 * operation in progress
 */
#define CPU_TASKS_FROZEN       0x0010

#define CPU_ONLINE_FROZEN      (CPU_ONLINE | CPU_TASKS_FROZEN)
#define CPU_UP_PREPARE_FROZEN  (CPU_UP_PREPARE | CPU_TASKS_FROZEN)
#define CPU_UP_CANCELED_FROZEN (CPU_UP_CANCELED | CPU_TASKS_FROZEN)
#define CPU_DOWN_PREPARE_FROZEN        (CPU_DOWN_PREPARE | CPU_TASKS_FROZEN)
#define CPU_DOWN_FAILED_FROZEN (CPU_DOWN_FAILED | CPU_TASKS_FROZEN)
#define CPU_DEAD_FROZEN                (CPU_DEAD | CPU_TASKS_FROZEN)

#endif
