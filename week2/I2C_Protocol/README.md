# I2C Protocol Project

## 📋 Project Overview

The I2C (Inter-Integrated Circuit) Protocol project introduces you to one of the most important communication interfaces in embedded systems and IoT. This project demonstrates I2C communication by interfacing an LCD display with an Arduino microcontroller, showcasing master-slave communication, address-based device selection, and serial data transmission.

## 🎯 Learning Objectives

- Understand I2C (Two-Wire Interface) protocol fundamentals
- Learn master-slave communication architecture
- Implement I2C communication using Arduino Wire library
- Control an I2C LCD display
- Explore device addressing and data transmission
- Debug I2C communication issues
- Design multi-device I2C systems

## 🛠️ Hardware Components Required

| Component | Connection | Quantity | Notes |
|-----------|-----------|----------|-------|
| Arduino Uno | - | 1 | Main microcontroller (I2C Master) |
| 16x2 LCD Display with I2C Module | A4, A5, 5V, GND | 1 | I2C Slave device (Address: 0x20) |
| Jumper Wires | - | 4 | I2C and power connections |
| Breadboard | - | 1 | Optional, for organization |

## 📌 Circuit Connections

### I2C Bus Wiring
```
Arduino Uno I2C Pins:
- SDA (Serial Data)   → A4 (Arduino Analog Pin 4)
- SCL (Serial Clock)  → A5 (Arduino Analog Pin 5)
- VCC                 → 5V
- GND                 → GND

LCD Display with I2C Module:
- SDA → Arduino A4
- SCL → Arduino A5
- VCC → Arduino 5V
- GND → Arduino GND
```

### Complete Wiring Diagram
```
Arduino Uno
├─ A4 (SDA) ─────────── I2C LCD SDA
├─ A5 (SCL) ─────────── I2C LCD SCL
├─ 5V ────────────────── I2C LCD VCC
└─ GND ────────────────── I2C LCD GND
```

## 🔌 I2C Protocol Basics

### What is I2C?

I2C (Inter-Integrated Circuit), also called TWI (Two-Wire Interface):
- **Two-wire protocol:** Uses only two wires (SDA and SCL)
- **Multi-master, multi-slave:** Multiple devices on same bus
- **Synchronous:** Clock signal synchronizes communication
- **Serial:** Data transmitted serially (bit by bit)
- **Bidirectional:** Master can both send and receive

### I2C Address System

```
Device Address (7-bit):
0x20 = 0010 0000 (Binary)
      = 32 (Decimal)

Common I2C Addresses:
- 0x20-0x27: PCF8574 I2C Expander (LCD Module)
- 0x30-0x37: DS1307 Real-Time Clock
- 0x48-0x4F: ADS1115 ADC
- 0x68: MPU6050 Accelerometer/Gyro
- 0x76-0x77: BME280 Environmental Sensor
```

### I2C Bus Characteristics

```
Speed Modes:
- Standard Mode: 100 kHz
- Fast Mode: 400 kHz (Most common, used by Arduino)
- High Speed: 3.4 MHz

Voltage Levels:
- 5V Devices: H = 5V, L = 0V
- 3.3V Devices: H = 3.3V, L = 0V
- WARNING: Don't mix without level shifters!
```

### I2C Communication Flow

```
1. Master sends START condition
2. Master addresses Slave (7-bit address + R/W bit)
3. Slave acknowledges (ACK)
4. Master sends data bytes (MSB first)
5. Slave sends ACK for each byte
6. Master sends STOP condition

Timing:
- START: SDA goes LOW while SCL is HIGH
- STOP: SDA goes HIGH while SCL is HIGH
- Data changes when SCL is LOW
- Data read when SCL is HIGH
```

## 💻 Code Explanation

```cpp
#include <Wire.h>                    // I2C library
#include <LiquidCrystal_I2C.h>      // I2C LCD library

// Create LCD object: address 0x20, 16 columns, 2 rows
LiquidCrystal_I2C lcd(0x20, 16, 2);

void setup() {
  lcd.init();                         // Initialize LCD
  lcd.backlight();                    // Turn on backlight
}

void loop() {
  lcd.setCursor(0, 0);               // Set cursor to row 0, column 0
  lcd.print("Hello");                 // Print first text
  delay(500);                         // Wait 500ms
  
  lcd.print(" World");                // Print additional text
  delay(500);                         // Wait 500ms
  
  lcd.clear();                        // Clear display
  delay(100);                         // Wait 100ms
}
```

