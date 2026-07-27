<div align="center">

<h1>🎛️ Servo Motor Sweep using Potentiometer & Push Button</h1>
<h3>Arduino Uno | SG90 Servo Motor</h3>

</div>

---

<h2>🎯 Objective</h2>

Control an **SG90 servo motor** using a **10kΩ potentiometer**. The potentiometer position is mapped from **0–1023** to a servo angle of **0°–180°**. The current angle is displayed on the **Serial Monitor**. Pressing the **push button** makes the servo perform one complete sweep from **0° → 180° → 0°**.

---

<h2>🛠️ Components Required</h2>

- Arduino Uno
- SG90 Servo Motor
- 10kΩ Potentiometer
- Push Button
- Breadboard
- Jumper Wires

---

<h2>🔌 Connections</h2>

| Component | Arduino Pin |
|-----------|-------------|
| Servo Signal | **D9** |
| Servo VCC | **5V** |
| Servo GND | **GND** |
| Potentiometer Middle Pin | **A0** |
| Potentiometer Ends | **5V & GND** |
| Push Button | **D2** |
| Push Button Other Side | **GND** |

---

<h2>⚙️ Working</h2>

<h3>🔹 Step 1</h3>

The Arduino reads the potentiometer value.

<h3>🔹 Step 2</h3>

The value is mapped from **0–1023** to **0°–180°**.

<h3>🔹 Step 3</h3>

The servo rotates to the mapped angle.

<h3>🔹 Step 4</h3>

The current angle is displayed on the **Serial Monitor**.

<h3>🔹 Step 5</h3>

When the **push button** is pressed, the servo performs one complete sweep from **0° → 180° → 0°**.

---

<h2>📟 Sample Serial Output</h2>

```text
Servo Angle: 0 degrees
Servo Angle: 28 degrees
Servo Angle: 67 degrees
Servo Angle: 102 degrees
Servo Angle: 145 degrees
Servo Angle: 180 degrees
