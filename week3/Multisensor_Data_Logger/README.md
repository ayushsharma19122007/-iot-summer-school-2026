<div align="center">

# 📊 Multi-Sensor Data Logger
### *Real-Time Environmental Monitoring using Multiple Sensors*

</div>

---

# 🎯 Objective

Create a **Multi-Sensor Data Logger** that collects data from **three different sensors simultaneously** and displays the readings in a clear, organized format every **5 seconds**.

---

# 🔍 Sensors Used

🌡️ **DHT11** – Measures **Temperature** and **Humidity**

💡 **LDR (Light Dependent Resistor)** – Detects ambient light intensity

📏 **HC-SR04 Ultrasonic Sensor** – Measures the distance to nearby objects

---

# 🛠️ Components Required

| Component | Quantity |
|:-------------------------------|:--------:|
| Arduino Uno | 1 |
| DHT11 Temperature & Humidity Sensor | 1 |
| LDR (Photoresistor) | 1 |
| 10kΩ Resistor | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

## 🌡️ DHT11 Sensor

| Sensor Pin | Arduino Pin |
|:-----------|:-----------:|
| DATA | **D2** |
| VCC | **5V** |
| GND | **GND** |

---

## 💡 LDR Sensor

| Component | Arduino Pin |
|:----------|:-----------:|
| LDR Output | **A0** |

---

## 📏 HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|:-----------|:-----------:|
| Trig | **D8** |
| Echo | **D9** |
| VCC | **5V** |
| GND | **GND** |

---

# ⚙️ Working Principle

## 🌡️ Step 1 – Read Temperature & Humidity

The **DHT11 sensor** measures the surrounding temperature and humidity.

---

## 💡 Step 2 – Measure Light Intensity

The **LDR** reads the ambient light level as an analog value ranging from **0–1023**.

---

## 📈 Step 3 – Convert Light Percentage

The raw LDR value is converted into a **0–100%** light intensity percentage.

---

## 🌞 Step 4 – Classify Light Level

Based on the light percentage, the system classifies the environment as:

- 🌞 **Bright**
- 🌤️ **Normal**
- 🌙 **Dark**

---

## 📏 Step 5 – Measure Distance

The **HC-SR04 ultrasonic sensor** calculates the distance to an object and displays the result in **centimeters**.

---

## 📟 Step 6 – Display Sensor Data

All sensor readings are printed to the **Serial Monitor** in a structured format every **5 seconds**.

---

# 📟 Sample Serial Monitor Output

```text
=== SENSOR LOG ===
Time      : 5000 ms
Temp      : 28.5 C | Humidity: 65%
Light     : 73% (Bright)
Distance  : 42 cm
==================
```

---

# ✅ Expected Result

✔️ Sensor readings are updated every **5 seconds**.

✔️ Temperature and humidity values are displayed accurately.

✔️ Light intensity is shown as both a **percentage** and a **status** *(Bright, Normal, or Dark)*.

✔️ Distance from the ultrasonic sensor is displayed in **centimeters**.

✔️ All sensor data is presented in a clean, easy-to-read format on the **Serial Monitor**.

---

<div align="center">

### 🌡️ Measure • Analyze • Monitor 📊

**Powered by Arduino Uno, DHT11, LDR & HC-SR04**

</div>
