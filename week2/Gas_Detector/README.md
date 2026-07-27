<div align="center">

# 🚨 Arduino Gas Leak Detection System
### *Real-Time Gas Monitoring & Safety Alert using MQ Gas Sensor*

</div>

---

# 🎯 Project Overview

This project implements a **Gas Leak Detection System** using an **Arduino Uno** and an **MQ-series gas sensor** (MQ-2, MQ-3, MQ-5, etc.). The system continuously monitors the surrounding gas concentration and activates **visual** and **audible alerts** whenever the gas level exceeds predefined safety thresholds.

The current gas sensor reading is continuously displayed on the **Serial Monitor** for real-time monitoring.

---

# 🌟 Objectives

🛡️ Detect harmful gas concentration in real time.

📊 Continuously monitor gas sensor readings.

💡 Activate a warning LED when gas levels become unsafe.

🔊 Sound a buzzer alarm during critical gas leakage.

🖥️ Display live sensor readings on the Serial Monitor.

---

# 🛠️ Components Required

| Component | Quantity |
|:----------------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| MQ Gas Sensor (MQ-2 / MQ-3 / MQ-5) | 1 |
| LED | 1 |
| 220 Ω Resistor | 1 |
| Piezo Buzzer | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|:----------------------------|:-----------:|
| MQ Gas Sensor (Analog Output) | **A0** |
| Warning LED | **D4** |
| Piezo Buzzer | **D7** |

---

# ⚙️ Working Principle

## 🌫️ Step 1 – Detect Gas Concentration

The MQ gas sensor continuously measures the surrounding gas concentration.

---

## 📥 Step 2 – Read Analog Value

The Arduino reads the sensor output using:

```cpp
analogRead(A0)
```

---

## 📟 Step 3 – Display Reading

The measured gas value is displayed on the **Serial Monitor** for continuous monitoring.

---

## 💡 Step 4 – Warning Level

If the gas sensor value reaches **200 or higher**:

- Warning LED turns **ON**
- Indicates elevated gas concentration

---

## 🔊 Step 5 – Critical Alert

If the gas sensor value reaches **355 or higher**:

- Warning LED remains **ON**
- Piezo buzzer sounds at **523 Hz (C5 note)**

---

## ✅ Step 6 – Safe Condition

When the gas level drops below the threshold:

- LED turns **OFF**
- Buzzer stops automatically

---

# 🚦 Alert Levels

| Gas Sensor Value | System Status | Action |
|:----------------:|:-------------|:------|
| **Below 200** | ✅ Safe | Normal Operation |
| **200 – 354** | ⚠️ Warning | LED ON |
| **355 and Above** | 🚨 Critical | LED ON + Buzzer Alarm |

---

# ✨ Features

- 🌫️ Real-time gas concentration monitoring
- 💡 Visual warning using LED
- 🔊 Audible alarm using Piezo Buzzer
- 📟 Live Serial Monitor output
- 🎚️ Adjustable threshold values
- 💰 Low-cost safety monitoring solution

---

# 📟 Example Serial Monitor Output

```text
Gas Sensor Reading:
145
173
198
214
Warning LED ON
289
341
358
Buzzer Activated
376
```

---

# 🔄 Program Flow

```text
Start
   │
   ▼
Initialize Pins
   │
   ▼
Read Gas Sensor
   │
   ▼
Display Value
   │
   ▼
Value ≥ 200 ?
   │
 ┌─Yes───────────────┐
 │                   │
 ▼                   │
Turn LED ON          │
 │                   │
 ▼                   │
Value ≥ 355 ?        │
 │                   │
 ├─Yes──────────────► Activate Buzzer
 │
 └─No───────────────► Continue Monitoring
```

---

# 🎓 Learning Outcomes

- 📖 Reading analog sensor values using `analogRead()`
- ⚖️ Implementing threshold-based decision making
- 💡 Controlling LEDs with `digitalWrite()`
- 🔊 Generating sound using the `tone()` function
- 📟 Monitoring sensor data through the Serial Monitor
- 🛡️ Building a basic safety monitoring system

---

# 📂 Project Structure

```text
gas_leak_detection/
├── gas_leak_detection.ino
└── README.md
```

---

# 🚀 Future Improvements

- 🖥️ Display gas levels on an LCD or OLED display
- 📲 Send SMS or email alerts using GSM/Wi-Fi
- 🚦 Add multiple alert levels using different LED colors
- 💾 Store sensor readings on an SD card
- ☁️ Connect to an IoT dashboard for remote monitoring

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🌫️ Detect • Alert • Protect 🚨

**Powered by Arduino Uno & MQ Gas Sensor**

</div>
