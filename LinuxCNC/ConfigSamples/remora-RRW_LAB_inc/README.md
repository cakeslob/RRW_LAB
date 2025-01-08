# What is this config?

- This confis is a sample test config for Remora. 
- It uses the LinuxCNC INI feature  "#INCLUDE" to compartmentalise the avaiable remora features. 

- This config is an extream example of how one could use "#INCLUDE" 

This INI file is split into several parts, add or remove with a comment 

- remora_main.ini : the main config
- remora_display_axis.inc : where the GUI is configured, the [DISPLAY] section. This makes it easier to switch displays between configs
- remora_emc.inc : [EMC], [TASK], [EMCMOT], [EMCIO], [FILTER], [RS274NGC] ini sections
- remora_joints.inc : where joints and axis are configured, [KINS], [TRAJ], [JOINT], [AXIS] , also hal
- remora_spindle.inc : [SPINDLE] settings and HAL, also spinde encoder HAL
- remora_probe.inc : easyprobe PYVCP and toolsetter remap/config settings/hal
- remora_gpio.hal : where GPIO hal 



- Configure the remora driver 

[REMORA]
DRIVER = spi 
#DRIVER = eth-3.0
PRU_BASE_FREQ = 40000 


