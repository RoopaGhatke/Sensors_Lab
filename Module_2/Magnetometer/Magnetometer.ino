#include <Arduino_BHY2.h>
SensorXYZ magn(SENSOR_ID_MAG_PASS);
float mag_x;
float mag_y;
float mag_z;
char a;

//from task 2 offset values were calculated
float x_off = -20.69;
float y_off = -71.87;
float z_off = -53.56;
int count = 0;

void setup() 
{
  Serial.begin(115200);
  BHY2.begin();
  magn.begin();
}

void loop() {

   a = Serial.read();
   

   if (a=='r')
   {

     while(count<1000)
     {

    static auto lastCheck = millis();

  
   if (millis() - lastCheck >= 100 )
    {
      count++;
      BHY2.update();
      lastCheck = millis();
      mag_x = magn.x()/ 16 -x_off;
      mag_y = magn.y()/ 16 -y_off;
      mag_z = magn.z()/ 16 -z_off;
     
      Serial.print(count);
      Serial.print(",");
      Serial.print(mag_x);
      Serial.print(",");
      Serial.print(mag_y);
      Serial.print(",");
      Serial.print(mag_z);

    
    float xyHeading = atan2(mag_x, mag_y);
    float zxHeading = atan2(magn.z(), magn.x());
    float heading = xyHeading;
    if (heading < 0) {
        heading += 2 * PI;
    }
    if (heading > 2 * PI) {
        heading -= 2 * PI;
    }
    float headingDegrees = heading * 180 / M_PI;
    float xyHeadingDegrees = xyHeading * 180 / M_PI;
    float zxHeadingDegrees = zxHeading * 180 / M_PI;
    Serial.println(headingDegrees);
    

     }
     }
    

}



}