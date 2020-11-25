void setup()
{
  Serial.begin(9600);
}

void loop()
{
	int data = analogRead(A0);
  	Serial.print("Analog Value is ");
  	Serial.println(data);
}