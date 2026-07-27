<div align="center">

# 🎹 Digital Piano using Arduino and Passive Buzzer
### *Play Musical Notes with Push Buttons & Arduino*

</div>

---

# 🎯 Project Overview

This project creates a **Digital Piano** using an **Arduino Uno**, a **Passive Buzzer**, and **five push buttons**. Four buttons play musical notes, while the fifth button switches between **Major** and **Minor** scales.

The buzzer produces sound only while a button is pressed. If two note buttons are pressed simultaneously, the piano plays **Sol (392 Hz)** as a chord substitute. The selected scale remains active until changed.

---

# 🚀 Objectives

🎵 Play musical notes using push buttons.

🔊 Generate sound with a passive buzzer.

🎼 Switch between **Major** and **Minor** scales.

🎹 Detect multiple button presses.

📚 Learn basic digital music generation using Arduino.

---

# 🛠️ Components Required

| Component | Quantity |
|:-----------------------------------|:--------:|
| Arduino Uno (or compatible board) | 1 |
| Passive Buzzer | 1 |
| Push Buttons | 5 |
| 10k Ω Resistors *(or use `INPUT_PULLUP`)* | 5 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Pin Configuration

| Component | Arduino Pin |
|:----------------------|:-----------:|
| 🎵 Do Button | **D2** |
| 🎵 Re Button | **D3** |
| 🎵 Mi Button | **D4** |
| 🎵 Fa Button | **D5** |
| 🔄 Mode Toggle Button | **D6** |
| 🔊 Passive Buzzer | **D9** |

---

# 🎼 Musical Notes

## 🎹 Major Scale

| Note | Frequency |
|:------|:---------:|
| Do | **262 Hz** |
| Re | **294 Hz** |
| Mi | **330 Hz** |
| Fa | **349 Hz** |
| Sol *(Two Buttons)* | **392 Hz** |

---

## 🎶 Minor Scale

Pressing the **Mode Toggle** button switches the piano to the **Minor Scale**, where the note frequencies change while keeping the same button layout.

---

# ⚙️ Working Principle

## 🎵 Step 1 – Play Notes

Press any one of the four note buttons to play its assigned musical note.

---

## 🔇 Step 2 – Stop Sound

Release the button and the buzzer immediately stops using `noTone()`.

---

## 🎼 Step 3 – Chord Detection

If **two note buttons** are pressed simultaneously, the buzzer plays **Sol (392 Hz)** instead of individual notes.

---

## 🔄 Step 4 – Change Scale

Press the **Mode Toggle** button to switch between **Major** and **Minor** scales.

---

## 💾 Step 5 – Save Mode

The selected scale remains active until the mode button is pressed again.

---

# ✨ Features

- 🎹 Four musical note buttons
- 🎼 Major and Minor scale modes
- 🔊 Passive buzzer sound generation
- 🤝 Two-button chord detection
- 🔇 Automatic sound stop when buttons are released
- 🔄 Toggle-based scale switching
- 📂 Git-based project development

---

# 🎵 Musical Behavior

| Action | Output |
|:------------------------------|:-----------------------------|
| Press one note button | 🎵 Plays corresponding note |
| Release button | 🔇 Sound stops |
| Press two note buttons | 🎼 Plays **Sol (392 Hz)** |
| Press Mode button | 🔄 Switches Major ↔ Minor |

---

# 📋 Example Git Commit History

```text
Initial project setup
Add four note buttons and buzzer
Implement note playback on button press
Add two-button chord substitute (Sol)
Implement Major/Minor mode toggle
Update README documentation
```

---

# 🎓 Learning Outcomes

- 🎵 Reading multiple push-button inputs
- 🔊 Generating musical notes using `tone()`
- 🔇 Stopping sound with `noTone()`
- 🤝 Detecting simultaneous button presses
- 🔄 Implementing toggle-based mode switching
- 📂 Organizing Arduino projects using Git commits

---

# 📂 Project Structure

```text
week2/
└── digital_piano/
    ├── digital_piano.ino
    └── README.md
```

---

# 🚀 Future Improvements

- 🎼 Add all seven musical notes (Do–Ti)
- 🎹 Play complete melodies and songs
- 📟 Display the current note on an LCD or OLED
- 🔊 Add volume control using a potentiometer
- 💾 Record and replay melodies
- 📱 Control the piano wirelessly using Bluetooth

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🎵 Press • Play • Enjoy 🎹

**Powered by Arduino Uno & Passive Buzzer**

</div>
