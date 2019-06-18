 #define LED1 3
 #define LED2 11
 #define POT A0
 #define BUT 2
 int buttonState = 0;
 int prevbuttonState = 0;   
 int reserve = 0;
 boolean state = 0;
void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUT, INPUT);
  pinMode(POT, INPUT);
  Serial.begin(9600);
 
  pinMode(BUT, INPUT);
}
void loop() 
{  
  int current = analogRead(POT);
  buttonState = digitalRead(BUT);  
  current = current / 4; 

  if((prevbuttonState == LOW) && (buttonState == HIGH))
  {
    state = !state;
    prevbuttonState = LOW;
    delay(100);
  }
  if(state == 0)
            {
                  analogWrite(LED1,current);
            }
         else
            {
                  analogWrite(LED2,current); 
            }
     Serial.println(buttonState);
     delay(100);
  }
  

 // analogWrite(led1,map(analogRead(pot),0,1023,255,0)); 
  //analogWrite(led2,map(analogRead(pot),0,1023,0,255)); 


