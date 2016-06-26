#include <Servo.h>
  Servo myservo;
  int maxi = 0;
  int k = 0;
  int analogg;
  
void setup()
{
  myservo.attach(8);
}
void loop()
{
  maxi = 0;
  for(int i = 0; i <=180; i++)
  { 
    delay(50);
     myservo.write(i);
    analogg = analogRead(A5);
    if(analogg >= maxi)
    {
    maxi = analogg;
    k = i; 
    }
  }
  myservo.write(k);
  delay(1000);
}
