Module 1: Pressure and Acceleration Sensor Analysis
Course: Sensors Lab – Laboratory for Electrical Instrumentation and Embedded Systems
Institution: IMTEK, University of Freiburg
Tools Used: Arduino Nicla Sense ME, Arduino IDE, Python, CoolTerm

Overview: 
This experiment explored the performance of barometric pressure and acceleration sensors using the Arduino Nicla Sense ME board. 
The primary objective was to analyze sensor behavior in static and dynamic conditions and estimate altitude using two methods: 
(1) pressure-based barometric formula and (2) double integration of acceleration.

Tasks Performed: 
Task 1:
Collected 1000 pressure samples at rest to evaluate drift and noise. The BMP390 sensor showed stable readings with minimal offset and low standard deviation (~0.017 hPa).
Task 2:
Measured 3-axis acceleration data under static conditions. Mean values indicated stable Z-axis acceleration (close to 9.81 m/s²) and negligible drift in X and Y. 
Histograms confirmed low sensor noise.
Task 3:
Recorded pressure and Z-axis acceleration during an elevator ride (G to 3rd floor and back).
Height estimated from pressure: 11.67 m
Height estimated from integrated acceleration: 12.50 m
Pressure-derived height was more stable and accurate due to less sensitivity to motion noise.

Key Learnings: 
BMP390 offers reliable altitude measurements under dynamic conditions.
Acceleration-based height estimation is sensitive to noise and integration drift.
Barometric methods are preferred for small vertical displacements in low-noise environments.
Developed skills in data acquisition, serial communication, and Python-based data analysis.
