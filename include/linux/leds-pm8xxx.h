#ifndef __LEDS_PM8XXX_H__
#define __LEDS_PM8XXX_H__
#ifdef CONFIG_MACH_HTC
#include <linux/leds-pm8xxx-htc.h>
#else
#include <linux/leds-pm8xxx-nonhtc.h>
#endif
#endif /* !__LEDS_PM8XXX_H__ */
