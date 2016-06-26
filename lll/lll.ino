#include <Servo.h>           
Servo myservo;                    
const int analogpin = A5;

void setup()
{
 pinMode(A5, INPUT);
 myservo.attach(8);  
Serial.begin(9600); 
 
}
void loop()
{
 int analogg = analogRead(analogpin); 
if(analogg > 400)
 {
  myservo.write(180);                    
}
  else
  {
    myservo.write(-180);           
  }
 Serial.println(analogg); 
}

