const int buttonPin = 8;
const int ledPin = 10;
int buttonstate = 1; 
int buttonold = 1;
boolean ledstate = false;
void setup()
{
pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}
void loop()
{
buttonstate = digitalRead(buttonPin);

if ((buttonstate == 0) && (buttonold == 1))
{
  delay(10);
  if(digitalRead(buttonPin))
  {
    ledstate = !ledstate;
  }
}
digitalWrite(ledPin, ledstate);
Serial.println(ledstate);
}
