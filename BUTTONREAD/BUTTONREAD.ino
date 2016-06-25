
void setup()
{
  Serial.begin(9600);
  pinMode(8, INPUT);
}
void loop()
{
  boolean sensorValue = digitalRead(8);
 Serial.println(sensorValue);
 delay(100);
}
