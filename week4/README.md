# Week 4: IoT Summer School 2026

Welcome to Week 4 - the final week! This week brings everything together with wireless connectivity, cloud integration, and real-world IoT applications.

## 📚 Learning Objectives

This week focuses on:
- Wireless communication protocols (WiFi, Bluetooth, BLE)
- MQTT protocol for IoT messaging
- Web servers and HTTP communication
- Cloud connectivity and remote monitoring
- Mobile app integration
- Real-time data streaming and visualization
- Production-ready IoT systems

## 📁 Projects Overview

### 1. **Bluetooth LED Controller**
Build a mobile-controlled LED system using Bluetooth communication.
- Classic Bluetooth (HC-05) module integration
- Command parsing and wireless control
- Mobile app compatibility
- Real-time feedback from device to phone
- Distance and range limitations

### 2. **BLE Sensor**
Implement a Bluetooth Low Energy (BLE) sensor system for power-efficient operation.
- BLE protocol fundamentals
- GATT (Generic Attribute Profile) services and characteristics
- Advertising and connection management
- Energy-efficient sensor readings
- Multi-device connection handling
- Mobile app integration with BLE

### 3. **WiFi Webserver**
Create a web-accessible control and monitoring interface for your IoT device.
- WiFi module integration (ESP8266/ESP32)
- HTTP server implementation
- Web interface design
- RESTful API endpoints
- Real-time data publishing via web
- Remote access from any device with a browser

### 4. **MQTT Sensor**
Integrate your IoT system with MQTT brokers for scalable messaging.
- MQTT protocol basics (publish/subscribe)
- Broker connection and authentication
- Topic hierarchies and message routing
- QoS (Quality of Service) levels
- Persistent connections
- Integration with cloud platforms (ThingSpeak, AWS IoT, Google Cloud IoT)
- Real-time monitoring dashboards

## 🛠️ Technical Stack

- **Language:** C++
- **Target Platforms:** 
  - Arduino boards with Bluetooth/BLE modules
  - ESP8266/ESP32 for WiFi and MQTT
- **Wireless Modules:** HC-05 (Bluetooth), HM-10 (BLE), ESP8266/ESP32 (WiFi)
- **Protocols:** Bluetooth, BLE, WiFi, HTTP, MQTT
- **Cloud Platforms:** ThingSpeak, AWS IoT, Azure IoT Hub, Google Cloud IoT

## 🚀 Getting Started

1. Choose your connectivity method based on your requirements:
   - **Mobile Control Only?** → Start with Bluetooth LED Controller
   - **Power-Critical Application?** → Start with BLE Sensor
   - **Remote Web Access Needed?** → Start with WiFi Webserver
   - **Multi-Device Monitoring?** → Start with MQTT Sensor

2. Understand the wireless protocol and limitations
3. Review the module documentation and pinouts
4. Study the implementation code
5. Set up your development environment
6. Build and test step by step
7. Deploy to your cloud platform (if applicable)

## 📝 Important Considerations

### Bluetooth vs BLE
- **Bluetooth (Classic):** Higher power consumption, simpler protocol, better range
- **BLE:** Lower power consumption, more complex setup, designed for mobile devices

### WiFi Integration
- Requires more power than Bluetooth/BLE
- Provides direct internet access and web interface
- Ideal for home automation and always-connected applications

### MQTT Advantages
- Lightweight protocol, excellent for IoT
- One-to-many messaging (publish/subscribe)
- Persistent connections
- Reduced bandwidth compared to HTTP polling
- Excellent for cloud integration

## 🔧 Hardware Requirements

- Microcontroller board (Arduino Uno/Nano + wireless module, OR ESP8266/ESP32)
- **For Bluetooth Projects:**
  - HC-05 module (classic Bluetooth)
  - HM-10 module (BLE)
  - Jumper wires and breadboard
  
- **For WiFi Projects:**
  - ESP8266 or ESP32 board
  - USB cable for programming
  
- **Sensors and Actuators:**
  - Temperature sensors (DHT, BMP280)
  - Light sensors (LDR, BH1750)
  - LEDs and resistors
  - Push buttons

## 💡 Tips for Success

### General Wireless Tips
- Start with wired testing before going wireless
- Use serial debugging extensively during development
- Test pairing/connection first, then add functionality
- Keep distance tests within reasonable limits
- Monitor signal strength and connection stability

### Bluetooth Tips
- Verify baud rate matches between module and microcontroller
- Test AT commands to configure the module before coding
- Keep antenna orientation consistent during testing
- Check power supply voltage for stability

### BLE Tips
- Understand GATT structure before implementation
- Use a BLE scanner app to verify your services and characteristics
- Handle disconnection gracefully
- Implement reconnection logic

### WiFi Tips
- Store credentials securely (not hardcoded if possible)
- Implement timeout logic for connection attempts
- Use dynamic DNS for stable remote access
- Monitor bandwidth usage for data-heavy applications

### MQTT Tips
- Choose a reliable broker (Mosquitto, HiveMQ Cloud, etc.)
- Design clear topic hierarchies (e.g., `home/bedroom/temperature`)
- Implement QoS appropriately (0 for non-critical, 1/2 for important)
- Use Last Will and Testament (LWT) for device status

## 📊 Cloud Integration Options

### ThingSpeak (Simple & Free)
- Easy setup, built-in visualization
- Limited features but good for learning
- Free tier available

### AWS IoT (Professional & Scalable)
- Enterprise-grade security
- Complex setup but powerful capabilities
- Pay-per-use pricing

### Azure IoT Hub (Enterprise)
- Microsoft ecosystem integration
- Strong security and management
- Developer-friendly SDKs

### Google Cloud IoT (Flexible)
- Good integration with Google services
- Competitive pricing
- Extensive documentation

## 🔒 Security Considerations

- Never hardcode credentials in code
- Use secure connections (MQTT over TLS, HTTPS)
- Implement authentication and authorization
- Regularly update firmware
- Monitor for unauthorized access
- Use strong passwords for cloud accounts
- Consider using certificates for MQTT connections

## 📱 Mobile App Development

- **Android:** Android Studio with Bluetooth/BLE libraries
- **iOS:** Swift with CoreBluetooth framework
- **Cross-platform:** Flutter, React Native for WiFi-based control
- **Web Dashboard:** HTML/CSS/JavaScript for WiFi webserver interface

## 🌐 Remote Access Tips

- Use a VPN for secure remote access
- Implement rate limiting to prevent abuse
- Use HTTPS and authentication for web interfaces
- Consider using a cloud service for easier remote access
- Test security thoroughly before deployment

## 🎯 Final Project Ideas

- **Smart Home Hub:** Combine multiple wireless protocols to control lights, temperature, and appliances
- **Environmental Monitor:** Deploy BLE sensors throughout a location and visualize data on MQTT dashboard
- **Remote Robot:** Control a robotic vehicle via WiFi webserver or mobile app
- **Sensor Network:** Deploy multiple MQTT-enabled sensors and aggregate data in cloud
- **Predictive Maintenance:** Use MQTT to monitor equipment and predict failures

---

**Congratulations on completing the Summer School!** 🎉

You've progressed from basic microcontroller programming to building production-ready IoT systems with wireless connectivity and cloud integration. Apply these skills to create innovative IoT solutions!

Happy coding and building! 🚀

