Arduino RC Car (with Module Variations)*

A Bluetooth-controlled, 4WD robotic car built with an Arduino and an HC-06 Bluetooth module. This repository documents the original build as well as modular expansions (such as adding ultrasonic sensors, IMUs, and more).

Components and Hardware:
  - Chassis: 4WD pre-built robot chassis (From here https://electroslab.com/)
  - Motors: 4x DC gear motors
  - Motor Driver: 1x L298N
  - Microcontroller: Arduino Uno R3
  - Bluetooth Module: HC-06
  - Power: 2x 4800 mWh Li-ion batteries (3.7V each)

Note:
   To conserve chassis space and simplify wiring, a single L298N driver was used. The two DC motors on each side are wired in parallel,       allowing differential (skid-steer) control for each side. If you wish to control each motor separately, adding another L298N is the go-    to.   
  
*: The variations you can do with such model (Adding Ultrasonic sensor, IMU, etc.)
