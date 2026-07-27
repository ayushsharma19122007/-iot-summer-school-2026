<div align="center">

# 🥤 State Machine Implementation – Arduino Vending Machine
### *Finite State Machine (FSM) Based Vending Machine Simulation*

</div>

---

# 🎯 Project Overview

This project demonstrates the implementation of a **Finite State Machine (FSM)** using an **Arduino Uno** to simulate a simple **Vending Machine**. The system transitions between different operating states based on user input from **three push buttons**.

Three LEDs indicate the current state of the vending machine, while every state transition is displayed on the **Serial Monitor** for easy debugging and visualization.

---

# 🚀 Objectives

🪙 Simulate a vending machine using the **Finite State Machine (FSM)** concept.

🔘 Control state transitions using push buttons.

💡 Indicate the active state using LEDs.

🖥️ Display every state transition on the Serial Monitor.

📚 Learn event-driven programming using state machines.

---

# 🛠️ Components Required

| Component | Quantity |
|:--------------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| LEDs | 3 |
| 220 Ω Resistors | 3 |
| Push Buttons | 3 |
| 10k Ω Resistors *(or use `INPUT_PULLUP`)* | 3 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|:----------------------|:-----------:|
| State LED 1 | **D2** |
| State LED 2 | **D3** |
| State LED 3 | **D4** |
| Insert Coin Button | **D5** |
| Select Item Button | **D6** |
| Cancel Button | **D7** |

---

# 🏷️ State Definitions

| State | Description |
|:-----------------|:-------------------------------------------------------------|
| **IDLE** | 💤 Waiting for the user to insert a coin |
| **COIN_INSERTED** | 🪙 Coin inserted, waiting for item selection |
| **ITEM_SELECTED** | 📦 Item selected and ready for dispensing |
| **DISPENSING** | 🎁 Dispensing the selected item before returning to IDLE |

---

# 🔄 State Transition Diagram

```text
                 Insert Coin
      +----------------------------+
      |                            |
      v                            |
+-------------+               +----------------+
|    IDLE     | ------------> | COIN_INSERTED |
+-------------+               +----------------+
       ^                              |
       |                              | Select Item
       |                              v
       |                      +----------------+
       |                      | ITEM_SELECTED |
       |                      +----------------+
       |                              |
       |                              | Dispense
       |                              v
       |                      +----------------+
       +----------------------|  DISPENSING   |
              Complete         +----------------+

Cancel Button:
COIN_INSERTED → IDLE
ITEM_SELECTED → IDLE
```

---

# ⚙️ Working Principle

## 💤 Step 1 – IDLE State

The vending machine starts in the **IDLE** state and waits for the customer to insert a coin.

---

## 🪙 Step 2 – Insert Coin

Pressing the **Insert Coin** button changes the state to **COIN_INSERTED**.

---

## 📦 Step 3 – Select Item

Pressing the **Select Item** button changes the state to **ITEM_SELECTED**.

---

## 🎁 Step 4 – Dispensing

The machine automatically enters the **DISPENSING** state and simulates dispensing the selected item.

---

## 🔄 Step 5 – Return to IDLE

After dispensing is complete, the vending machine automatically returns to the **IDLE** state.

---

## ❌ Step 6 – Cancel Operation

If the **Cancel** button is pressed during:

- **COIN_INSERTED**
- **ITEM_SELECTED**

the machine immediately returns to the **IDLE** state.

---

## 🖥️ Step 7 – Status Indication

- 💡 LEDs indicate the currently active state.
- 📟 Every state transition is displayed on the **Serial Monitor**.

---

# 📟 Sample Serial Monitor Output

```text
Vending Machine Started

Current State : IDLE

Transition:
IDLE -> COIN_INSERTED

Transition:
COIN_INSERTED -> ITEM_SELECTED

Transition:
ITEM_SELECTED -> DISPENSING

Transition:
DISPENSING -> IDLE

Transition:
COIN_INSERTED -> IDLE (Cancel)
```

---

# ✨ Features

- 🧩 Four-state Finite State Machine (FSM)
- 🔘 Three push-button inputs
- 💡 LED indication of current state
- 📟 Real-time Serial Monitor logging
- ❌ Cancel operation support
- 📄 Well-documented state transition diagram

---

# 🎓 Learning Outcomes

- 🧠 Understanding the Finite State Machine (FSM) concept
- 🔄 Implementing state transitions in Arduino
- 🔘 Reading multiple digital inputs
- 💡 Controlling LEDs based on system state
- 🖥️ Using the Serial Monitor for debugging
- ⚙️ Designing event-driven embedded systems

---

# 📂 Project Structure

```text
week2/
└── state_machine_vending/
    ├── state_machine_vending.ino
    └── README.md
```

---

# 🚀 Future Improvements

- 💰 Support multiple coin denominations
- 🍫 Add multiple product selections
- 📟 Display menus and messages on an LCD/OLED
- 💳 Integrate RFID or NFC payment
- 🌐 Connect the vending machine to an IoT dashboard
- 📊 Maintain inventory and sales records

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🪙 Insert • Select • Dispense 🤖

**Powered by Arduino Uno & Finite State Machine (FSM)**

</div>
