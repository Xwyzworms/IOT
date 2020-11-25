#include <LiquidCrystal.h>



int sensor_input;
float temp;

LiquidCrystal lcd(13, 12, 11,10,9,8);

void measure_temp(){

sensor_input = analogRead(A0);
temp = (float)sensor_input / 1024;
temp = temp * 5 ;
temp = temp - 0.5;
temp = temp * 100;        
  
}

void display_temp(){

 lcd.setCursor(0,0);
 lcd.print("Temp in Celcius: " );
 lcd.setCursor(5,1);
 lcd.print(temp);
 delay(50);


}

 void setup()
{
  	Serial.begin(9600);
	lcd.begin(16,2);
}

void loop(){
measure_temp();
display_temp();
}