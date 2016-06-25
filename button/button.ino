const int buttonPin = 8;
boolean buttonstate = 0;
int n = 0;
boolean buttonold = 0;

void setup()
{
pinMode(buttonPin, INPUT);
Serial.begin(9600);
}
  void loop()
{
buttonstate= digitalRead(buttonPin);
if ((buttonstate == 0) && (buttonold == 1))
{
n = n + 1 ;
}
buttonold = buttonstate;
Serial.println(n);
}
