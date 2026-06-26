# Smart Laser Security Alarm Using Arduino Uno and LDR

## Overview

This project implements a laser-based security alarm system using Arduino Uno, an LDR sensor, an LED indicator, and a buzzer.

The system continuously monitors a laser beam focused on an LDR. When an object interrupts the beam, the Arduino detects the change in light intensity and activates both visual and audible alarms.

---

## Components Required

- Arduino Uno
- Laser Module
- LDR (Light Dependent Resistor)
- 10kΩ Resistor
- LED
- 220Ω Resistor
- Active Buzzer
- Breadboard
- Jumper Wires

---

## Circuit Connections

| Component | Arduino Pin |
|------------|------------|
| LDR Junction | A0 |
| LED | D8 |
| Buzzer | D9 |
| Laser Signal | D7 |
| Laser VCC | 5V |
| Laser GND | GND |

---

## Working Principle

1. Laser continuously illuminates the LDR.
2. Arduino monitors the analog value from the LDR.
3. When the beam is interrupted:
   - LED turns ON.
   - Buzzer sounds.
4. When the beam is restored:
   - LED turns OFF.
   - Buzzer stops.

---

## Applications

- Home Security
- Restricted Area Monitoring
- Entry Detection Systems
- Educational Electronics Projects

---

## Future Improvements

- GSM SMS Alert
- IoT Monitoring
- Mobile App Notification
- PIR Motion Detection
- Battery Backup

---

## Author

Ananyaa Maity
