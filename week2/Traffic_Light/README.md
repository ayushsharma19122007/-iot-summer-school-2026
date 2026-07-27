<div align="center">

# 🚦 Traffic Light Controller using Arduino
### *Smart Traffic Signal Simulation with Pedestrian Crossing*

</div>

---

# 🎯 Project Overview

This project simulates a **Traffic Light Control System** using an **Arduino Uno**, three LEDs, and a **pedestrian push button**. The traffic lights operate in a fixed sequence, while the pedestrian button provides a safe crossing by immediately activating the **Red LED** for **8 seconds** before normal operation resumes.

The current traffic light state and system uptime (`millis()`) are continuously displayed on the **Serial Monitor**.

---

# 🚀 Objectives

🚦 Simulate a real-world traffic signal system.

🚶 Provide a safe pedestrian crossing using a push button.

💡 Control multiple LEDs using digital output pins.

🖥️ Display traffic light status and timestamps on the Serial Monitor.

📚 Learn event-driven programming with Arduino.

---

# 🛠️ Components Required

| Component | Quantity |
|:------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220 Ω Resistors | 3 |
| Push Button | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|:----------------|:-----------:|
| 🔴 Red LED | **D2** |
| 🟡 Yellow LED | **D3** |
| 🟢 Green LED | **D4** |
| 🚶 Push Button | **D7** |

---

# 🚦 Traffic Light Sequence

| Signal | Duration |
|:-------|:--------:|
| 🔴 Red | **5 Seconds** |
| 🟡 Yellow | **2 Seconds** |
| 🟢 Green | **4 Seconds** |

---

# ⚙️ Working Principle

## 🔴 Step 1 – Red Signal

The **Red LED** turns **ON** for **5 seconds**, indicating vehicles must stop.

---

## 🟡 Step 2 – Yellow Signal

The **Yellow LED** turns **ON** for **2 seconds**, warning that the signal is about to change.

---

## 🟢 Step 3 – Green Signal

The **Green LED** turns **ON** for **4 seconds**, allowing vehicles to move.

---

## 🔄 Step 4 – Repeat Cycle

The traffic light sequence repeats continuously.

---

## 🚶 Step 5 – Pedestrian Crossing

If the **push button** is pressed at any time:

- Normal traffic sequence stops immediately.
- 🔴 Red LED turns **ON**.
- Red signal remains active for **8 seconds**.
- Pedestrians can cross safely.
- After 8 seconds, the normal traffic sequence resumes.

---

## 🖥️ Step 6 – Serial Monitoring

Every traffic light change and pedestrian event is displayed on the **Serial Monitor** along with the system uptime using `millis()`.

---

# ✨ Features

- 🚦 Automatic traffic light sequencing
- 🚶 Pedestrian crossing support
- 🔘 Push button interrupt functionality
- 🖥️ Real-time Serial Monitor updates
- ⏱️ Timestamp logging using `millis()`
- ⚡ Simple and easy-to-understand implementation

---

# 📟 Sample Serial Monitor Output

```text
[0 ms] RED
[5000 ms] YELLOW
[7000 ms] GREEN
[11000 ms] RED
[12500 ms] Pedestrian Button Pressed
[12501 ms] RED (Pedestrian Crossing)
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
Red LED (5 s)
   │
   ▼
Yellow LED (2 s)
   │
   ▼
Green LED (4 s)
   │
   ▼
Button Pressed?
   │
 ┌─Yes────────────────────┐
 │                        │
 ▼                        │
Red LED ON (8 s)          │
 │                        │
 ▼                        │
Resume Normal Sequence ◄──┘
```

---

# 🎓 Learning Outcomes

- 💡 Controlling LEDs using `digitalWrite()`
- 🔘 Reading push button input using `digitalRead()`
- 🚦 Implementing traffic light logic
- ⚙️ Handling external events with conditional statements
- 🖥️ Displaying system status on the Serial Monitor
- ⏱️ Using `millis()` for timestamps
- 🤖 Developing basic embedded control systems

---

# 📂 Project Structure

```text
week2/
└── traffic_light/
    ├── traffic_light.ino
    └── README.md
```

---

# 🚀 Future Improvements

- 🚗 Add vehicle detection using IR or ultrasonic sensors
- ⏱️ Implement non-blocking timing using `millis()`
- 🚦 Add multiple traffic junctions
- 📟 Display countdown timer on a 7-segment display or LCD
- 🌐 Connect to an IoT dashboard for remote monitoring and control

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🚦 Stop • Wait • Go 🚶

**Powered by Arduino Uno & LED Traffic Signals**

</div>
