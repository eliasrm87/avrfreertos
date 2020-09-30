# FreeRTOS demo for Atmega328P ready to go

This repository is the result copy and paste from **feilipu/avrfreertos** (86d62d5eab131ca17c44df709f1f3dc4c0dbda34) and the official FreeRTOS source. I take absolutly no credit.

This is just a convenience starting point to allow quick and easy use of FreeRTOS on an Arduino Uno board. If you are looking to make a serious project, I strongly recommend you to refer to  feilipu/avrfreertos and the official FreeRTOS documentation and source.

# Building

To build the demos, just **cd** into the demo folder and run **make**.

# Programming the Arduino

After the program is built without errors, run **make program** to flash your code to the Arduino board.
You may need to edit the Makefile to fit your system configuration regarding the serial port path.

# Making your own project

Just copy the Blink demo, edit the code, add any extra file you may need and edit the Makefile to include your extra files.

The Makefile also includes some extra libraries you may like comment out and play with them.
