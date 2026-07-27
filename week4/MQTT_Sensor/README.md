<div align="center">

# 📡 MQTT Sensor Publisher (ESP32)
### *IoT-Based Temperature & Humidity Monitoring using MQTT Protocol*

</div>

---

# 🎯 Project Overview

This project demonstrates an **Internet of Things (IoT)** application using an **ESP32**, the **MQTT communication protocol**, and a **DHT22 Temperature & Humidity Sensor**. The ESP32 connects to a Wi-Fi network, publishes sensor readings to a **public MQTT broker** every **5 seconds** in **JSON format**, and subscribes to a control topic for remotely operating the onboard LED.

---

# 🚀 Objectives

📶 Connect the ESP32 to a Wi-Fi network.

🌡️ Read temperature from the DHT22 sensor.

💧 Read humidity from the DHT22 sensor.

📤 Publish sensor readings to an MQTT broker every **5 seconds**.

📝 Format all sensor data as **JSON**.

📥 Subscribe to an MQTT topic for LED control.

💡 Turn the onboard LED **ON** or **OFF** based on received MQTT messages.

🖥️ Verify communication using **MQTT Explorer** or the **HiveMQ Web Client**.

---

# 🛠️ Hardware Required

| Component | Quantity |
|:-------------------------|:--------:|
| ESP32 Development Board | 1 |
| DHT22 Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 💻 Software Required

- Arduino IDE 2.x
- ESP32 Board Package
- Wokwi Simulator
- MQTT Explorer or HiveMQ Web Client

### 📚 Arduino Libraries

- WiFi
- PubSubClient
- ArduinoJson
- DHTesp

---

# 🔌 Circuit Connections

| Component | ESP32 Pin |
|:----------------|:---------:|
| DHT22 VCC | **3.3V** |
| DHT22 GND | **GND** |
| DHT22 DATA | **GPIO 15** |
| Onboard LED | **GPIO 2** |

---

# 🌐 MQTT Broker Configuration

### Broker Address

```text
broker.hivemq.com
```

### Port

```text
1883
```

---

# 📡 MQTT Topics

### 🌡️ Temperature Topic

```text
iitjammu/summer26/ShubhJashanSingh/temperature
```

### 💧 Humidity Topic

```text
iitjammu/summer26/ShubhJashanSingh/humidity
```

### 💡 LED Control Topic

```text
iitjammu/summer26/ShubhJashanSingh/led_control
```

---

# 📝 JSON Message Format

## 🌡️ Temperature

```json
{
  "value": 28.5,
  "unit": "C",
  "ts": 123456
}
```

---

## 💧 Humidity

```json
{
  "value": 64.3,
  "unit": "%",
  "ts": 123456
}
```

---

# ✨ Project Features

- 📶 Wi-Fi connectivity using ESP32
- 📡 MQTT publish/subscribe communication
- 📝 JSON formatted sensor data
- 🌡️ Real-time temperature monitoring
- 💧 Real-time humidity monitoring
- 💡 Remote onboard LED control
- 🖥️ Serial Monitor debugging
- 🧪 Fully compatible with the Wokwi simulator

---

# ⚙️ Working Principle

## 📶 Step 1 – Wi-Fi Connection

The ESP32 connects to the configured Wi-Fi network.

---

## 📡 Step 2 – MQTT Connection

After Wi-Fi connection, the ESP32 establishes communication with the **HiveMQ Public MQTT Broker**.

---

## 🌡️ Step 3 – Read Sensor Data

Every **5 seconds**, the ESP32 reads:

- Temperature
- Humidity

from the **DHT22 sensor**.

---

## 📝 Step 4 – Create JSON Payload

The sensor readings are converted into **JSON** format containing:

- Sensor Value
- Unit
- Timestamp

---

## 📤 Step 5 – Publish Data

The ESP32 publishes:

- Temperature data
- Humidity data

to their respective MQTT topics.

---

## 📥 Step 6 – Listen for Commands

The ESP32 continuously subscribes to the **LED Control** topic.

- **ON** → Turns the onboard LED ON 💡
- **OFF** → Turns the onboard LED OFF 🌑

---

# 🧪 How to Test

1. Open the project in **Wokwi**.
2. Start the simulation.
3. Open the **Serial Monitor (115200 baud)**.
4. Wait until the ESP32 connects to Wi-Fi and the MQTT broker.
5. Open **MQTT Explorer** or the **HiveMQ Web Client**.
6. Connect to:

```text
Broker : broker.hivemq.com
Port   : 1883
```

7. Subscribe to:

```text
iitjammu/summer26/ShubhJashanSingh/#
```

8. Observe the incoming temperature and humidity messages every **5 seconds**.

9. Publish either:

```text
ON
```

or

```text
OFF
```

to:

```text
iitjammu/summer26/ShubhJashanSingh/led_control
```

10. Verify that the ESP32 onboard LED changes its state accordingly.

---

# 📟 Expected Serial Monitor Output

```text
WiFi Connected
Connecting MQTT...
Connected

Published Temperature:
{"value":27.8,"unit":"C","ts":5000}

Published Humidity:
{"value":64.2,"unit":"%","ts":5000}

Message Received: ON
LED ON

Message Received: OFF
LED OFF
```

---

# ⚠️ Troubleshooting

✔️ Verify the Wi-Fi SSID and password are correct.

✔️ Ensure the MQTT broker is:

```text
broker.hivemq.com
```

using port:

```text
1883
```

✔️ Confirm that the MQTT topic names exactly match those in the ESP32 code.

✔️ Install all required Arduino libraries.

✔️ Ensure the Wokwi simulation is running before publishing or subscribing.

---

# 🚀 Future Improvements

- 🌡️ Add support for multiple sensors
- ☀️ Publish pressure, light intensity, or air quality data
- ☁️ Store sensor readings in a cloud database
- 🔒 Enable secure MQTT communication using TLS
- 📱 Develop a mobile or web dashboard for live monitoring

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🌐 Connect • Monitor • Automate • Innovate

**Powered by ESP32 • MQTT • DHT22 • Arduino IDE**

</div>
