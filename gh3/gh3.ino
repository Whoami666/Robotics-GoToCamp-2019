
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}
  void loop()
{
  lll(400, 200, 8);
for(int i = 0; i < 3; i++)
{ 
  lll(500, 300, 10); 
}
  lll(500, 300, 12);
} 
  void lll(int on, int off, int pin)
{
   digitalWrite(pin, HIGH);
   delay(on);
   digitalWrite(pin, LOW);
   delay(off);
}  


  
 


