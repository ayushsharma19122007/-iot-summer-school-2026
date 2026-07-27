<div align="center">

# 🌡️ Arduino Temperature Monitoring System with 16×2 LCD
### *Real-Time Temperature Display using Arduino & LCD*

</div>

---

# 🎯 Project Overview

This project demonstrates a **Temperature Monitoring System** using an **Arduino Uno**, an **analog temperature sensor (LM35 or compatible)**, and a **16×2 LCD Display**. The Arduino continuously reads the sensor value, converts it into a temperature reading, and displays the result on both the **LCD** and the **Serial Monitor**.

The project uses the **Adafruit LiquidCrystal** library to interface with the LCD.

---

# 🚀 Objectives

🌡️ Measure ambient temperature using an analog sensor.

📟 Display the temperature on a **16×2 LCD**.

🖥️ Print temperature readings to the **Serial Monitor**.

🔄 Continuously update the displayed temperature in real time.

📚 Learn analog sensor interfacing and LCD communication.

---

# 🛠️ Components Required

| Component | Quantity |
|:-----------------------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| LM35 Temperature Sensor (or compatible) | 1 |
| 16×2 LCD Display | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 💻 Software Requirements

- Arduino IDE
- Adafruit LiquidCrystal Library

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|:----------------------------|:-----------:|
| Temperature Sensor Output | **A0** |
| 16×2 LCD Display | Configured using the **Adafruit LiquidCrystal** library |

---

# ⚙️ Working Principle

## 🌡️ Step 1 – Measure Temperature

The LM35 temperature sensor continuously measures the surrounding temperature.

---

## 📥 Step 2 – Read Analog Value

The Arduino reads the sensor output using:

```cpp
analogRead(A0)
```

---

## 🔄 Step 3 – Convert Temperature

The analog reading is converted into a temperature value using the `map()` function or an appropriate conversion formula.

---

## 📟 Step 4 – Display on LCD

The calculated temperature is displayed on the **16×2 LCD** in real time.

---

## 🖥️ Step 5 – Serial Monitoring

The same temperature value is printed to the **Serial Monitor** for debugging and monitoring purposes.

---

# ✨ Features

- 🌡️ Real-time temperature monitoring
- 📟 Live temperature display on a 16×2 LCD
- 🖥️ Serial Monitor output for debugging
- 📈 Continuous sensor updates
- ⚡ Simple analog sensor interfacing
- 🔧 Compatible with Arduino Uno and similar boards

---

# 📟 Example LCD Output

```text
Temp Value=
28
```

---

# 🖥️ Example Serial Monitor Output

```text
28
29
29
30
31
30
29
```

---

# 🔄 Program Flow

```text
Start
   │
   ▼
Initialize LCD
   │
   ▼
Read Temperature Sensor
   │
   ▼
Convert Analog Value
   │
   ▼
Display Temperature on LCD
   │
   ▼
Print Temperature to Serial Monitor
   │
   ▼
Repeat Continuously
```

---

# 🎓 Learning Outcomes

- 📖 Reading analog sensor values using `analogRead()`
- 🔄 Converting sensor readings into meaningful temperature values
- 📟 Displaying data on a **16×2 LCD**
- 📚 Using the **Adafruit LiquidCrystal** library
- 🖥️ Serial communication for debugging
- 🔌 Interfacing analog sensors with Arduino

---

# 📂 Project Structure

```text
temperature_monitor/
├── temperature_monitor.ino
└── README.md
```

---

# 🚀 Future Improvements

- 🌡️ Display temperature in both **Celsius** and **Fahrenheit**
- 📊 Track maximum and minimum temperature values
- 🔔 Activate a buzzer or cooling fan above a threshold temperature
- 💾 Store temperature readings on an SD card
- ☁️ Upload sensor data to an IoT cloud platform for remote monitoring

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🌡️ Measure • Display • Monitor 📟

**Powered by Arduino Uno, LM35 & 16×2 LCD**

</div>
