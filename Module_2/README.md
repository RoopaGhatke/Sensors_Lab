Module 2: Magnetic Field Measurement with BMM150
Course: Sensors Lab – Laboratory for Electrical Instrumentation and Embedded Systems
Institution: IMTEK, University of Freiburg
Tools Used: Arduino Nicla Sense ME, Arduino IDE, Python

Overview: 
This module explores the performance of the BMM150 3-axis geomagnetic sensor integrated into the Arduino Nicla Sense ME board. 
The goal was to analyze the sensor's precision, drift behavior, and its capability to detect the Earth’s magnetic field under static and outdoor conditions. 
The flip core and Hall effect technologies were evaluated for their accuracy and noise characteristics.

Tasks Performed: 
Task 1 – Static Sensor Performance
Collected 1000 samples indoors in a stationary setup to assess sensor drift and noise. X and Y axes (flip core) showed minimal drift, while Z (Hall sensor) exhibited slightly more variance.
Task 2 – Offset Calculation via Sensor Flipping
Measured magnetic values before and after flipping the sensor on each axis. Calculated axis-wise offset to correct for environmental interference and sensor bias.
Task 3 – Outdoor Magnetic Field Measurement
Conducted the same sampling in a low-interference outdoor environment. Calculated raw Earth’s magnetic field components (Bx, By, Bz).
Task 4 – Earth Field Vector Calculation
Applied offset correction and derived horizontal, vertical, and total magnetic field vectors.
Calculated B_total ≈ 49.49 µT, close to the expected 48.43 µT
Task 5 – Magnetic Heading Estimation
Aligned sensor to magnetic North outdoors and measured heading deviation.
Observed deviation: 2.02°, close to expected 3.24°

Key Learnings: 
Flip core sensors provide stable and accurate measurements in low-noise conditions.
Z-axis Hall sensors are more prone to drift and external influences.
Offset calibration and outdoor testing are crucial for accurate geomagnetic field estimation.
Learned to integrate Arduino Nicla Sense ME, acquire sensor data via serial communication and apply vector calculations using Python.
