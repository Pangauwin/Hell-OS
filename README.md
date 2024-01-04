# Light-OS
Micro OS compatible for Arduino and ESP-32 (both in development, but I will definitely switch on ESP32), the goal is to create a mini video game console with these components and their restrictions.

# Project Building

## Building the console

### Components

For this project, I am using (for the moment the only version available is Arduino, so) :  
 - 1 Arduino Uno R3
 - 1 medium Breadboard
 - 1 LCD Screen (16 x 2)
 - 7 220 Ω (Ohm) Resistors
 - 1 Piezo Buzzer
 - 5 Buttons
 - (A lot of) Jumper Wires

All of these components can be found on the Arduino Starter Kit (sold by the official Arduino company).

### Circuits

I build the circuit like that, but feel free to build your one as you want.

![image](https://github.com/Pangauwin/Light-OS/assets/65062595/1c021fc7-d869-4102-af49-6b6e5d422bc2)

The pins on this circuit are those I use on my project files : 
 - LCD (RS) : 8
 - LCD (E) : 9
 - LCD (DB4) : 10
 - LCD (DB5) : 11
 - LCD (DB6) : 12
 - LCD (DB7) : 13
 - Buzzer : 6
 - Down Button : 7
 - Right Button : 5
 - Up Button : 4
 - Middle Button : 3
 - Left Button : 2

For the ground/power connection, just check out the upper picture.  
If you choose to change those pins, you must register the changes in the variables.hpp file (located on the root of the project) in order to make this project work.

## Code Execution Instructions

### Platform

First install the PlatformIO IDE (https://platformio.org/) on the Visual Studio Code editor (https://code.visualstudio.com/). This IDE provides the necessary tools to build this project on Windows, MacOS, and Linux.

### Project Configuration

 - First download the folder **with the name of the board you are using (Arduino or ESP32)**.  
 - Then, on Visual Studio Code, go to the PlatformIO tab, then Open Project>Your folder.  
 - **Change the pins variables (located in the variables.hpp file on the root of the project), if you are not using the pins I am using.**

### Build/Upload

PlatformIO provides the build/upload button, just use it !  
For the upload, it will automatically detect the port where your board is located.  
Done !
