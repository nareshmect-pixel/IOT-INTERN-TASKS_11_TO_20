# Task 18 - Ultrasonic Distance Measurement

## Aim

To measure the distance of an object using the HC-SR04 Ultrasonic Sensor and Arduino Uno.

---

## Components Required

1. Arduino Uno
2. HC-SR04 Ultrasonic Sensor
3. Breadboard
4. Jumper Wires
5. USB Cable

---

## Theory

The HC-SR04 ultrasonic sensor measures distance using sound waves.

The sensor contains:

- Trigger (TRIG) Pin
- Echo (ECHO) Pin

Working:

1. Arduino sends a 10 µs pulse to the TRIG pin.
2. The sensor transmits an ultrasonic wave.
3. The wave reflects from an object.
4. The reflected wave returns to the sensor.
5. The ECHO pin remains HIGH for the duration of the travel time.
6. Arduino calculates distance using the measured time.

Distance Formula:

Distance = (Time × Speed of Sound) / 2

Speed of Sound = 0.034 cm/µs

---

## Circuit Connections

| HC-SR04 Pin | Arduino Pin |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

---

## Procedure

### Step 1
Place the HC-SR04 ultrasonic sensor on the breadboard.

### Step 2
Connect VCC of HC-SR04 to Arduino 5V.

### Step 3
Connect GND of HC-SR04 to Arduino GND.

### Step 4
Connect TRIG pin to Arduino Digital Pin D9.

### Step 5
Connect ECHO pin to Arduino Digital Pin D10.

### Step 6
Connect Arduino Uno to the computer using a USB cable.

### Step 7
Open Arduino IDE.

### Step 8
Create a new sketch and enter the program.

### Step 9
Select:
- Board: Arduino Uno
- Port: Appropriate COM Port

### Step 10
Click Verify.

### Step 11
Click Upload.

### Step 12
Open Serial Monitor.

### Step 13
Place an object in front of the sensor.

### Step 14
Observe the distance values displayed in centimeters.

---

## Arduino Program

Refer to Ultrasonic_Distance.ino

---

## Sample Output

Distance: 10.25 cm

Distance: 15.62 cm

Distance: 20.11 cm

Distance: 30.75 cm

---

## Applications

- Obstacle Detection
- Robot Navigation
- Water Level Monitoring
- Parking Systems

---

## Result

The HC-SR04 ultrasonic sensor successfully measured the distance of objects and displayed the values on the Serial Monitor.