### Code Breakdown

| Function | Purpose |
|----------|---------|
| `Wire.h` | Core I2C library for Arduino |
| `LiquidCrystal_I2C.h` | LCD driver with I2C support |
| `lcd.init()` | Initialize I2C LCD display |
| `lcd.backlight()` | Enable LCD backlight |
| `lcd.setCursor(col, row)` | Position cursor for text |
| `lcd.print()` | Write text to display |
| `lcd.clear()` | Clear all text from display |

## 🔧 Setup Instructions

### 1. Hardware Assembly
- Connect Arduino to I2C LCD display module using 4 wires:
  - A4 → SDA (Serial Data)
  - A5 → SCL (Serial Clock)
  - 5V → VCC
  - GND → GND
- Verify all connections are secure

### 2. Install Required Libraries

**LiquidCrystal_I2C Library:**
1. Open Arduino IDE
2. Go to **Sketch → Include Library → Manage Libraries**
3. Search for "LiquidCrystal_I2C"
4. Install by Frank de Brabander

**Wire Library:**
- Usually pre-installed with Arduino IDE
- If missing, search "Wire" in Library Manager

### 3. Identify Your LCD I2C Address

```cpp
// Scan for I2C devices
#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  Serial.println("I2C Scanner");
  
  for(byte i = 1; i < 120; i++) {
    Wire.beginTransmission(i);
    if(Wire.endTransmission() == 0) {
      Serial.print("Found I2C device at address: 0x");
      Serial.println(i, HEX);
    }
  }
}

void loop() {}
```

Most I2C LCD modules use address **0x20, 0x27, or 0x3F**. Adjust the code if different.

### 4. Upload Code
- Connect Arduino to PC via USB
- Select correct board and COM port
- Upload the `I2C_Protocol.ino` sketch
- Observe "Hello World" text on LCD display

## 📊 Project Modifications

### 1. Display Custom Messages
```cpp
void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Temperature: 25");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: 60%");
  delay(2000);
  lcd.clear();
}
```

### 2. Scrolling Text
```cpp
String message = "Welcome to I2C!";
for(int i = 0; i < 16; i++) {
  lcd.clear();
  lcd.setCursor(i, 0);
  lcd.print(message.substring(0, 16-i));
  delay(300);
}
```

### 3. Custom Characters
```cpp
byte customChar[8] = {
  B00100,
  B01010,
  B10001,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000
};

lcd.createChar(0, customChar);
lcd.setCursor(0, 0);
lcd.write(byte(0));  // Display custom character
```

### 4. Temperature Display (with Sensor)
```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

void loop() {
  float temp = analogRead(A0) * (5.0 / 1023.0) * 100;  // Simplified
  
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print("C");
  delay(1000);
}
```

### 5. Multi-Device I2C System
```cpp
// Communicate with multiple I2C devices
LiquidCrystal_I2C lcd1(0x20, 16, 2);   // First LCD at 0x20
LiquidCrystal_I2C lcd2(0x27, 16, 2);   // Second LCD at 0x27

void setup() {
  lcd1.init();
  lcd1.backlight();
  lcd2.init();
  lcd2.backlight();
}

void loop() {
  lcd1.setCursor(0, 0);
  lcd1.print("Device 1");
  
  lcd2.setCursor(0, 0);
  lcd2.print("Device 2");
  delay(1000);
}
```

## 🧪 Testing & Verification

### Test 1: Display Initialization
- ✓ Backlight turns on
- ✓ LCD screen is visible
- ✓ Text appears on display

### Test 2: Text Display
- ✓ "Hello World" displays correctly
- ✓ Text clears and repeats

### Test 3: I2C Communication
- ✓ Use I2C scanner to detect LCD address
- ✓ Verify data transmission on SDA/SCL with oscilloscope (advanced)

### Test 4: Multiple Devices
- ✓ Add second I2C device and communicate with both

## ⚠️ Common Issues & Solutions

| Issue | Cause | Solution |
|-------|-------|----------|
| LCD doesn't initialize | Wrong I2C address | Run I2C scanner to find correct address |
| Display shows garbage text | Library not installed | Install LiquidCrystal_I2C from Library Manager |
| Backlight doesn't work | Backlight pin issue | Verify backlight() call, check module |
| Partial display | Wiring loose | Reseat all I2C connections |
| No communication | SDA/SCL reversed | Check A4 and A5 connections |
| Device not detected | Pull-up resistors | Add 4.7kΩ pull-up resistors to SDA/SCL |

