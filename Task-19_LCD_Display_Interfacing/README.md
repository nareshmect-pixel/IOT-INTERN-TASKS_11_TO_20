# Task 19 - LCD Display Interfacing

## Aim

To interface a 16x2 LCD Display with Arduino Uno and display text on the LCD screen.

---

## Components Required

1. Arduino Uno
2. LCD 16x2 Display
3. 10kΩ Potentiometer
4. Breadboard
5. Jumper Wires
6. USB Cable

---

## Theory

A 16x2 LCD can display 16 characters in each row and has 2 rows.

The LCD is connected to Arduino using 4-bit mode, which reduces the number of pins required.

The LiquidCrystal library is used to control the LCD.

The display can be used to show:
- Sensor values
- Temperature readings
- Distance measurements
- Status messages

---

## Circuit Connections

| LCD Pin | Arduino Connection |
|----------|-------------------|
| VSS | GND |
| VDD | 5V |
| VO | Potentiometer Middle Pin |
| RS | D12 |
| RW | GND |
| E | D11 |
| D4 | D5 |
| D5 | D4 |
| D6 | D3 |
| D7 | D2 |
| A (LED+) | 5V |
| K (LED-) | GND |

### Potentiometer Connections

| Potentiometer Pin | Connection |
|-------------------|------------|
| Left Pin | 5V |
| Middle Pin | LCD VO |
| Right Pin | GND |

---

## Procedure

### Step 1
Place the LCD and potentiometer on the breadboard.

### Step 2
Connect the LCD pins according to the circuit table.

### Step 3
Connect the potentiometer to adjust LCD contrast.

### Step 4
Connect Arduino Uno to the computer.

### Step 5
Open Arduino IDE.

### Step 6
Create a new sketch and enter the program.

### Step 7
Select:
- Board: Arduino Uno
- Port: Appropriate COM Port

### Step 8
Verify the code.

### Step 9
Upload the code.

### Step 10
Observe the text displayed on the LCD.

---

## Arduino Program

Refer to LCD_Display.ino

---

## Expected Output

Line 1:
Hello World!

Line 2:
Arduino LCD

---

## Applications

- Digital Clocks
- Temperature Displays
- IoT Monitoring Systems
- Industrial Displays

---

## Result

The LCD 16x2 display was successfully interfaced with Arduino Uno and text was displayed on the screen.
