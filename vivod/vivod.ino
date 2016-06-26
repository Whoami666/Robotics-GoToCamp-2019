int ledpin1 = 4;
int ledpin2 = 5;
int ledpin3 = 3;
int ledpin4 = 9;
int ledpin5 = 6;
int ledpin6 = 7;
int ledpin7 = 10;
int ledpin8 = 8;
 
 
 void setup()
 {
 pinMode(ledpin1, OUTPUT);
 pinMode(ledpin2, OUTPUT);
 pinMode(ledpin3, OUTPUT);
 pinMode(ledpin4, OUTPUT);
 pinMode(ledpin5, OUTPUT);
 pinMode(ledpin6, OUTPUT);
 pinMode(ledpin7, OUTPUT);
 pinMode(ledpin8, OUTPUT);
 Serial.begin(9600);
 }
 void loop()
 {
   if(Serial.available() > 0)
   {
     char number = Serial.read();
  if (number == '5')
   { 
     cleardisplay();
     digitalWrite(ledpin6, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin5, HIGH);
     digitalWrite(ledpin3, HIGH);
     digitalWrite(ledpin2, HIGH);
   }
   if (number == '6')
   { 
     cleardisplay();
     digitalWrite(ledpin6, HIGH);
     digitalWrite(ledpin3, HIGH);
     digitalWrite(ledpin1, HIGH);
     digitalWrite(ledpin2, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin5, HIGH);
   }
    if (number == '1')
   { 
     cleardisplay();
     digitalWrite(ledpin8, HIGH);
     digitalWrite(ledpin3, HIGH); 
   }
    if (number == '7')
   { 
     cleardisplay();
     digitalWrite(ledpin8, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin3, HIGH);
   }
    if (number == '2')
   { 
     cleardisplay();
     digitalWrite(ledpin1, HIGH);
     digitalWrite(ledpin8, HIGH);
     digitalWrite(ledpin2, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin5, HIGH);
   }
    if (number == '3')
   { 
     cleardisplay();
     digitalWrite(ledpin2, HIGH);
     digitalWrite(ledpin4, HIGH);
     digitalWrite(ledpin5, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin8, HIGH);
   }
      if (number == '4')
   { 
   cleardisplay();
     digitalWrite(ledpin4, HIGH);
     digitalWrite(ledpin5, HIGH);
     digitalWrite(ledpin6, HIGH);
     digitalWrite(ledpin8, HIGH);
   }
      if (number == '5')
   { 
     cleardisplay();
     digitalWrite(ledpin2, HIGH);
     digitalWrite(ledpin4, HIGH);
     digitalWrite(ledpin5, HIGH);
     digitalWrite(ledpin6, HIGH);
     digitalWrite(ledpin7, HIGH);
   }
      if (number == '8')
   { 
     cleardisplay();
     digitalWrite(ledpin1, HIGH);
     digitalWrite(ledpin2, HIGH);
     digitalWrite(ledpin4, HIGH);
     digitalWrite(ledpin5, HIGH);
     digitalWrite(ledpin6, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin8, HIGH);
   }
      if (number == '9')
   { 
     cleardisplay();
     digitalWrite(ledpin2, HIGH);
     digitalWrite(ledpin4, HIGH);
     digitalWrite(ledpin5, HIGH);
     digitalWrite(ledpin6, HIGH);
     digitalWrite(ledpin7, HIGH);
     digitalWrite(ledpin8, HIGH);
   }
   }
 }
 
 
 void cleardisplay()
 {
    
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
     digitalWrite(ledpin3, LOW);
     digitalWrite(ledpin4, LOW);
     digitalWrite(ledpin5, LOW);
     digitalWrite(ledpin6, LOW);
     digitalWrite(ledpin7, LOW);
     digitalWrite(ledpin8, LOW);
 }
