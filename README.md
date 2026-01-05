# EcoGuard-TinyML
Autonomus robot for hazard avoidance using Arduino and Edge Impulse (TinyML). Hackaton submission for Alameda Hacks
# 🌱 EcoGuard: TinyML Autonomous Navigator

> Project for Alameda Hacks (Online) > *Track: Environment / Healthcare & Safety*

## 📖 About
EcoGuard is a low-cost, AI-powered robot designed to navigate hazardous environments where human presence is risky. Unlike standard obstacle-avoiding robots, EcoGuard uses TinyML (Edge Impulse) to intelligently distinguish between standard obstacles (walls) and environmental threats (like fire/heat sources), making autonomous decisions locally on an Arduino microcontroller.

## 🚀 Features
* Autonomous Navigation: Avoids physical obstacles using ultrasonic sensors.
* Hazard Detection: Identifies "danger zones" (simulated via temperature sensors) and executes emergency retreat protocols.
* Edge AI: Runs neural network inference directly on the microcontroller (no internet required).
* Low Cost: Built using affordable, accessible hardware.

## 🛠️ Tech Stack
* Hardware: Arduino Uno, HC-SR04, DC Motors, Sensors.
* Software: C++, Arduino IDE.
* AI/ML: Edge Impulse (Data collection & Training).
* Simulation: Tinkercad Circuits.

## 📂 Project Structure
* /src - Main Arduino code (.ino files).
* /simulation - Screenshots and logic from Tinkercad.
* /model - Edge Impulse model files (TFLite).

## 📸 Demo
*(Link to video or simulation screenshot will be added here)*

---
*Built with ❤️ by [Твое Имя] for Alameda Hacks 2026
