#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    //FrameBuffers
	"/sys/devices/virtual/graphics/fb0",
		
    //MMC Blocks
	"/sys/block/mmcblk0",//The sum of all those partitions below
    "/sys/devices/msm_sdcc.1*",//ALL PARTITIONS
    "/sys/devices/msm_sdcc.3*",//external_sd -- SD Card
    "/sys/devices/platform/msm_hsusb_host*", // OTG USB -- Verified
	
	"/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    //INPUTS
	"/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",
 	"/sys/devices/i2c-3/3-0024/main_ttsp_core.cyttsp4_i2c_adapter/cyttsp4_mt.main_ttsp_core/input/input7*", //Touch Input --Cytt
	"/sys/devices/i2c-12/12-006b/input/input5*" //Was There in list of inputs
	"/sys/devices/platform/msm_ssbi.0/pm8921-core/pm8xxx-keypad/input*",//Verified
    "/sys/devices/platform/msm_ssbi.0/pm8921-core/pm8xxx-pwrkey/input*",//Verified

    // for adb
    "/sys/devices/virtual/tty/ptmx",
    "/sys/devices/virtual/misc/android_adb",
    "/sys/devices/virtual/android_usb/android0/f_adb",
    "/sys/bus/usb",
    NULL
};
