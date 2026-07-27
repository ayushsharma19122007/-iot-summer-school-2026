<div align="center">

# 🔐 Keypad + LCD Password-Protected Access System
### *Secure Authentication System using 4×4 Keypad & 16×2 LCD*

</div>

---

# 🎯 Objective

Design a **password-protected access system** using a **4×4 membrane keypad** and a **16×2 LCD display**. The system verifies a **4-digit PIN**, grants access for the correct password, and enhances security by locking itself for **10 seconds** after **three consecutive incorrect attempts**.

---

# 🌟 System Features

🔢 **PIN-Based Authentication**
- User enters a **4-digit password** using the keypad.

🖥️ **LCD Interface**
- Displays prompts and authentication status.

🟢 **Access Granted**
- Correct PIN turns **ON the Green LED**.

🔴 **Access Denied**
- Incorrect PIN turns **ON the Red LED** and activates the **buzzer**.

🔒 **Security Lock**
- After **3 wrong attempts**, the system locks for **10 seconds**.

---

# 🛠️ Components Required

| Component | Quantity |
|:-------------------------|:--------:|
| Arduino Uno | 1 |
| 4×4 Membrane Keypad | 1 |
| 16×2 LCD Display | 1 |
| Green LED | 1 |
| Red LED | 1 |
| Active Buzzer | 1 |
| 220Ω Resistors | 2 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

## 🖥️ 16×2 LCD

| LCD Pin | Arduino Pin |
|:--------|:-----------:|
| RS | **D12** |
| EN | **D11** |
| D4 | **D5** |
| D5 | **D4** |
| D6 | **D3** |
| D7 | **D2** |

---

## ⌨️ 4×4 Keypad

| Keypad Pin | Arduino Pin |
|:-----------|:-----------:|
| R1 | **A0** |
| R2 | **A1** |
| R3 | **A2** |
| R4 | **A3** |
| C1 | **A4** |
| C2 | **A5** |
| C3 | **D6** |
| C4 | **D7** |

---

## 💡 Output Devices

| Component | Arduino Pin |
|:----------|:-----------:|
| Green LED | **D8** |
| Red LED | **D9** |
| Active Buzzer | **D10** |

---

# 🔑 Default Password

The default password is:

```text
1234
```

To change the password, modify the following line in the Arduino code:

```cpp
String password = "1234";
```

---

# ⚙️ Working Principle

## 🖥️ Step 1 – User Prompt

The LCD displays **"ENTER PIN:"** and waits for user input.

---

## ⌨️ Step 2 – PIN Entry

The user enters a **4-digit PIN** using the keypad.

---

## ✅ Step 3 – Correct Password

- LCD displays **ACCESS GRANTED**
- Green LED turns **ON**
- User is successfully authenticated

---

## ❌ Step 4 – Incorrect Password

- LCD displays **ACCESS DENIED**
- Red LED turns **ON**
- Buzzer sounds to indicate an invalid PIN

---

## 🔒 Step 5 – Security Lock

After **three consecutive incorrect attempts**:

- LCD displays **SYSTEM LOCKED**
- System disables password entry for **10 seconds**

---

## 🔄 Step 6 – Retry Access

Once the lock period ends, the system resets and allows the user to enter the PIN again.

---

# 📟 Sample LCD Output

### 🚀 Startup

```text
ENTER PIN:
****
```

### ✅ Correct PIN

```text
ACCESS
GRANTED
```

### ❌ Incorrect PIN

```text
ACCESS
DENIED
```

### 🔒 Three Wrong Attempts

```text
SYSTEM LOCKED
WAIT 10 SEC
```

---

# ✅ Expected Result

✔️ LCD prompts the user to enter a **4-digit PIN**.

✔️ Entering the correct PIN grants access and turns **ON the Green LED**.

✔️ Entering an incorrect PIN activates the **Red LED** and **Buzzer**.

✔️ After **three consecutive incorrect attempts**, the system locks for **10 seconds**.

✔️ Once the lock period ends, the user can attempt authentication again.

---

<div align="center">

### 🔐 Secure • Reliable • User-Friendly

**Powered by Arduino Uno, 4×4 Keypad & 16×2 LCD**

</div>
