const int buttonpin = 8;
boolean buttonstate = 0;
boolean buttonold = 0;
int i = 0;
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT); 
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);
}
void loop()
{ 
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  buttonstate = digitalRead(buttonpin);
  if((buttonstate == 0) && (buttonold == 1))
  {
    i = i + 5; 
  }
    analogWrite(5, i);
    analogWrite(6, i);
    buttonold = buttonstate;
    if (i > 255)
    {
      i = 0;
    }
}
    
  
