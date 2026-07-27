<div align="center">

# 📶 Bluetooth Sensor Dashboard (ESP32 BLE)
### *Real-Time Environmental Monitoring using ESP32 Bluetooth Low Energy (BLE)*

</div>

---

# 🎯 Project Overview

This project demonstrates a **Bluetooth Low Energy (BLE) Sensor Dashboard** using an **ESP32** and a **DHT11 Temperature & Humidity Sensor**. The ESP32 reads environmental data every **3 seconds** and broadcasts the values using **BLE GATT Characteristics**, allowing smartphones to receive live sensor readings through applications such as **nRF Connect** or **LightBlue**.

---

# 🚀 Objectives

🌡️ Measure temperature using the DHT11 sensor.

💧 Measure humidity in real time.

📡 Broadcast sensor readings over **Bluetooth Low Energy (BLE)**.

🔄 Update sensor values automatically every **3 seconds**.

🧩 Create a BLE GATT Service with multiple characteristics.

🔔 Enable BLE notifications using **BLE2902 descriptors**.

📱 View live sensor data using a BLE scanner application.

---

# 🛠️ Hardware Required

| Component | Quantity |
|:-------------------------------|:--------:|
| ESP32 Development Board | 1 |
| DHT11 Temperature & Humidity Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

# 💻 Software Required

- Arduino IDE 2.x
- ESP32 Board Package
- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor Library
- BLE Library *(Included with ESP32 Board Package)*
- nRF Connect *(Android/iOS)*
- LightBlue *(Android/iOS)*

---

# 🔌 Circuit Connections

| DHT11 Pin | ESP32 Pin |
|:----------|:---------:|
| VCC | **3.3V** |
| GND | **GND** |
| DATA | **GPIO 4** |

---

# 📡 BLE Configuration

## 📱 Device Name

```text
ESP32_DHT11
```

---

## 🆔 BLE Service UUID

```text
12345678-1234-1234-1234-1234567890AB
```

---

# 🧩 GATT Characteristics

| Characteristic | UUID | Property |
|:--------------|:-----|:---------|
| 🌡️ Temperature | `12345678-1234-1234-1234-1234567890AC` | Read, Notify |
| 💧 Humidity | `12345678-1234-1234-1234-1234567890AD` | Read, Notify |
| ⏱️ Timestamp | `12345678-1234-1234-1234-1234567890AE` | Read, Notify |

> **Note:** Each characteristic includes a **BLE2902 Descriptor**, enabling notifications and improving compatibility with BLE scanner applications.

---

# ⚙️ Working Principle

## 📡 Step 1 – Initialize BLE

The ESP32 initializes the **Bluetooth Low Energy (BLE)** module.

---

## 🧩 Step 2 – Create BLE Service

A custom **BLE GATT Service** is created using the specified UUID.

---

## 📋 Step 3 – Create Characteristics

Three BLE characteristics are added to the service:

- 🌡️ Temperature
- 💧 Humidity
- ⏱️ Timestamp

---

## 📢 Step 4 – Start Advertising

The ESP32 advertises the BLE service so nearby smartphones can discover and connect.

---

## 🔄 Step 5 – Update Sensor Data

Every **3 seconds**, the ESP32:

- Reads temperature
- Reads humidity
- Retrieves the current timestamp using `millis()`
- Updates all BLE characteristics
- Sends notifications to connected devices

---

# 📤 Data Broadcast Format

## 🌡️ Temperature

```text
28.6
```

### 💧 Humidity

```text
63.0
```

### ⏱️ Timestamp

```text
12000
```

---

# 📟 Sample Serial Monitor Output

```text
BLE Sensor Started

Temperature: 28.5 C
Humidity: 65.0 %
Timestamp: 3000 ms

Temperature: 28.7 C
Humidity: 64.0 %
Timestamp: 6000 ms

Temperature: 28.8 C
Humidity: 64.0 %
Timestamp: 9000 ms
```

---

# 🧪 Testing Procedure

### Step 1

Upload the Arduino sketch to the **ESP32**.

### Step 2

Open the **Serial Monitor** at **115200 baud**.

### Step 3

Launch **nRF Connect** or **LightBlue** on your smartphone.

### Step 4

Enable Bluetooth on your mobile device.

### Step 5

Scan for nearby BLE devices.

### Step 6

Select the device:

```text
ESP32_DHT11
```

### Step 7

Open the advertised BLE service.

### Step 8

View the following characteristics:

- 🌡️ Temperature
- 💧 Humidity
- ⏱️ Timestamp

### Step 9

Verify that all values refresh automatically every **3 seconds**.

---

# 📚 Libraries Used

- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor Library
- BLEDevice
- BLEServer
- BLEUtils
- BLE2902

---

# ✨ Features

- 📡 Bluetooth Low Energy (BLE)
- 🧩 ESP32 GATT Server
- 📋 Multiple BLE Characteristics
- 🔔 BLE Notifications
- 🌡️ Temperature Monitoring
- 💧 Humidity Monitoring
- ⏱️ Timestamp Logging
- 📲 Live Sensor Data Updates
- 🆔 Custom BLE UUIDs
- 🏗️ Modular Code Design

---

# 🚀 Future Improvements

- 🌡️ Upgrade to the DHT22 sensor
- 🖥️ Display readings on an OLED display
- 💾 Store sensor data on an SD card
- ☁️ Publish readings to an MQTT broker over Wi-Fi
- 📱 Develop a dedicated Android application
- 🔋 Add battery level monitoring

---

<div align="center">

### 📶 Connect • Sense • Broadcast • Monitor 🌍

**Powered by ESP32 BLE, DHT11 & Arduino IDE**

</div>
