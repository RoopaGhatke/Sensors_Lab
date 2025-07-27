#include "Arduino_BHY2.h"
Sensor pressure(SENSOR_ID_BARO);
SensorXYZ accelerometer(SENSOR_ID_ACC);

void setup() {
  Serial.begin(115200);
  BHY2.begin();
  pressure.begin();
  accelerometer.begin();
}

void loop(){
  static auto lastCheck= millis();
  BHY2.update();

  // Check sensor values every milli second  
  if (millis() - lastCheck >= 100) {
    lastCheck = millis();
   // Serial.print(String("time:")+(lastCheck/1000));
    Serial.print(String("  pressure:")+pressure.value());
    Serial.println(String("  acceleration: ") + accelerometer.toString());
  }
}
