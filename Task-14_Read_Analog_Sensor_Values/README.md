# Task 14 - Read Analog Sensor Values

## Aim
To read analog sensor values using a potentiometer and display the values on the Serial Monitor using Arduino Uno.

---

## Components Required

1. Arduino Uno
2. 10kΩ Potentiometer
3. Breadboard
4. Jumper Wires
5. USB Cable

---

## Theory

Analog sensors produce continuously varying voltage levels. Unlike digital signals, which have only two states (HIGH and LOW), analog signals can have many values between 0V and 5V.

The Arduino Uno contains a 10-bit Analog-to-Digital Converter (ADC) which converts analog voltages into digital values ranging from 0 to 1023.

The analogRead() function is used to read analog values from the analog input pins.

Relationship:

0V   → 0
2.5V → 512
5V   → 1023

A potentiometer acts as a variable voltage divider. Rotating its knob changes the voltage at the middle pin, allowing different analog values to be read by the Arduino.

---

## Circuit Connections

| Potentiometer Pin | Arduino Pin |
|-------------------|-------------|
| Left Pin          | 5V          |
| Middle Pin        | A0          |
| Right Pin         | GND         |

---

## Procedure

### Step 1
Place the potentiometer on the breadboard.

### Step 2
Connect the left terminal of the potentiometer to the 5V pin of Arduino.

### Step 3
Connect the right terminal of the potentiometer to the GND pin of Arduino.

### Step 4
Connect the middle terminal (wiper) of the potentiometer to Analog Pin A0.

### Step 5
Connect Arduino Uno to the computer using a USB cable.

### Step 6
Open Arduino IDE.

### Step 7
Create a new sketch and enter the program.

### Step 8
Select:
- Board: Arduino Uno
- Port: Appropriate COM Port

### Step 9
Click Verify to compile the code.

### Step 10
Click Upload to upload the code to the Arduino board.

### Step 11
Open Serial Monitor.

### Step 12
Set the baud rate to 9600.

### Step 13
Rotate the potentiometer knob slowly.

### Step 14
Observe the changing analog values displayed on the Serial Monitor.

---

## Arduino Program

Refer to Analog_Read.ino

---

## Sample Output

Analog Value: 0
Analog Value: 125
Analog Value: 356
Analog Value: 512
Analog Value: 789
Analog Value: 1023

---

## Result

The Arduino Uno successfully read analog values from the potentiometer and displayed the values on the Serial Monitor using the analogRead() function.
