<div align="center">

# 🚗 Ultrasonic Parking Sensor using Arduino
### *Distance Measurement & Buzzer Alert System*

</div>

---

# 🎯 Project Overview

This project implements a **Smart Parking Assistance System** using an **Arduino Uno**, an **HC-SR04 Ultrasonic Sensor**, and a **Passive Buzzer**. The ultrasonic sensor continuously measures the distance to nearby objects and provides audible alerts based on how close the obstacle is.

As the object gets closer, the buzzer beeps more rapidly. When the object is extremely close, the buzzer sounds continuously, helping the user park safely.

---

# 🚀 Objectives

📏 Measure the distance between the sensor and an obstacle.

🚗 Assist in safe vehicle parking.

🔊 Provide different buzzer patterns based on distance.

🖥️ Display live distance readings on the Serial Monitor.

📚 Learn ultrasonic sensing and distance-based decision making.

---

# 🛠️ Components Required

| Component | Quantity |
|:----------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Passive Buzzer | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

| Component | Arduino Pin |
|:--------------------|:-----------:|
| HC-SR04 Trig | **D10** |
| HC-SR04 Echo | **D9** |
| HC-SR04 VCC | **5V** |
| HC-SR04 GND | **GND** |
| Passive Buzzer (+) | **D8** |
| Passive Buzzer (-) | **GND** |

---

# ⚙️ Working Principle

## 📡 Step 1 – Send Ultrasonic Pulse

The Arduino sends a **10 μs trigger pulse** to the HC-SR04 sensor.

---

## 📥 Step 2 – Receive Echo

The sensor detects the reflected ultrasonic wave and measures the time taken for it to return.

---

## 📏 Step 3 – Calculate Distance

The Arduino calculates the distance using:

```text
Distance = (Duration × 0.0343) / 2
```

The measured distance is displayed on the **Serial Monitor**.

---

## 🔊 Step 4 – Generate Alerts

The buzzer pattern changes depending on the measured distance.

| Distance | Buzzer Behavior |
|:---------|:----------------|
| **> 50 cm** | 🔇 Silent |
| **20 – 50 cm** | 🔊 Slow Beep (500 ms interval) |
| **10 – 20 cm** | 🔊 Fast Beep (200 ms interval) |
| **≤ 10 cm** | 🚨 Continuous Beep |

---

# ✨ Features

- 📏 Real-time distance measurement
- 🚗 Parking assistance system
- 🔊 Variable buzzer alerts
- 📟 Serial Monitor output
- ⚡ Fast obstacle detection
- 🎯 Simple and reliable implementation

---

# 📟 Sample Serial Monitor Output

```text
Distance: 78.4 cm
Distance: 45.8 cm
Distance: 27.2 cm
Distance: 16.5 cm
Distance: 8.7 cm
```

---

# 🚨 Alert Levels

| Distance | Status | Buzzer |
|:---------:|:-----------------|:----------------|
| > 50 cm | Safe | Silent |
| 20–50 cm | Object Nearby | Slow Beeping |
| 10–20 cm | Very Close | Fast Beeping |
| ≤ 10 cm | Danger | Continuous Beep |

---

# 🔄 Program Flow

```text
Start
   │
   ▼
Initialize Pins
   │
   ▼
Send Trigger Pulse
   │
   ▼
Receive Echo
   │
   ▼
Calculate Distance
   │
   ▼
Display Distance
   │
   ▼
Distance > 50 cm?
   │
 ┌─Yes──────────────► Silent
 │
 └─No
      │
      ▼
Distance > 20 cm?
      │
 ┌─Yes──────────────► Slow Beep
 │
 └─No
      │
      ▼
Distance > 10 cm?
      │
 ┌─Yes──────────────► Fast Beep
 │
 └─No───────────────► Continuous Beep
```

---

# 🎓 Learning Outcomes

- 📡 Understanding ultrasonic distance measurement
- 📏 Calculating distance using echo time
- 🔊 Generating sound with `tone()` and `noTone()`
- 🔘 Controlling output devices using Arduino
- 🖥️ Displaying sensor data on the Serial Monitor
- ⚙️ Implementing threshold-based decision making

---

# 📂 Project Structure

```text
ultrasonic_parking_sensor/
├── ultrasonic_parking_sensor.ino
└── README.md
```

---

# 🚀 Future Improvements

- 📟 Display distance on an LCD or OLED
- 🌈 Use RGB LEDs for visual distance indication
- 🚗 Add multiple ultrasonic sensors for wider coverage
- 📱 Send parking alerts via Bluetooth or Wi-Fi
- 📊 Log distance measurements for analysis
- 🎵 Use different tones for different alert levels

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🚗 Detect • Alert • Park Safely 📡

**Powered by Arduino Uno & HC-SR04 Ultrasonic Sensor**

</div>
