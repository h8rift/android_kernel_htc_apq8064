subdir-ccflags-$(CONFIG_ARCH_MSM) += -Iarch/arm/mach-msm

-include $(src)/Makefile.board

obj-$(CONFIG_MACH_HTC) += devices_htc.o  \
			htc_bdaddress.o \
			emmc_partitions.o \
			radio_feedback.o \
			htc_sysinfo.o \
			htc_port_list.o

obj-$(CONFIG_MSM_NATIVE_RESTART) += htc_restart_handler.o

obj-$(CONFIG_HTC_BATT_CORE) += htc_battery_core.o
obj-$(CONFIG_HTC_BATT_8960) += htc_battery_8960.o htc_battery_cell.o

obj-$(CONFIG_HTC_PWRSINK) += htc_pwrsink.o
obj-$(CONFIG_HTC_HEADSET_MGR) += htc_headset_mgr.o
obj-$(CONFIG_HTC_HEADSET_PMIC) += htc_headset_pmic.o
obj-$(CONFIG_HTC_HEADSET_GPIO) += htc_headset_gpio.o
obj-$(CONFIG_HTC_HEADSET_ONE_WIRE) += htc_headset_one_wire.o
obj-$(CONFIG_HTC_HEADSET) += htc_headset.o

CFLAGS_devices_htc.o += -Idrivers/staging/android
