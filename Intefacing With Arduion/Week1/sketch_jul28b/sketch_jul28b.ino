

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int buttonPin2 = 4 ;
const int ledPin =  13;      // the number of the LED pin
const int ledPin2 = 12;
// variables will change:
int buttonState = 0;   // variable for reading the pushbutton status
int buttonState2 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2 ,OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2,INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
while(buttonState == HIGH) 
 {
for(int i = 1; i< 2; i++){    
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(200);
  digitalWrite(ledPin2,HIGH);
  delay(100);
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin2,LOW);
  delay(20);
  digitalWrite(ledPin,LOW);
  delay(10);
   }
}
digitalWrite(ledPin,HIGH);
digitalWrite(ledPin2,HIGH);
buttonState=digitalRead(buttonPin);
if(buttonState == HIGH){buttonState = LOW;}

 return 0;}
 
