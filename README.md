Arduino RC Car (with Module Variations)*

A Bluetooth-controlled, 4WD robotic car built with an Arduino and an HC-06 Bluetooth module. This repository documents the original build (made a few years ago) as well as modular expansions (such as adding ultrasonic sensors, IMUs, and more).

Note: 
  This model uses skid steering, meaning, each side has its motors connected in parallel to each other, just like on a tank. If you want to make it smoother check Arduino_RC_Car_Remake/Future_Improvements 

Components and Hardware:
  - Chassis: 4WD pre-built robot chassis (From here https://ekt1.com/en)
  - Motors: 4x DC gear motors
  - Motor Driver: 1x L298N
  - Microcontroller: Arduino Uno R3
  - Bluetooth Module: HC-06
  - Power: 2x 4800 mWh Li-ion batteries (3.7V each)

Note:
   To conserve chassis space and simplify wiring, a single L298N driver was used. The two DC motors on each side are wired in parallel,       allowing differential (skid-steer) control for each side. If you wish to control each motor separately, adding another L298N is the go-    to.
