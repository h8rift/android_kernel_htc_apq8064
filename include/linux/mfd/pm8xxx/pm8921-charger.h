#ifndef __PM8XXX_CHARGER_H
#define __PM8XXX_CHARGER_H
#ifdef CONFIG_MACH_HTC
#include <linux/mfd/pm8xxx/pm8921-charger-htc.h>
#else
#include <linux/mfd/pm8xxx/pm8921-charger-nohtc.h>
#endif

#endif /* !__PM8XXX_CHARGER_H */
