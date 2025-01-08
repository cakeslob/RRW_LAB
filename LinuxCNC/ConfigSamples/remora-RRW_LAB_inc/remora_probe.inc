

[DISPLAY]
PYVCP = Probe_panel.xml

[RS274NGC]
## probne
SUBROUTINE_PATH = macros
ON_ABORT_COMMAND = O <on_abort> call
FEATURES = 12
RETAIN_G43 = 0
INI_VARS = 1
HAL_PIN_VARS = 1

[HAL]
HALFILE = Probe_preload.hal
POSTGUI_HALFILE = Probe_postgui.hal

[HALUI]
MDI_COMMAND = G54
MDI_COMMAND = G55
MDI_COMMAND = G56
MDI_COMMAND = G57
MDI_COMMAND = G58
MDI_COMMAND = G59
MDI_COMMAND = G59.1
MDI_COMMAND = G59.2
MDI_COMMAND = G59.3

MDI_COMMAND = O <probe_toolchange>  CALL [1]
MDI_COMMAND = O <probe_toolchange>  CALL [2]
MDI_COMMAND = O <probe_toolchange>  CALL [3]

MDI_COMMAND = O <probe_x_plus>      CALL
MDI_COMMAND = O <probe_x_minus>     CALL
MDI_COMMAND = O <probe_y_plus>      CALL
MDI_COMMAND = O <probe_y_minus>     CALL
MDI_COMMAND = O <probe_z_minus>     CALL
MDI_COMMAND = O <probe_pocket>      CALL
MDI_COMMAND = O <probe_operations>  CALL [1]
MDI_COMMAND = O <probe_operations>  CALL [2]
MDI_COMMAND = O <probe_operations>  CALL [3]

MDI_COMMAND = O <probe_manual_set>  CALL [0]
MDI_COMMAND = O <probe_manual_set>  CALL [1]
MDI_COMMAND = O <probe_manual_set>  CALL [2]
MDI_COMMAND = O <probe_manual_set>  CALL [3]
MDI_COMMAND = O <probe_escape>      CALL

MDI_COMMAND = O <probe_calibration> CALL

MDI_COMMAND = O <tool_sensor>      CALL


## Last Edited: 23-03-15
# LinuxCNC Version: 2.8

[PROBE]
# Define up to three tool numbers of different probes in your tool table. Set the unused numbers to zero
TOOL_NUMBER_1 = 99
TOOL_NUMBER_2 = 0
TOOL_NUMBER_3 = 0

# Maximum safety travel of your probe in X/Y direction. Value is given by the manufacturer. If in doubt, set it to ~3 mm.
MAX_XY_DISTANCE = 3

# Distance the probe will move back after fast probe. Recommended values between 0.5 and 2 mm.
XY_CLEARANCE = 2

# Maximum safety travel of your probe in z direction. Value is given by the manufacturer. If in doubt, set it to ~2 mm.
MAX_Z_DISTANCE = 2

# Distance the probe will move back after fast probe. Recommended values between 0.5 and 2 mm.
Z_CLEARANCE = 2

# Fast probe velocity. Recommended values between 50 and 500 mm per min.
# Note: All defined velocity values will be checked. Considered values are: MAX_ACCELERATION (x,y and z), DEBOUNCE_TIME and MAX_XY/Z_DISTANCE. 
VEL_FAST = 50

# Slow probe velocity. This value is important for the overall accuracy. Recommended values between 10 and 50 mm per min.
VEL_SLOW = 20

# Fast forward velocity in between pocket probe movements without actual probing.
VEL_FF = 100

# Additional probetrips will lead to a better calibration. Values between 0 and 3 are recommended.
ADD_PROBETRIPS = 1

# Time delay in ms for debouncing probe switch. Try to keep the value as low as possible. Recommended values between 2 and 20 ms.
DEBOUNCE_TIME = 20

# Configure the switch of your probe tool. 0 = NO (normally open), 1 = NC (normally closed)
# Note: The probe signal LED must turn from green to red when you touch the probe tip
PROBE_SWITCH = 0


------------------------------------------------------------------------------------------

#[PYTHON]
# where to find Python code
# code specific for this configuration
#PATH_PREPEND= ./python
# generic support code
#PATH_APPEND= ../../nc_files/remap_lib/python-stdglue

# import the following Python module
#TOPLEVEL= python/toplevel.py

# the higher the more verbose tracing of the Python plugin
#LOG_LEVEL = 0

# Part program interpreter section --------------------------------------------
[TOOLSENSOR]
X = 6
Y = 42
Z = 30

MAXPROBE = 30
SEARCH_VEL = 150
PROBE_VEL = 50
HEIGHT = 1.085


# this is not named TOOL_CHANGE_POSITION  on purpose - canon uses it and will
# interfere
[CHANGE_POSITION]
X = 6
Y = 42
Z = 40