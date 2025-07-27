#include "Arduino_BHY2.h"


SensorBSEC bsec(SENSOR_ID_BSEC);

int count = 0;


void setup() 
{
  Serial.begin(115200);
  BHY2.begin();
  bsec.begin();
  temperature.begin();

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
          Serial.print(millis());
          Serial.print(',');
          Serial.print(bsec.comp_t());
          Serial.print(',');
          Serial.print(bsec.comp_h());
          Serial.print(',');
          Serial.print(bsec.b_voc_eq());
          Serial.print(',');
          Serial.print(bsec.co2_eq());
          Serial.print(',');
          Serial.println(bsec.accuracy());          
        }

     }

    
}
