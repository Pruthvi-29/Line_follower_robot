# Line Following Robot

A simple and beginner-friendly robotics project where a robot autonomously follows a line using IR sensors. This project demonstrates basic robotics, electronics, and programming skills.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Circuit Diagram](#circuit-diagram)
- [How It Works](#how-it-works)
- [Setup Instructions](#setup-instructions)
- [Future Enhancements](#future-enhancements)
- [License](#license)

---

## Overview
A **Line Following Robot** is an autonomous robot that uses infrared (IR) sensors to detect a black line on a white surface and adjusts its movement accordingly. This project is a great introduction to robotics and embedded systems.

---

## Features
- Detects and follows a black line on a white surface.
- Turns left or right based on sensor data.
- Stops when no line is detected.
- Beginner-friendly and easy to replicate.

---

## Hardware Requirements
- Arduino Uno (or any other compatible microcontroller)
- 2x IR Sensors (for line detection)
- Motor Driver (L298N or equivalent)
- 2x DC Motors with wheels
- Robot chassis
- Power supply (e.g., 9V or LiPo battery)
- Breadboard and jumper wires

---

## Software Requirements
- Arduino IDE
- Basic understanding of C++ programming

---

## Circuit Diagram
*(Include or link to your circuit diagram here)*

---

## How It Works
1. **IR Sensors**: Detect the black line on a white surface and send signals to the Arduino.
2. **Arduino Logic**:
   - Both sensors on the line → Move forward.
   - Left sensor on the line → Turn left.
   - Right sensor on the line → Turn right.
   - No sensors on the line → Stop.
3. **Motor Driver**: Controls the motors based on signals from the Arduino.

---

## Setup Instructions
1. Assemble the robot chassis and attach the motors and wheels.
2. Connect the IR sensors to the Arduino pins as follows:
   - Left sensor to `D2`
   - Right sensor to `D3`
3. Connect the motor driver to the Arduino:
   - Left motor: `D5` (forward) and `D6` (backward)
   - Right motor: `D9` (forward) and `D10` (backward)
4. Upload the provided Arduino code to the microcontroller.
5. Test the robot on a black line drawn on white paper.

---

## Future Enhancements
- Add speed control using PWM signals.
- Integrate obstacle detection with ultrasonic sensors.
- Implement PID control for smoother and more accurate line following.
- Upgrade to a multi-surface line-following capability.

---

## License
This project is open-source and available under the [MIT License](LICENSE).

---

## Acknowledgments
- Inspired by various online tutorials and open-source robotics projects.