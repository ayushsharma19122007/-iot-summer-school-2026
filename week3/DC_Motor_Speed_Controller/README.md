<div align="center">

# ⚙️ DC Motor Speed Control with L298N
### *PWM-Based Speed & Direction Control using Arduino Uno*

</div>

---

# 🎯 Objective

Build a **DC motor control system** using the **L298N Motor Driver Module**. The motor speed is adjusted using a **potentiometer**, while two push buttons allow the user to **change the motor direction** and **start or stop the motor**. The system continuously displays the motor status on the **Serial Monitor**.

---

# 🚀 Key Features

🎚️ **Variable Speed Control**
- Adjust motor speed using a **10kΩ potentiometer**.

🔄 **Direction Control**
- Toggle between **Forward** and **Reverse** rotation.

⏯️ **Start/Stop Function**
- Instantly start or stop the motor using a dedicated push button.

📟 **Live Status Monitoring**
- Serial Monitor displays:
  - Motor Direction
  - Speed Percentage
  - Running State

---

# 🛠️ Components Required

| Component | Quantity |
|:---------------------------------|:--------:|
| Arduino Uno | 1 |
| L298N Motor Driver Module | 1 |
| DC Motor | 1 |
| 10kΩ Potentiometer | 1 |
| Push Buttons | 2 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| External Motor Power Supply *(if required)* | 1 |

---

# 🔌 Circuit Connections

| Component | Arduino Pin |
|:----------------------------|:-----------:|
| ENA | **D9 (PWM)** |
| IN1 | **D7** |
| IN2 | **D8** |
| Potentiometer Middle Pin | **A0** |
| Potentiometer Ends | **5V & GND** |
| Direction Button | **D2** |
| Start/Stop Button | **D3** |
| Other Side of Both Buttons | **GND** |

> **Note:** Configure the push buttons using **`INPUT_PULLUP`** to eliminate the need for external pull-up resistors.

---

# ⚙️ Working Principle

## 🎚️ Step 1 – Speed Adjustment

The Arduino reads the **potentiometer** value and converts it into a **PWM value (0–255)**.

---

## ⚡ Step 2 – Motor Speed Control

The PWM signal is applied to the **ENA** pin of the L298N driver to control the motor speed.

---

## 🔄 Step 3 – Direction Switching

Pressing the **Direction Button** changes the motor rotation between:

- ▶️ **Forward**
- ◀️ **Reverse**

---

## ⏯️ Step 4 – Motor Start/Stop

The **Start/Stop Button** toggles the motor between:

- 🟢 **Running**
- 🔴 **Stopped**

---

## 📟 Step 5 – Status Display

The Serial Monitor continuously displays:

- Motor Direction
- Speed Percentage
- Current Motor State

---

# 📟 Sample Serial Monitor Output

```text
Direction: Forward | Speed: 15% | State: Running
Direction: Forward | Speed: 48% | State: Running
Direction: Reverse | Speed: 48% | State: Running
Direction: Reverse | Speed: 72% | State: Running
Direction: Reverse | Speed: 72% | State: Stopped
Direction: Forward | Speed: 90% | State: Running
```

---

# ✅ Expected Result

✔️ Potentiometer smoothly adjusts the motor speed from **0% to 100%**.

✔️ Direction button switches the motor between **Forward** and **Reverse**.

✔️ Start/Stop button enables or disables the motor instantly.

✔️ Serial Monitor continuously displays the **direction**, **speed percentage**, and **current motor state**.

---

<div align="center">

### ⚙️ Control • Rotate • Automate 🚗

**Powered by Arduino Uno, L298N Motor Driver & DC Motor**

</div>
