int del1 = 790;
int del2 = 590;
int del3 = 990;
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}
void loop()
{
digitalWrite(8, HIGH);
delay(del1);
digitalWrite(8, LOW);
digitalWrite(12, HIGH);
delay(del2);
digitalWrite(12, LOW);
digitalWrite(10, HIGH);
delay(del1);
digitalWrite(10, LOW);
delay(del3);
}
