# Task 20 - Servo Motor Control

## Aim

To control the angular position of a servo motor using Arduino Uno.

---

## Components Required

1. Arduino Uno
2. Servo Motor (SG90)
3. Breadboard
4. Jumper Wires
5. USB Cable

---

## Theory

A servo motor is a position-controlled motor that can rotate to a specific angle.

The SG90 servo motor can rotate between 0° and 180°.

Arduino sends PWM signals to control the shaft position.

Typical positions:

- 0°   → Left Position
- 90°  → Center Position
- 180° → Right Position

The Servo library is used to control the motor.

---

## Circuit Connections

| Servo Wire | Arduino Connection |
|------------|-------------------|
| Red (VCC) | 5V |
| Brown/Black (GND) | GND |
| Orange/Yellow (Signal) | D9 |

---

## Procedure

### Step 1
Place the servo motor on the breadboard.

### Step 2
Connect the Red wire to Arduino 5V.

### Step 3
Connect the Brown/Black wire to Arduino GND.

### Step 4
Connect the Orange/Yellow signal wire to Digital Pin D9.

### Step 5
Connect Arduino Uno to the computer.

### Step 6
Open Arduino IDE.

### Step 7
Create a new sketch and enter the program.

### Step 8
Select:
- Board: Arduino Uno
- Port: Correct COM Port

### Step 9
Verify the program.

### Step 10
Upload the program.

### Step 11
Observe the servo motor rotating between 0°, 90°, and 180°.

---

## Arduino Program

Refer to Servo_Control.ino

---

## Expected Output

Servo rotates:

0° → 90° → 180° → Repeat

---

## Applications

- Robotic Arms
- Automatic Doors
- Camera Pan/Tilt Systems
- IoT Automation Projects

---

## Result

The servo motor was successfully controlled using Arduino Uno and rotated to different angular positions.
