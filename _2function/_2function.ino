void setup()
{
digitalWrite(4, HIGH);
}

void loop()
{
change(200, 200);
delay(1000);
change(100, 250);
delay(1000);
}
void change (int left, int right)
{
analogWrite(5, abs(left));
analogWrite(6, abs(right));
if(left < 0) digitalWrite(4, 1);
else digitalWrite(4, 0);
if(right < 0) digitalWrite(7, 1);
else digitalWrite(7, 0);
}


