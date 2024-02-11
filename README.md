# Remora RPi/W5500 LinuxCNC Adapter Board


RRW_LAB aka Remora RPi/W5500 LinuxCNC Adapter Board is a CNC controller board for use with LinuxCNC, in conjunction with a STM32 Blackpill board as the MCU to interface with Ethernet or Raspberry Pi. The board exists for the single purpose to promote the Remora project, with he design goals to be  affordable, easy to make, and accessible while still retaining the core features.

Documentation https://github.com/cakeslob/Remora-docs/blob/nucleo/docs/source/hardware/blackpill.rst

Remora RPi SPI Firmware Source  https://github.com/cakeslob/Remora/tree/blackpill

Remora W5500 Ethernet Firmware Source  https://github.com/cakeslob/Remora-STM32F4xx-W5500/tree/blackpill

Pre-Compiled Firmware located in /FirmwareBin

LinuxCNC configurations and Components located in /LinuxCNC/

<img src="/boards.jpg" >

Features:


- 2 board variants 
- Ethernet or Raspberry Pi SPI interface
- STM32 Blackpill F4x1 or Blupill F103 as MCU
- 3 to 5 axis
- 8 Digital IO
- 1 Highspeed encoder
- 1 Spindle PWM


# Variants:

Stepstick Version:

- 3 Axis with Pololu stepper moter driver support (stepstick)
- 6 Inputs
- 2 Outputs
- 1 Highspeed encoder
- 1 Spindle PWM

 <img src="/photos/cncboard_ss_1c.jpg" > 

 DB25 Version:

- 5 axis support with DB25 CNC Breakout Board
- 5 Inputs
- 2 Outputs 
- 1 Highspeed encoder
- 1 Spindle PWM

 <img src="/photos/cncboard_db25_1a.jpg" > 

 # Interface: 

 - Raspberry Pi via SPI
 - Ethernet via W5500 Lite module (shown in photo below)

    <img src="/photos/cncboard_ss_2a.jpg" > 


# Pinout

- Stepstick
     <img src="/RRW_LAB_SS_v01/rrw_lab_ssv01_pinout.png" >

- DB25
     <img src="/RRW_LAB_DB25_v01/rrw_lab_db25v01_pinout.png" >  
