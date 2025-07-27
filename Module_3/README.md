Module 3: Indoor Air Quality Monitoring with BME688
Course: Sensors Lab – Laboratory for Electrical Instrumentation and Embedded Systems
Institution: IMTEK, University of Freiburg
Tools Used: Arduino Nicla Sense ME, Arduino IDE, Bosch BSEC Library, Python

Overview: 
This module focuses on monitoring and analyzing indoor air quality using the BME688 metal oxide gas sensor integrated in the Arduino Nicla Sense ME development board. 
Through three tasks, various environmental and gas parameters such as VOC levels, CO₂ concentration, IAQ index, humidity and temperature were measured under controlled and real-life conditions. 

Tasks Performed: 
Task 1 – Raw Resistance Measurement with VOC Sources
The BME688 sensor's resistance response was recorded for three different VOC-emitting samples: red chilli, coriander powder and perfume.
Perfume showed the highest and most sustained resistance change with a recovery time of ~1100s.
Red chilli had a sharp but brief change (~20–30s recovery) and coriander showed intermediate behavior (~900s recovery).
Task 2 – VOC and CO₂ Estimation Using BSEC
VOC and CO₂ concentrations were recorded using the Bosch BSEC library once sensor accuracy reached level 3.
VOC and CO₂ levels rose upon exposure to the samples and returned to baseline with characteristic decay times.
The sensor estimates CO₂ indirectly based on VOC patterns, temperature, and humidity.
Task 3 – 24-Hour Indoor Air Quality Monitoring
The board was placed in a shared student kitchen and recorded IAQ, temperature, humidity and CO₂ every 10 seconds for 24 hours.
Clear peaks in IAQ and CO₂ levels were observed during cooking, coffee brewing and a party.
During inactivity, values stabilized and reflected environmental baseline.

Key Learnings: 
The BME688 is highly responsive to VOCs and capable of real-time IAQ assessment when paired with the BSEC algorithm.
Raw resistance provides fast detection, while IAQ and CO₂ require calibration and context-aware interpretation.
Sensor placement, ventilation, and environmental conditions heavily influence the results.
Developed proficiency in long-term data logging, preprocessing and interpreting environmental sensor data using Python.
