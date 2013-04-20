obj-$(CONFIG_MACH_M7_UL) += board-m7.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-regulator.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-gpiomux.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-storage.o
#obj-$(CONFIG_MACH_M7_UL) += board-m7-audio.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-pmic.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-keypad.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-rfkill.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-wifi.o
obj-$(CONFIG_MACH_M7_UL) += board-m7-gpu.o
obj-$(CONFIG_MACH_M7_UL) += display/
CFLAGS_board-m7-display.o += -Idrivers/video
obj-$(CONFIG_MACH_M7_UL) += ../htc_wifi_nvs.o
ifdef CONFIG_BT
	obj-$(CONFIG_MACH_M7_UL) += ../htc_4335_wl_reg.o
endif


