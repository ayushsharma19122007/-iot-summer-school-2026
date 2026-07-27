<div align="center">

# 🌍 Environmental Monitoring Station
### *Real-Time Temperature & Humidity Monitoring using DHT22 Sensor*

</div>

---

# 🎯 Objective

Develop an **Environmental Monitoring Station** that continuously measures **temperature** and **humidity** using a **DHT22 sensor**. The system records sensor readings every **2 seconds** in **CSV format** and uses LEDs to indicate whether the environmental conditions are **normal** or **critical**.

---

# 🌟 System Features

🌡️ **Temperature Monitoring**
- Measures ambient temperature in **°C** and **°F**.

💧 **Humidity Monitoring**
- Continuously monitors relative humidity.

🟢 **Normal Condition Indicator**
- Green LED glows when temperature and humidity are within the safe range.

🔴 **Alert Indicator**
- Red LED turns ON if:
  - Temperature exceeds **35°C**, or
  - Humidity exceeds **80%**.

📊 **CSV Data Logging**
- Sensor readings are displayed on the **Serial Monitor** in CSV format every **2 seconds**.

---

# 🛠️ Hardware Used

| Component | Quantity |
|:-------------------------------|:--------:|
| Arduino Uno | 1 |
| DHT22 Temperature & Humidity Sensor | 1 |
| Red LED | 1 |
| Green LED | 1 |
| 220 Ω Resistors | 2 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# ⚙️ Working Principle

## 🌡️ Step 1 – Read Sensor Data

The Arduino reads **temperature** and **humidity** from the **DHT22 sensor** every **2 seconds**.

---

## 🌍 Step 2 – Analyze Conditions

The measured values are compared with predefined thresholds:

- Temperature **> 35°C**
- Humidity **> 80%**

---

## 🟢 Step 3 – Normal Environment

If both readings remain within safe limits:

- Green LED turns **ON**
- Red LED remains **OFF**

---

## 🔴 Step 4 – Alert Condition

If either threshold is exceeded:

- Red LED turns **ON**
- Green LED turns **OFF**

---

## 📊 Step 5 – CSV Logging

All readings are printed to the **Serial Monitor** in **CSV format**, making them easy to import into spreadsheet software for analysis.

---

# 📟 CSV Output Format

```csv
timestamp,temp_C,temp_F,humidity
```

### Sample Output

```csv
timestamp,temp_C,temp_F,humidity
2000,28.6,83.5,61.4
4000,29.1,84.4,62.0
6000,36.2,97.2,81.5
```

---

# 📚 Library Used

| Library | Version |
|:---------|:-------:|
| DHT Sensor Library by Adafruit | **1.4.6** |

---

# 📂 Project Files

```text
Environmental_Monitoring_Station.ino
sample_readings.csv
```

---

# ✅ Expected Result

✔️ Temperature and humidity are measured every **2 seconds**.

✔️ Sensor data is displayed in **CSV format** on the Serial Monitor.

✔️ Green LED indicates **normal environmental conditions**.

✔️ Red LED indicates **high temperature (>35°C)** or **high humidity (>80%)**.

✔️ CSV output can be easily saved and analyzed using spreadsheet applications.

---

<div align="center">

### 🌡️ Monitor • Analyze • Protect 🌍

**Powered by Arduino Uno & DHT22 Sensor**

</div>
