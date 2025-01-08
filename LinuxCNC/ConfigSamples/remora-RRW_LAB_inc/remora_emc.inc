# Basic LinuxCNC config for testing of Remora firmware

#[EMC]
#MACHINE = Remora-XY
#DEBUG = 5
#VERSION = 1.1

[TASK]
TASK = milltask
CYCLE_TIME = 0.010


[EMCMOT]
EMCMOT = motmod
COMM_TIMEOUT = 1.0
COMM_WAIT = 0.010
BASE_PERIOD = 0
SERVO_PERIOD = 1000000

[EMCIO]
EMCIO = io
CYCLE_TIME = 0.100
TOOL_TABLE = tool.tbl

[FILTER]
PROGRAM_EXTENSION = .py Python Script
py = python


[RS274NGC]
PARAMETER_FILE = linuxcnc.var

#[HAL]
#HALFILE = remora-xyz.hal
#HALFILE = mpg.hal
#POSTGUI_HALFILE = postgui_call_list.hal
#HALUI = halui

