#include <LiquidCrystal.h>



#define Trigger 3
#define echo 2

long durations;
float distance;


LiquidCrystal lcd(13, 12, 11,10,9,8);

 void time_Measurement(){
   
   
  digitalWrite(Trigger, LOW);
  delayMicroseconds(10);
  digitalWrite(Trigger,1);
  delayMicroseconds(10);
  digitalWrite(Trigger,LOW);
  
  durations = pulseIn(echo, 1);                

}
void display_distance(){

  	Serial.print("Distance in Cm: " );
	Serial.print(distance);
  	Serial.println();
  
  	lcd.print("Distance in CM: ");
  	lcd.setCursor(0,1);
  	lcd.print(distance);
  	
  	delay(1500);
  	lcd.clear();
}
  
 void setup()
{
	pinMode(Trigger,OUTPUT);
  	pinMode(echo, INPUT);
  	Serial.begin(9600);
	lcd.begin(16,2);
}

void loop(){
  time_Measurement();
  distance = (float)durations * (0.0343) / 2;
  display_distance();

}