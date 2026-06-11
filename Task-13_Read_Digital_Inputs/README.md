# Task 13 - Read Digital Inputs

## Aim
To read a digital input from a push button using Arduino Uno.

## Components Required
- Arduino Uno
- Push Button
- 10kΩ Resistor
- Breadboard
- Jumper Wires

## Theory
Digital inputs can have only two states:
- HIGH (1)
- LOW (0)

A push button is used to provide these states to the Arduino. The Arduino reads the button state and performs an action accordingly.

## Circuit Connections

| Component | Arduino Pin |
|------------|------------|
| Push Button | D2 |
| 10kΩ Resistor | Pull-down to GND |
| VCC | 5V |
| GND | GND |

## Procedure

1. Connect the push button to pin D2.
2. Connect a 10kΩ pull-down resistor between D2 and GND.
3. Open Arduino IDE.
4. Enter the code provided in Digital_Input_Button.ino.
5. Upload the code to Arduino Uno.
6. Open Serial Monitor.
7. Press and release the button.
8. Observe the button state displayed.

## Arduino Program
Refer to Digital_Input_Button.ino

## Result
The Arduino successfully detected button presses and displayed HIGH and LOW states in the Serial Monitor.
