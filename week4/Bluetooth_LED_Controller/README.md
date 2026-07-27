<div align="center">

# 📱 Bluetooth LED Controller
### *Wireless LED Control using HC-05 Bluetooth Module & Arduino Uno*

</div>

---

# 🎯 Project Overview

This project demonstrates **wireless LED control** using an **HC-05 Bluetooth module** and an **Android smartphone**. Commands sent from a Bluetooth terminal application control three LEDs (**Red, Green, and Blue**) in real time, allowing users to switch LEDs ON, turn all LEDs OFF, or flash them simultaneously.

---

# ✨ Features

📲 Wireless communication using Bluetooth

🔴 Control the **Red LED**

🟢 Control the **Green LED**

🔵 Control the **Blue LED**

❌ Turn all LEDs OFF with a single command

✨ Flash all LEDs **5 times** using one command

⚡ Instant response through the Serial Monitor and Bluetooth connection

---

# 🛠️ Hardware Required

| Component | Quantity |
|:----------------------|:--------:|
| Arduino Uno | 1 |
| HC-05 Bluetooth Module | 1 |
| Red LED | 1 |
| Green LED | 1 |
| Blue LED | 1 |
| 220 Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

| Component | Arduino Pin |
|:-----------------|:-----------:|
| HC-05 TX | **D2 (RX)** |
| HC-05 RX | **D3 (TX)** *(through voltage divider if required)* |
| Red LED | **D8** |
| Green LED | **D9** |
| Blue LED | **D10** |
| HC-05 VCC | **5V** |
| HC-05 GND | **GND** |

> **Note:** The HC-05 RX pin operates at **3.3V logic**. A voltage divider is recommended when connecting the Arduino TX pin to the HC-05 RX pin.

---

# 📲 Bluetooth Pairing Instructions

## 🔹 Step 1

Power the **Arduino Uno** and **HC-05 Bluetooth Module**.

---

## 🔹 Step 2

Enable **Bluetooth** on your Android phone.

---

## 🔹 Step 3

Search for nearby Bluetooth devices.

---

## 🔹 Step 4

Select the device named:

```text
HC-05
```

---

## 🔹 Step 5

Enter the pairing PIN:

```text
1234
```

If the above PIN does not work, try:

```text
0000
```

---

## 🔹 Step 6

Open a Bluetooth terminal application such as:

- 📱 Serial Bluetooth Terminal

---

## 🔹 Step 7

Connect to the paired **HC-05** module and start sending commands.

---

# 🎮 Bluetooth Commands

| Command | Action |
|:-------:|:------------------------------|
| **R** | 🔴 Turn Red LED ON |
| **G** | 🟢 Turn Green LED ON |
| **B** | 🔵 Turn Blue LED ON |
| **X** | ❌ Turn All LEDs OFF |
| **F** | ✨ Flash All LEDs 5 Times |

---

# ⚙️ Working Principle

## 📡 Step 1 – Bluetooth Connection

The HC-05 establishes a wireless serial connection with the Android phone.

---

## 📨 Step 2 – Receive Command

The Arduino continuously listens for characters sent from the Bluetooth terminal app.

---

## 💡 Step 3 – Execute Action

Based on the received command, the Arduino performs the corresponding LED operation.

---

## 🔄 Step 4 – Real-Time Control

Each command is executed immediately, providing instant wireless control over the LEDs.

---

# 📟 Example Commands

```text
R  → Red LED ON
G  → Green LED ON
B  → Blue LED ON
X  → All LEDs OFF
F  → Flash All LEDs 5 Times
```

---

# ✅ Expected Result

✔️ Android phone connects successfully to the **HC-05 Bluetooth module**.

✔️ LEDs respond instantly to Bluetooth commands.

✔️ Individual LEDs can be controlled independently.

✔️ All LEDs can be turned OFF simultaneously.

✔️ Flash command blinks all three LEDs **five times**.

✔️ Wireless communication works reliably within the Bluetooth range.

---

<div align="center">

### 📲 Connect • Control • Illuminate 💡

**Powered by Arduino Uno & HC-05 Bluetooth Module**

</div>
