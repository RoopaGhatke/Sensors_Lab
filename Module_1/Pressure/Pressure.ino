#include "Arduino_BHY2.h"
Sensor pressure(SENSOR_ID_BARO);


void setup(){
  Serial.begin(115200);
  BHY2.begin();
  pressure.begin();
}

void loop(){
  static auto lastCheck= millis();
  BHY2.update();

  // Check sensor values every milli second  
  if (millis() - lastCheck>=100) {
    lastCheck = millis();
    Serial.println(pressure.value());
  }
}