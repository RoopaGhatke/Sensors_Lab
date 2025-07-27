#include "Arduino_BHY2.h"


Sensor gas(SENSOR_ID_GAS);

int count = 0;

void setup() 
{
  Serial.begin(115200);
  BHY2.begin();
  gas.begin();
}

void loop() 
{
     while(1)
     {

     static auto lastCheck = millis();
     BHY2.update();

       if (millis() - lastCheck >= 10000)
        { 
          lastCheck = millis();
          count++;

          Serial.print(count);
          Serial.print(',');
          Serial.println(gas.value());
        }

     }

    
}
