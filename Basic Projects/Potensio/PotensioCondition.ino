#define PotensioSensor A0
#define LedSensor 13


void setup(){

	pinMode(PotensioSensor,INPUT);
	pinMode(LedSensor, OUTPUT);
	Serial.begin(9600);

}

void loop ()
{
	PotensioState = analogRead(PotensioSensor);
	Serial.print(PotensioState);
	Serial.print("\n");
	delay(100);
	
	if(PotensioState >= 500){
		digitalWrite(LedSensor,1);
		delay(PotensioState / 100);
		digitalWrite(LedSensor,0);
		delay(PotensioState / 100);

	}

}

