int ledPin = 10;
int btPin = A5;

void setup()
{
  pinMode(ledPin, OUTPUT);
}
void loop()
{
  analogWrite(ledPin, analogRead(A5)/4);
}  
