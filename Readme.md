# FreeRTOS demo for Atmega328P ready to go

This is a convenience starting point to allow quick and easy use of FreeRTOS on an Arduino Uno board. If you are looking to make a serious project, I strongly recommend you to refer to feilipu/avrfreertos and the official FreeRTOS documentation and source.

# Building

To build the demos, just **cd** into the demo folder and run **make**.

# Programming the Arduino

After the program is built without errors, run **make program** to flash your code to the Arduino board.
You may need to edit the Makefile to fit your system configuration regarding the serial port path.

# Making your own project

Just edit **main.c**, add any extra file you may need and edit the Makefile to include your extra files.
