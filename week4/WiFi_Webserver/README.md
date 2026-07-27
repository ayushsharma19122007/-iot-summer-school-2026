<div align="center">

# 🌐 ESP32 Wi-Fi Temperature Monitor
### *Real-Time Temperature & Humidity Monitoring using ESP32 Web Server*

</div>

---

# 🎯 Project Overview

This project demonstrates a **Wi-Fi-based Temperature Monitoring System** using an **ESP32**, a **DHT22 Temperature & Humidity Sensor**, and the ESP32's built-in **Web Server**.

The ESP32 connects to a Wi-Fi network, hosts a web page, and displays **live temperature**, **humidity**, **LED status**, and **system uptime**. Users can also remotely control the onboard LED through a web browser.

The webpage automatically refreshes every **10 seconds** to display the latest sensor readings.

---

# 🚀 Objectives

🌡️ Monitor temperature and humidity in real time.

📶 Connect the ESP32 to a Wi-Fi network.

🌐 Host a web server accessible from any device on the same network.

💡 Control the onboard LED using a web interface.

⏱️ Display system uptime.

🔄 Automatically refresh sensor data every 10 seconds.

---

# 🛠️ Hardware Required

| Component | Quantity |
|:---------------------------|:--------:|
| ESP32 Development Board | 1 |
| DHT22 Temperature & Humidity Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |
| USB Cable | 1 |

---

# 💻 Software Required

- Arduino IDE 2.x
- ESP32 Board Package
- DHT Sensor Library by Adafruit
- WiFi Library *(ESP32 Built-in)*
- WebServer Library *(ESP32 Built-in)*

---

# 🔌 Circuit Connections

| Component | ESP32 Pin |
|:----------------------|:---------:|
| DHT22 VCC | **3.3V** |
| DHT22 GND | **GND** |
| DHT22 DATA | **GPIO 4** |
| Onboard LED | **GPIO 2** |

---

# ⚙️ Working Principle

## 📶 Step 1 – Connect to Wi-Fi

The ESP32 connects to the configured Wi-Fi network using the provided **SSID** and **password**.

---

## 🌡️ Step 2 – Read Sensor Data

The DHT22 sensor measures:

- Temperature (°C)
- Humidity (%)

---

## 🌐 Step 3 – Start Web Server

After connecting to Wi-Fi, the ESP32 starts an HTTP web server on **Port 80**.

---

## 📄 Step 4 – Generate Web Page

Whenever a user opens the ESP32 IP address in a browser, the web page displays:

- 🌡️ Temperature
- 💧 Humidity
- 💡 LED Status
- ⏱️ System Uptime

---

## 💡 Step 5 – Toggle LED

Clicking the **Toggle LED** button changes the state of the onboard LED between **ON** and **OFF**.

---

## 🔄 Step 6 – Auto Refresh

The webpage automatically refreshes every **10 seconds**, ensuring that the latest sensor values are displayed.

---

# ✨ Features

- 📶 Wi-Fi connectivity using ESP32
- 🌡️ Live temperature monitoring
- 💧 Live humidity monitoring
- 🌐 Built-in HTTP web server
- 💡 Remote LED control
- ⏱️ System uptime display
- 🔄 Auto-refresh every 10 seconds
- 📱 Accessible from any web browser on the same network

---

# 🌐 Web Dashboard

The dashboard displays:

- 🌡️ Temperature
- 💧 Humidity
- 💡 LED State (ON/OFF)
- ⏱️ System Uptime
- 🔘 Toggle LED Button

---

# 📟 Example Serial Monitor Output

```text
Connecting to WiFi...
Connected! IP address:
192.168.1.105

HTTP server started
```

---

# 🌍 Example Web Page

```text
ESP32 Temperature Monitor

Temperature : 28.5 °C

Humidity : 64.2 %

LED State : OFF

Uptime : 00:05:18

[ Toggle LED ]

Auto-refreshes every 10s
```

---

# 📂 Project Structure

```text
wifi_temperature_monitor/
├── wifi_temperature_monitor.ino
└── README.md
```

---

# 🎓 Learning Outcomes

- 🌐 Creating a web server using ESP32
- 📶 Connecting ESP32 to a Wi-Fi network
- 🌡️ Reading data from a DHT22 sensor
- 📄 Generating dynamic HTML pages
- 💡 Controlling GPIO pins through a web interface
- ⏱️ Tracking system uptime using `millis()`
- 🔄 Handling HTTP requests with the `WebServer` library

---

# 🚀 Future Improvements

- 📈 Add live charts for temperature and humidity
- 📱 Make the webpage fully responsive for mobile devices
- 🌈 Display sensor status using color indicators
- ☁️ Upload sensor data to an IoT cloud platform
- 📊 Store historical readings in a database
- 🔔 Send alerts when temperature exceeds a threshold

---

# 👨‍💻 Author

| Field | Information |
|:------|:------------|
| **Name** | **Ayush Sharma** |

---

<div align="center">

### 🌡️ Monitor • Control • Connect 🌐

**Powered by ESP32, DHT22 & Web Server**

</div>
