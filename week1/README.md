# IoT Summer School 2026 - Week 1

Welcome to Week 1 of the IoT Summer School! This week focuses on **fundamental Arduino concepts** and basic electronic component control. You'll learn about digital I/O, analog input, PWM (Pulse Width Modulation), and interactive embedded systems.

---

## 📚 Week 1 Projects Overview

### 1. 🔆 **LED Blink** (`LED_BLINK/`)
**Learn the basics of blinking an LED with speed control**

- **Objective**: Understand digital output control and potentiometer-based analog input
- **Key Concepts**: 
  - Digital pin control with `digitalWrite()`
  - Analog pin reading with `analogRead()`
  - Serial Monitor communication
  - Blink speed modulation
- **Hardware**: Arduino Uno, LED, 220Ω resistor, 10kΩ potentiometer
- **Output**: LED blinks with adjustable speed; blink count displayed on Serial Monitor
- **Difficulty**: ⭐ Beginner

📖 [Full LED Blink Documentation →](LED_BLINK/READ.md)

---

### 2. 🔘 **Push Button LED** (`Pushbutton_LED/`)
**Control LED behavior with a push button**

- **Objective**: Master digital input reading and conditional logic
- **Key Concepts**:
  - Digital input with `digitalRead()`
  - Reading button press state
  - Blinking pattern control
  - Serial Monitor debugging
- **Hardware**: Arduino Uno, LED, 220Ω resistor, push button, 10kΩ resistor
- **Output**: LED blinks while button is pressed; button state sent to Serial Monitor
- **Difficulty**: ⭐ Beginner

📖 [Full Push Button LED Documentation →](Pushbutton_LED/README.md)

---

### 3. 💡 **LED Fade In/Fade Out** (`led_fadein_fadeout/`)
**Create smooth brightness transitions using PWM**

- **Objective**: Understand Pulse Width Modulation (PWM) for analog-like control
- **Key Concepts**:
  - PWM on Arduino
  - `analogWrite()` for brightness control
  - LED brightness transitions
  - Sequential LED patterns
- **Hardware**: Arduino Uno, 6× LEDs, 6× 220Ω resistors, breadboard
- **Output**: 6 LEDs fade in and out sequentially
- **Difficulty**: ⭐⭐ Intermediate

📖 [Full LED Fade Documentation →](led_fadein_fadeout/README.md)

---

### 4. 🔲 **4×4 LED Matrix** (`4X4_LED_Matrix/`)
**Control multiple LEDs efficiently using row-column multiplexing**

- **Objective**: Learn matrix addressing and efficient pin management
- **Key Concepts**:
  - Row and column multiplexing
  - LED matrix addressing
  - Pattern generation
  - Digital pin optimization
- **Hardware**: Arduino Uno, 4×4 LED Matrix, breadboard, jumper wires
- **Output**: Individual and multiple LEDs controlled in the matrix
- **Difficulty**: ⭐⭐ Intermediate

📖 [Full 4×4 LED Matrix Documentation →](4X4_LED_Matrix/README.md)

---

### 5. 🎮 **Reaction Time Game** (`Reaction_Time_Game/`)
**Build an interactive game using RGB LED and buttons**

- **Objective**: Combine multiple concepts into an interactive application
- **Key Concepts**:
  - RGB LED control
  - Random number generation
  - Time measurement with `millis()`
  - Game logic and state management
  - Serial Monitor for user feedback
- **Hardware**: Arduino Uno, RGB LED, 3× 220Ω resistors, push button, 10kΩ resistor
- **Output**: Interactive game with reaction time measurement
- **Difficulty**: ⭐⭐⭐ Advanced

📖 [Full Reaction Time Game Documentation →](Reaction_Time_Game/README.md)

---

## 🎯 Learning Path

**Recommended Order of Completion:**

1. **LED Blink** - Start here to understand basic digital I/O
2. **Push Button LED** - Learn about input sensing
3. **LED Fade In/Fade Out** - Master PWM and analog-like control
4. **4×4 LED Matrix** - Explore efficient hardware control
5. **Reaction Time Game** - Combine all concepts in a fun project

---

## 📋 Theory Materials

Explore theoretical concepts and deeper learning materials in:
- `Theory/` directory

---

## 🛠️ General Setup Instructions

### Hardware Requirements for Week 1:
- Arduino Uno (or compatible board)
- USB cable
- LEDs (1× red, 1× green, 1× blue for RGB)
- Resistors (220Ω, 10kΩ)
- Push buttons
- Breadboard
- Jumper wires
- Potentiometer (10kΩ)
- 4×4 LED Matrix

### Software Requirements:
- Arduino IDE (latest version)
- USB drivers for Arduino (if needed)

### Steps to Get Started:
1. Install Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software)
2. Connect your Arduino Uno to your computer via USB
3. Open Arduino IDE and select Tools → Board → Arduino Uno
4. Select the correct COM port: Tools → Port
5. Navigate to each project folder and open the `.ino` file
6. Click Upload (→) button to program your Arduino
7. Open Serial Monitor (Tools → Serial Monitor) at 9600 baud rate when needed

---

## 🐛 Common Troubleshooting

| Issue | Solution |
|-------|----------|
| Upload fails | Check USB connection, restart IDE, verify correct board/port |
| LED doesn't light | Check polarity, verify resistor, test with Blink example |
| Serial Monitor shows gibberish | Ensure baud rate is set to **9600** |
| Button input unstable | Add debouncing in code, check connections |
| Dim LED brightness | Replace resistor, check power supply |

---

## 🌟 Key Concepts Covered This Week

- ✅ **Digital Input/Output**: Reading buttons, controlling LEDs
- ✅ **Analog Input**: Reading potentiometer values
- ✅ **PWM (Pulse Width Modulation)**: Brightness control without analog output
- ✅ **Serial Communication**: Debug and interact via Serial Monitor
- ✅ **Basic Algorithms**: Loops, conditionals, timing
- ✅ **Hardware Interfacing**: LEDs, buttons, resistors, breadboards

---

## 📊 Project Progression Chart

