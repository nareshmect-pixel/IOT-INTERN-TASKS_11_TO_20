# Task 16 - Build a Temperature Monitor

## Aim
To measure temperature using an LM35 sensor and display the temperature on the Serial Monitor.

## Components Required

- Arduino Uno
- LM35 Temperature Sensor
- Breadboard
- Jumper Wires
- USB Cable

## Theory

LM35 is an analog temperature sensor.

- Output voltage increases with temperature.
- 10mV output per °C.

Examples:

- 25°C = 250mV
- 30°C = 300mV
- 40°C = 400mV

Arduino reads this analog voltage using analogRead() and converts it into temperature.

## Circuit Connections

| LM35 Pin | Arduino |
|-----------|---------|
| VCC | 5V |
| OUT | A0 |
| GND | GND |

## Procedure

1. Connect LM35 VCC to Arduino 5V.
2. Connect LM35 GND to Arduino GND.
3. Connect LM35 OUT pin to A0.
4. Open Arduino IDE.
5. Create a new sketch.
6. Enter the program.
7. Select Arduino Uno and correct COM port.
8. Upload the code.
9. Open Serial Monitor.
10. Observe temperature readings.

## Result

The temperature was successfully measured and displayed on the Serial Monitor.
