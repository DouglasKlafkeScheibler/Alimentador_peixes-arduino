#include <Servo.h>

Servo myservo;

int pos = 0;   
unsigned long delay1=0;

void setup() 
{
  myservo.attach(9);
  myservo.write(0);
}

void loop()
{
  servo();
}
void servo()
{
    //alimentar as 10h da manhã 6 vezes
    //36000000
    if ((millis() - delay1) >= 36000000 && (millis() - delay1) < 36005000)
    {
    for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    {   
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
  }

    //alimentar as 20h da noite 3 vezes 
    if ((millis() - delay1) >= 72000000 && (millis() - delay1) < 72005000)
  {
    for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    {   
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
     for (pos = 0; pos <= 180; pos += 1) 
    {
      myservo.write(pos);              
      delay(15);                       
    }
    for (pos = 180; pos >= 0; pos -= 1) 
    { 
      myservo.write(pos);              
      delay(15);                       
    }
  }

    //resetar o dia
    if (( millis() - delay1) >  86400000)
  {
      delay1 = millis();
  }
}

