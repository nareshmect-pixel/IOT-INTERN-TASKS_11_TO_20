# Task 16 - Interface an LDR Sensor with Arduino

## Aim

To interface an LDR (Light Dependent Resistor) with Arduino Uno and measure light intensity using analog input.

---

## Components Required

1. Arduino Uno
2. LDR (Light Dependent Resistor)
3. 10kΩ Resistor
4. Breadboard
5. Jumper Wires
6. USB Cable

---

## Theory

An LDR is a light-sensitive resistor.

- In bright light, its resistance decreases.
- In darkness, its resistance increases.

The LDR and a 10kΩ resistor form a voltage divider circuit. The output voltage is connected to Arduino analog pin A0.

Arduino reads this voltage using the analogRead() function and displays values between 0 and 1023.

---

## Circuit Connections

| Component | Arduino Connection |
|------------|-------------------|
| One LDR Pin | 5V |
| Other LDR Pin | A0 |
| 10kΩ Resistor | Between A0 and GND |

---

## Procedure

### Step 1
Place the LDR and 10kΩ resistor on the breadboard.

### Step 2
Connect one terminal of the LDR to 5V.

### Step 3
Connect the other terminal of the LDR to A0.

### Step 4
Connect a 10kΩ resistor between A0 and GND.

### Step 5
Connect Arduino Uno to the computer.

### Step 6
Open Arduino IDE.

### Step 7
Create a new sketch and enter the program.

### Step 8
Select Arduino Uno board and correct COM port.

### Step 9
Verify and upload the program.

### Step 10
Open Serial Monitor.

### Step 11
Cover and uncover the LDR using your hand.

### Step 12
Observe the changing sensor values.

---

## Arduino Program

Refer to LDR_Sensor.ino

---

## Result

The Arduino Uno successfully measured light intensity using the LDR sensor and displayed the values on the Serial Monitor.
