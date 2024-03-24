# RRW_LAB StepStick v0.355

<img src="/RRW_LAB_STEPSTICK/v0355/images/p1.jpg"  width="700">

Remora RaspberryPi/W5500 LinuxCNC Adapter Board , aka RRW_LAB is meant to be a lowcost, easy to make, CNC controller to run with LinuxCNC/Remora firmware. The board is made in a way to demonstrate the key features of the LinuxCNC/Remora firmware, while still being a functional cnc controller. It is meant to be on the same level as the classic "Arduino CNC Shield v3.00" but with the power of Linuxcnc/Remora firmware. 

Features include : 

- 3 Axis with Pololu stepper moter driver support (stepstick)
- Support A4988, DRV8825, and TMC2209 stepper drivers
- 6 Inputs
- 2 Outputs
- 1 Highspeed encoder
- 1 Spindle PWM
- SD card option
- Ethernet adapter option
- RaspberryPi GPIO header for direct mounting

Note that features are mere suggestions, you can configure the pins to be what ever you want as long as there are not hardware conflictions

## RRW_LAB overview

<img src="/RRW_LAB_STEPSTICK/v0355/images/pcb.png"  width="600">


<img src="/RRW_LAB_STEPSTICK/v0355/images/pcb2.png"  width="600">



<img src="/RRW_LAB_STEPSTICK/v0355/images/pinout.png"  width="750">

pinout


### STM32F411 MCU

The RRW_LAB is powered by an STM32F411 devboard known as "Blackpill V3.1", that is what is currently supported  by firmware/pinout. It runs the Remora firmware for RPi-SPI or W5500 ethernet. 

### +12v Power Input

The RRW_LAB needs to be powered with +12-24V for the stepper motors. 

<img src="/RRW_LAB_STEPSTICK/v0355/images/power.png" width="500">

caption 

### +5v Power Input

The RRW_LAB needs to be powered with +5v to the MCU. You can power the RRW_LAB 5v throught the RPi GPIO header, through the USB on the Blackpill, or through the +5v power connector at the back of the board. 

<img src="/RRW_LAB_STEPSTICK/v0355/images/5v.png" width="500">

### +5v Power Jumper

The 5v Power Jumper is used to seperate the RRW_LAB from the Raspberry Pi 5v. This is used if you are connecting an external 5v power supply to the RRW_LAB/Blackpill, but are still connected to the RPi. Remove the jumper to disconnect power from the 5v to the Raspberry Pi

<img src="/RRW_LAB_STEPSTICK/v0355/images/5vjmp.png" width="500">

## Stepper Drivers

<img src="/RRW_LAB_STEPSTICK/v0355/images/stepstick.png" width="500">

The RRW_LAB uses Pololu style stepper drivers, such as those used on 3d printers. It supports the A4988, DRV8825, and TMC2209 with UART configuration. They operate on 3.3v logic voltages, and 12-24v motor voltage. 

### Step/Direction Configuration

<img src="/RRW_LAB_STEPSTICK/v0355/images/stepstick_sd.png" width="500">
To configure the hardware for step/direction, add a jumper to the sleep/reset pin, and configure your microsteps accordingly. 

### UART Configuration
<img src="/RRW_LAB_STEPSTICK/v0355/images/uart.png" width="500">

<img src="/RRW_LAB_STEPSTICK/v0355/images/stepstick_uart.png" width="500">


To configure the hardware for UART configuration, remove all the microstep jumpers, and the sleep/reset jumper. Add a jumper to the UART pin to connect the UART io pin to the stepper driver.

## User Input/Outputs

<img src="/RRW_LAB_STEPSTICK/v0355/images/io.png" width="500">

On the 2x6 pin header, these pins are meant to be GPIO, used for limit switches and such. The other pins are ground. These pins, like most pins on the board, The pins are unprotected, they operate at 3.3v but can safely tolerate 5v. 



### PWM Spindle Control

On the 4 pin header marked "SPINDLE" the pins are Ground, PWM, OUT1, and OUT2.  These pins are intended to be used with spindle. This is not to only pin that can output PWM, and the pins can be reconfigured to be used as regular GPIO if needed. These pins are unprotected, they operate at 3.3v but can safely tolerate 5v.

### Highspeed Encoder

On the 5 pin header marked "ENCODER", the pins are Ground, Encoder chA, Encoder chB, Encoder chZ, and 5v. They connect to the boards hardware encoder pins, and can be used with a highspeed encoder to do things like spindle sync, or closedloop axis.  The pins can be reconfigured to be used as regular GPIO if needed. These pins are unprotected, they operate at 3.3v but can safely tolerate 5v.



## SD Card 

<img src="/RRW_LAB_STEPSTICK/v0355/images/sd2.png" width="500">

The optional addition of an SD card reader module allows you to edit your pin configuration the config.txt file stored on the root of the card. This enables you to change the pins how you like without the need to compile firmware. It also offers the most support for different firmware modules. Refer to the Remora documents to read more about the supported firmware modules. 

The board was designed with a specific SD card module, commonly avaiable. Other units may work, but they must be 3.3v. 
This is the SD card unit, designed to be soldered to the underside of the board

<img src="/RRW_LAB_STEPSTICK/v0355/images/sd3.png" width="500">

<img src="/RRW_LAB_STEPSTICK/v0355/images/sd_solder.jpg" width="500">


## W5500 Ethernet Module 

<img src="/RRW_LAB_STEPSTICK/v0355/images/w5500.png" width="500">

The optional addation of the W5500 ethernet adapter allows you to communicate with the board over ethernet to any computer (not just an RPi). The adapter can be installed using 2 1x6 headers, or it can be soldered directly to the RRW_LAB. Soldering to the board is recomended for long term use. 

picture ethernet adapter

<img src="/RRW_LAB_STEPSTICK/v0355/images/w5500_install.jpg" width="500">

### Serial Port

<img src="/RRW_LAB_STEPSTICK/v0355/images/serial.png" width="500">