## 🔧 Advanced I2C Concepts

### I2C Pull-up Resistors
```
Typical Configuration (optional on Arduino):
     +5V
      |
      R (4.7kΩ)
      |
  ────┴──── SDA
  ────┴──── SCL
      |
     GND
```

### Multiple Masters (Advanced)
- Arduino as master (standard)
- Arduino as slave (more complex, requires interrupts)
- Multiple master arbitration

### I2C Speed Adjustment
```cpp
// Default: 100kHz Standard Mode
// To use 400kHz Fast Mode:
Wire.setClock(400000);  // Set clock to 400 kHz
```

### Error Handling
```cpp
byte error = Wire.endTransmission();
// 0: Success
// 1: Data too long
// 2: NACK on address
// 3: NACK on data
// 4: Other error
```

## 📚 I2C in Real-World Applications

### 1. Sensor Networks
- Multiple sensors on single I2C bus
- Example: temperature, humidity, pressure sensors

### 2. Display Systems
- LCD and OLED displays with I2C modules
- Reduces pin count significantly

### 3. Real-Time Clocks
- DS1307 I2C RTC modules
- Maintaining time across power losses

### 4. Home Automation
- RGB LED controllers (MCP23017)
- Digital potentiometers (MCP4017)
- Power management ICs

### 5. Environmental Monitoring
- BME280 (temperature, humidity, pressure)
- BH1750 (light intensity)
- VEML6070 (UV intensity)

## 🎓 Learning Extensions

### Basic Level
- [ ] Display "Hello World" on LCD
- [ ] Modify text and timing
- [ ] Clear and refresh display

### Intermediate Level
- [ ] Find I2C address using scanner
- [ ] Display sensor readings
- [ ] Add custom characters
- [ ] Implement scrolling text

### Advanced Level
- [ ] Create sensor dashboard with multiple readings
- [ ] Communicate with multiple I2C devices
- [ ] Implement I2C slave mode (Arduino as receiver)
- [ ] Integrate with MQTT (Week 4)
- [ ] Build web interface for monitoring

## 🌍 I2C Device Examples

```
Common I2C Addresses & Devices:

0x20-0x27: PCF8574 I2C Expander (LCD Module)
0x30-0x37: DS1307 Real-Time Clock
0x48-0x4F: ADS1115 ADC
0x60-0x63: MCP4725 DAC
0x68: MPU6050 Accelerometer/Gyro
0x76-0x77: BME280 Environmental Sensor
0x23: BH1750 Light Sensor
0x39: VEML6070 UV Sensor
0x5C: AMG8833 Thermal Camera
```

## 📖 Reference Resources

- **Arduino Wire Library:** https://www.arduino.cc/reference/en/language/functions/communication/wire/
- **I2C Protocol Specification:** https://en.wikipedia.org/wiki/I%C2%B2C
- **LiquidCrystal_I2C Library:** https://github.com/johnrickman/LiquidCrystal_I2C
- **I2C Address List:** Search online for comprehensive device address databases

## 🐛 Debugging Tips

1. **Use Serial Printing**
   ```cpp
   Serial.println("Initializing LCD...");
   lcd.init();
   Serial.println("LCD initialized!");
   ```

2. **I2C Scanner Utility**
   - Identify connected I2C devices
   - Find unknown device addresses

3. **Oscilloscope Inspection**
   - View SDA/SCL signal waveforms
   - Verify clock and data timing

4. **Library Version Check**
   - Some older libraries have compatibility issues
   - Update to latest version if problems occur

## 🎉 Summary

The I2C Protocol project teaches:
- ✅ Serial communication fundamentals
- ✅ Master-slave architecture
- ✅ Device addressing and addressing schemes
- ✅ Real-world sensor/display integration
- ✅ Multi-device communication buses

This knowledge is essential for IoT projects where multiple sensors and devices communicate on a single bus, reducing wiring complexity and enabling scalable systems.

---

**Project Status:** ✅ Complete  
**Difficulty Level:** 🟡 Intermediate  
**Time to Complete:** 45-60 minutes  
**Skills Learned:** I2C Protocol, Master-Slave Communication, LCD Display Control  
**Prerequisites:** Basic Arduino programming, Week 1 concepts
