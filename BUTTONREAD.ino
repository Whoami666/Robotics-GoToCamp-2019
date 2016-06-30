#include <MicroView.h>
#include <SoftwareSerial.h>

#define SIZE 10

SoftwareSerial mySerial(A1, 6);



int verv = 0;
int datch = A0;
int cirr = 0;
int i = 0;
int suum = 0;
float SR = 0;


int s[SIZE];

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
  for(i = 0; i < 9; i++)
  {
    s[i]= analogRead(datch);
    suum = suum + s[i];
    delay(100);
  }
  SR =  suum/10;
  
}
void loop()
{
  cirr = analogRead(datch);
  if(abs(verv - cirr) >= 80)
  {
    i++;
  } 
  
  Serial.println(i/2);
  Serial.println(cirr);
  Serial.println(verv);
  delay(200);
  verv = cirr;
}

