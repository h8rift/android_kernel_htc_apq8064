#ifndef __PM8XXX_BMS_H
#define __PM8XXX_BMS_H
#ifdef CONFIG_MACH_HTC
#include <linux/mfd/pm8xxx/pm8921-bms-htc.h>
#else
#include <linux/mfd/pm8xxx/pm8921-bms-nohtc.h>
#endif
#endif /* !__PM8XXX_BMS_H */
