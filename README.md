# Light-OS
Micro OS compatible for Arduino and ESP-32 (both in development, but I will definitely switch on ESP32), the goal is to create a mini video game console with these components and their restrictions.

# Installation Instructions

## Platform

First install the PlatformIO IDE (https://platformio.org/) on the Visual Studio Code editor (https://code.visualstudio.com/). This IDE provides the necessary tools to build this project on Windows, MacOS, and Linux.

## Project Configuration

 - First download the folder **with the name of the board you are using (Arduino or ESP32)**.  
 - Then, on Visual Studio Code, go to the PlatformIO tab, then Open Project>Your folder.  
 - **Change the pins variables (located in the variables.hpp file on the root of the project), if you are not using the pins I am using.**

## Build/Upload

PlatformIO provides the build/upload button, just use it !  
For the upload, it will automatically detect the port where your board is located.

Done !
