 #define led1 3
 #define led2 5
 #define pot A0
void setup() 
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pot, INPUT);
}
void loop() 
{
  int p;  
  p = analogRead(pot);  
  analogWrite(led1,map(analogRead(pot),0,1023,255,0)); 
  analogWrite(led2,map(analogRead(pot),0,1023,0,255)); 
}

