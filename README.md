# Line-Following-Robot
Summary: This project involves programming a microcontroller (like Arduino or STM32) to control a robot that follows a line. The robot uses infrared sensors to detect the line and adjust its motors to follow it. The project includes:

Initialization of sensors and motors.
A feedback loop that adjusts motor speed based on sensor input.
Calibration and edge-case handling for smooth operation.

This project implements a basic line-following robot using Arduino.

## Components Used
- Arduino Uno
- Infrared Sensors (for line detection)
- Motors and Motor Driver (L298N)

## How It Works
The robot uses infrared sensors to detect the line. If both sensors detect the line, the robot moves forward. If one sensor detects the line, the robot adjusts its direction.

## Instructions
1. Upload the code to your Arduino.
2. Connect the motors and sensors to the correct pins.
3. Place the robot on a line track, and it will follow the line.
