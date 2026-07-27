<div align="center">

# 💻 Serial Command Interface using Arduino
### *Control Arduino Hardware through the Serial Monitor*

</div>

---

# 🎯 Project Overview

This project demonstrates how to control Arduino hardware by sending **text-based commands** through the **Serial Monitor**. The Arduino continuously listens for user input, interprets the received command, and performs the corresponding action.

Users can turn the built-in LED **ON/OFF**, blink it a specified number of times, check the current LED status, reset the blink counter, and receive error messages for invalid commands.

---

# 🚀 Objectives

💬 Communicate with Arduino using the Serial Monitor.

💡 Control the built-in LED using text commands.

🔄 Blink the LED a specified number of times.

📊 Display the current LED status and blink counter.

♻️ Reset the blink counter when requested.

⚠️ Validate user input and handle invalid commands gracefully.

---

# 🛠️ Components Required

| Component | Quantity |
|:------------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| USB Cable | 1 |
| Arduino IDE | 1 |
| Built-in LED (Pin 13) | 1 |

---

# 📟 Supported Commands

| Command | Description |
|:---------------|:----------------------------------------------|
| `LED_ON` | 💡 Turns the built-in LED ON |
| `LED_OFF` | 🌑 Turns the built-in LED OFF |
| `BLINK_X` | ✨ Blinks the LED **X** times *(1–9)* |
| `STATUS` | 📊 Displays the current LED state and blink counter |
| `RESET` | ♻️ Resets the blink counter |
| Invalid Command | ❌ Displays **ERROR: Unknown command** |

---

# ⚙️ Working Principle

## 📤 Step 1 – Upload the Program

Upload the Arduino sketch to the **Arduino Uno**.

---

## 🖥️ Step 2 – Open Serial Monitor

Open the **Serial Monitor** in the Arduino IDE.

Set the baud rate to match the program (for example, **9600 baud**).

---

## ⌨️ Step 3 – Enter a Command

Type one of the supported commands and click **Send**.

---

## ⚡ Step 4 – Command Processing

The Arduino reads the command, compares it with the predefined commands, and executes the corresponding action.

---

## ⚠️ Step 5 – Invalid Commands

If an unsupported command is entered, the Arduino displays:

```text
ERROR: Unknown command
```

---

# 📋 Example Commands

```text
LED_ON
LED_OFF
BLINK_3
BLINK_7
STATUS
RESET
HELLO
```

---

# 📟 Sample Serial Monitor Output

```text
Command: LED_ON
LED is ON

Command: BLINK_3
Blinking LED 3 times...

Command: STATUS
LED State : OFF
Blink Counter : 3

Command: RESET
Blink Counter Reset

Command: TEST
ERROR: Unknown command
```

---

# ✅ Input Validation

✔️ Accepts only predefined commands.

✔️ `BLINK_X` supports values from **1** to **9**.

✔️ Invalid or unsupported commands display:

```text
ERROR: Unknown command
```

This prevents unexpected behavior and improves the reliability of the program.

---

# ✨ Features

- 💬 Serial communication with Arduino
- 💡 LED ON/OFF control
- ✨ Configurable LED blinking
- 📊 Status monitoring
- ♻️ Blink counter reset
- ⚠️ Input validation
- 🖥️ Real-time Serial Monitor feedback

---

# 🎓 Learning Outcomes

- 📖 Using `Serial.begin()` for serial communication
- ⌨️ Reading user input with `Serial.readString()`
- 🔤 Comparing strings in Arduino
- 💡 Controlling digital outputs using `digitalWrite()`
- ⚙️ Implementing command-based interfaces
- ✅ Input validation and error handling
- 📊 Maintaining program state using variables

---

# 📂 Project Structure

```text
week2/
└── serial_command_interface/
    ├── serial_command_interface.ino
    └── README.md
```

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 💬 Command • Control • Automate ⚡

**Powered by Arduino Uno & Serial Communication**

</div>
