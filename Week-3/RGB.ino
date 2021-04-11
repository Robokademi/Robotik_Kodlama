#include <SPI.h>

int redLED=11;
int maviLED=10;
int greenLED=9;


void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(maviLED, OUTPUT);
   pinMode(greenLED, OUTPUT);
}

void loop()
{
rgb_light(255,0,0);
  delay(1000);
rgb_light(0,255,0);
  delay(1000);
rgb_light(0,0,255);
 delay(1000); 
  
}

void rgb_light(int red_value,int mavi_value,int green_value){
  
  analogWrite(redLED,red_value);
  analogWrite(maviLED,mavi_value);
  analogWrite(greenLED,green_value);
  
}
