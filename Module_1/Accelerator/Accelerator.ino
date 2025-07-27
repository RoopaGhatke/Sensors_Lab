#include "Arduino_BHY2.h"
SensorXYZ accelerometer(SENSOR_ID_ACC);

void setup(){
  Serial.begin(115200);
  BHY2.begin();

  accelerometer.begin();
}

void loop(){
  static auto lastCheck = millis();

  // Update function should be continuously polled
  BHY2.update();

  // Check sensor values every 100 milli second  
  if (millis() - lastCheck >= 100) {
    lastCheck = millis();

    Serial.println(accelerometer.toString());
  }
}
