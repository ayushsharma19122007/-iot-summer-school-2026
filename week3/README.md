# Week 3: IoT Summer School 2026

Welcome to Week 3! This week advances your IoT skills with motor control, advanced sensors, user interfaces, and integrated monitoring systems.

## 📚 Learning Objectives

This week focuses on:
- Motor control (DC motors and servo motors)
- Advanced sensor integration and multi-sensor systems
- User interface components (keypads, LCD displays)
- Data logging and environmental monitoring
- Power management with relays
- Distance sensing with ultrasonic sensors
- Light-responsive systems and automation

## 📁 Projects Overview

### 1. **DC Motor Speed Controller**
Control and vary the speed of DC motors using PWM and power electronics.
- PWM-based speed control
- Direction control using H-bridges
- Load handling and efficiency

### 2. **Servo Motor Sweep**
Implement precise angular position control of servo motors.
- Servo motor mechanics and control signals
- Sweep patterns and motion sequences
- Position feedback and calibration

### 3. **Keypad and LCD Display**
Build a human-computer interface using standard peripherals.
- Matrix keypad scanning and debouncing
- LCD display communication (parallel/I2C)
- Menu systems and user feedback

### 4. **Smart Street Light**
Create an adaptive lighting system using ambient light sensing.
- Light sensor integration (LDR or photodiode)
- Automatic brightness adjustment
- Energy-efficient operation based on environmental conditions

### 5. **Ultrasonic Parking Sensor**
Implement a distance measurement system for parking assistance.
- Ultrasonic sensor (HC-SR04) operation
- Distance calculation from timing signals
- Multi-stage alert system (buzzer/LED intensity)

### 6. **Relay Controlled AC Device Simulation**
Safely control high-voltage AC devices from microcontroller logic.
- Relay operation and protection circuits
- AC device control safety principles
- Isolation between logic and power circuits

### 7. **Environmental Monitoring Station**
Integrate multiple sensors to create a comprehensive environmental sensor.
- Temperature, humidity, and pressure readings
- Data aggregation from multiple sensors
- Real-time display and logging

### 8. **Multisensor Data Logger**
Build a complete data acquisition system with storage capability.
- Multi-channel sensor reading
- Data timestamp and logging
- CSV/structured data output
- Memory management for logging

### 9. **Data**
Supporting data files and reference materials for the week.
- Sensor datasheets
- Calibration data
- Reference measurements
- Sample datasets

### 10. **Theory**
Theoretical foundations and advanced concepts for Week 3.
- Motor control principles
- Sensor calibration and error correction
- Data acquisition systems
- Real-time systems concepts

## 🛠️ Technical Stack

- **Language:** C++
- **Target Platform:** Arduino-compatible microcontroller boards
- **Key Components:** DC motors, servo motors, ultrasonic sensors, relays, LCD displays, keypads
- **Protocols:** I2C, Serial, PWM timing

## 🚀 Getting Started

1. Review the theory materials in the `Theory` folder
2. Choose a project that interests you
3. Gather the required components (refer to project documentation)
4. Study the circuit diagrams and component datasheets
5. Review the implementation code
6. Build the circuit carefully
7. Upload and test incrementally
8. Experiment with modifications and improvements

## 📝 Important Notes

- **Safety First:** Week 3 includes relay-controlled AC circuits. Follow all safety protocols and double-check your wiring before powering on.
- **Component Compatibility:** Verify that components match your microcontroller's voltage specifications
- **Sensor Calibration:** Some sensors (like ultrasonic and light sensors) may need calibration for accurate readings
- **Motor Considerations:** Motors draw significant current; ensure your power supply and protection circuits are adequate

## 🔧 Hardware Requirements

- Microcontroller board (Arduino Uno, Nano, or compatible)
- DC motors (3-6V)
- Servo motor (standard 5V)
- Ultrasonic sensor (HC-SR04)
- Relay module
- LCD display (16x2 or 20x4)
- Matrix keypad (4x4)
- Various sensors (DHT, BMP, LDR)
- Resistors, capacitors, and diodes for protection circuits
- Power supply (adequate for motor currents)

## 💡 Tips for Success

- Start with simpler projects like **Servo Motor Sweep** before tackling the **Multisensor Data Logger**
- Build circuits incrementally - test each component separately before integration
- Use the serial monitor for debugging sensor readings
- Document your calibration values for repeatable results
- Pay special attention to power distribution - weak power sources cause erratic behavior
- Keep detailed notes on what works and what doesn't

## ⚠️ Safety Reminders

- Never connect AC circuits directly to microcontroller pins
- Always use proper isolation (relays/optocouplers) for high-voltage circuits
- Test relay circuits with non-critical loads first
- Verify all connections before powering on
- Use appropriate wire gauges for current-carrying conductors

## 📚 Additional Resources

- Check the `Data` folder for sensor specifications and calibration information
- Refer to theory documents for detailed explanations of concepts
- Each project directory contains circuit diagrams and pin configurations

---

**Ready to build advanced IoT systems!** 🚀

