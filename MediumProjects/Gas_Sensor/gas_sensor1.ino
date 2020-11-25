#define RED 4
#define YELLOW 3
#define GREEN 2
#define BUZZERGAN 5


void setup(){
  for (int i=2;i<6;i++){
  
  	pinMode(i,OUTPUT);
    Serial.begin(9600);
  }

}
void loop(){
  for (int i=2;i <6;i++){
  
  	digitalWrite(i,0);
  }

  status_indicator();

}

void status_indicator(){

int sensor_in = analogRead(A0);
  if (sensor_in >= 110 )
  {
  	digitalWrite(RED, 1);
    digitalWrite(BUZZERGAN,1);
  
  }
  else if (sensor_in>= 90 && sensor_in <=99)
  {
  
  	digitalWrite(YELLOW,1);
  
  }
  else
  {
  	digitalWrite(GREEN,1);
  	
  }
  delayMicroseconds(100);


}