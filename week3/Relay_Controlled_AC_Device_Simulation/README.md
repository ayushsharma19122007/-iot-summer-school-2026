<div align="center">

<h1>⚡ Relay-Controlled AC Device Simulation</h1>
<h3>Arduino Uno | DHT11 Sensor | Relay Module | Manual Override</h3>

</div>

---

<h2>🎯 Objective</h2>

Simulate an **AC appliance** using a **relay module** (or an **LED** for safe testing). A **DHT11 temperature sensor** automatically controls the relay using **hysteresis**, while a **push button** provides manual override. Every relay state change is displayed on the **Serial Monitor** along with the current temperature.

---

<h2>🛠️ Components Required</h2>

- Arduino Uno
- DHT11 Temperature & Humidity Sensor
- Relay Module *(or LED with 220Ω resistor for simulation)*
- Push Button
- Breadboard
- Jumper Wires

---

<h2>🔌 Connections</h2>

| Component | Arduino Pin |
|-----------|-------------|
| DHT11 Data | **D2** |
| Relay IN / LED | **D8** |
| Relay VCC | **5V** |
| Relay GND | **GND** |
| Push Button | **D7** |
| Other Button Terminal | **GND** |

> **Note:** The push button uses **`INPUT_PULLUP`**, so no external pull-up resistor is required.

---

<h2>⚙️ Working</h2>

<h3>🔹 Step 1</h3>

The Arduino reads the **temperature** from the DHT11 sensor every **2 seconds**.

<h3>🔹 Step 2</h3>

If the temperature rises above **32°C**, the relay turns **ON**.

<h3>🔹 Step 3</h3>

The relay remains **ON** until the temperature falls below **28°C**.

<h3>🔹 Step 4</h3>

The **28°C–32°C** range creates **hysteresis**, preventing rapid ON/OFF switching.

<h3>🔹 Step 5</h3>

Press the **push button** at any time to manually toggle the relay **ON** or **OFF**.

<h3>🔹 Step 6</h3>

Every relay state change is logged to the **Serial Monitor** along with the current temperature.

---

<h2>🌡️ Hysteresis Logic</h2>

| Temperature | Relay State |
|-------------|-------------|
| **Above 32°C** | ✅ Relay ON |
| **28°C – 32°C** | 🔄 Previous State |
| **Below 28°C** | ❌ Relay OFF |

---

<h2>📟 Sample Serial Output</h2>

```text
Relay ON | Temperature: 33.2 °C
Manual Override -> Relay OFF | Temp: 33.1 °C
Relay OFF | Temperature: 33.1 °C
Relay ON | Temperature: 34.0 °C
Relay OFF | Temperature: 27.5 °C
```

---

<h2>✅ Expected Result</h2>

- ✔️ Relay (or LED) turns **ON** automatically when the temperature exceeds **32°C**.
- ✔️ Relay remains **ON** until the temperature drops below **28°C**.
- ✔️ Manual override button toggles the relay state at any time.
- ✔️ All relay state changes are displayed on the **Serial Monitor** together with the current temperature.
