# Task 15 - Control LED Brightness Using PWM

## Aim

To control the brightness of an LED using Pulse Width Modulation (PWM) and a potentiometer with Arduino Uno.

---

## Components Required

1. Arduino Uno
2. LED
3. 220Ω Resistor
4. 10kΩ Potentiometer
5. Breadboard
6. Jumper Wires
7. USB Cable

---

## Theory

PWM (Pulse Width Modulation) is a technique used to control the average power supplied to a device.

Arduino PWM pins can generate values from 0 to 255.

- 0   → LED OFF
- 127 → 50% Brightness
- 255 → Maximum Brightness

The potentiometer provides analog values from 0 to 1023.

These values are mapped to the PWM range (0 to 255) using the map() function.

---

## Circuit Connections

### Potentiometer

| Potentiometer Pin | Arduino Pin |
|------------------|-------------|
| Left Pin | 5V |
| Middle Pin | A0 |
| Right Pin | GND |

### LED

| LED Terminal | Arduino Pin |
|-------------|-------------|
| Anode (+) | D9 (PWM Pin) through 220Ω resistor |
| Cathode (-) | GND |

---

## Procedure

### Step 1
Place the potentiometer and LED on the breadboard.

### Step 2
Connect the potentiometer:
- Left pin → 5V
- Middle pin → A0
- Right pin → GND

### Step 3
Connect LED:
- Long leg (Anode) → 220Ω resistor → D9
- Short leg (Cathode) → GND

### Step 4
Connect Arduino to PC using USB cable.

### Step 5
Open Arduino IDE.

### Step 6
Create a new sketch and enter the code.

### Step 7
Select Board: Arduino Uno.

### Step 8
Select the correct COM Port.

### Step 9
Verify and Upload the code.

### Step 10
Rotate the potentiometer knob.

### Step 11
Observe the LED brightness changing.

---

## Arduino Program

Refer to PWM_LED_Control.ino

---

## Result

The brightness of the LED was successfully controlled using PWM based on the potentiometer position.
