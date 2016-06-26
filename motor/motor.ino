
void setup()
{
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
}
void loop()
{
digitalWrite(7, HIGH);
analogWrite(6, 250);
}

