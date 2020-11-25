#include <LiquidCrystal.h>



#define PIR_INPUT 2
#define BUZZER_OUT 3


LiquidCrystal lcd(13, 12, 11,10,9,8);

void check_for_intruder(){

  boolean sensorval = digitalRead(PIR_INPUT);
  if(sensorval == 1)
  {
  	digitalWrite(BUZZER_OUT, HIGH);
    lcd.setCursor(0,0);
  	lcd.print("Intruder in the ");
    lcd.setCursor(0,1);
    lcd.print("Houser !!!!!");
    delay(3000);
  	lcd.clear();
  
  }
  else{
  	lcd.print("SAMPIS");
  	digitalWrite(BUZZER_OUT,LOW);
  }
delay(10);

}
  
 void setup()
{
	pinMode(BUZZER_OUT,OUTPUT);
  	pinMode(PIR_INPUT, INPUT);
  	Serial.begin(9600);
	lcd.begin(16,2);
}

void loop(){
lcd.setCursor(0,0);
lcd.print("ALL CLEAR : Mang" );
check_for_intruder();
lcd.print("Sampis");
}