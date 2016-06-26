
void setup()
{
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
}
void loop()
{
digitalWrite(7, HIGH);
for(i = 0; i < 251; i++)
analogWrite(6, i);
}

