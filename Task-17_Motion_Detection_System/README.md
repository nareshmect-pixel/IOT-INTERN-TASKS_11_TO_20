# Task 17 - Motion Detection System

## Aim

To detect human motion using a PIR sensor and indicate detection using an LED and Serial Monitor.

---

## Components Required

1. Arduino Uno
2. PIR Motion Sensor (HC-SR501)
3. LED
4. 220Ω Resistor
5. Breadboard
6. Jumper Wires
7. USB Cable

---

## Theory

A PIR (Passive Infrared) sensor detects infrared radiation emitted by humans and animals.

When motion is detected:
- PIR Output becomes HIGH.
- Arduino reads HIGH and turns ON the LED.

When no motion is detected:
- PIR Output remains LOW.
- LED remains OFF.

---

## Circuit Connections

| PIR Sensor Pin | Arduino Pin |
|---------------|-------------|
| VCC | 5V |
| OUT | D2 |
| GND | GND |

| LED Connection | Arduino Pin |
|---------------|-------------|
| Anode (+) | D13 through 220Ω resistor |
| Cathode (-) | GND |

---

## Procedure

1. Connect the PIR sensor to Arduino.
2. Connect the LED to pin D13 through a 220Ω resistor.
3. Open Arduino IDE.
4. Create a new sketch.
5. Enter the program.
6. Select Arduino Uno and correct COM port.
7. Upload the code.
8. Open Serial Monitor.
9. Move your hand in front of the PIR sensor.
10. Observe the LED and Serial Monitor messages.

---

## Result

The Arduino successfully detected motion using the PIR sensor and indicated the detection using an LED and Serial Monitor.
