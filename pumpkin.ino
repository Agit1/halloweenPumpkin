#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6, servo7;// servo8, servo9, servo10;
int angle = 20;
int randNumber = 0;
int analogSound = A0;
int digitalSound = 3;

void setup() {
  servo1.attach(13);
  servo2.attach(12);
  servo3.attach(11);
  servo4.attach(10);
  servo5.attach(9);
  servo6.attach(8);
  servo7.attach(7);
  /*servo8.attach(6);
  servo9.attach(5);
  servo10.attach(4);*/

  pinMode(analogSound, INPUT);
  pinMode(digitalSound, INPUT);
  Serial.begin (9600); 
}

void loop() 
{
 float analog;
 int digital;

 analog = analogRead(analogSound);
 digital = digitalRead(digitalSound);

 Serial.println(analog); 
 Serial.println(digital); 

 if(digital == 1) {
 for(int i = 0; i <= 55; i++){

     randNumber = random(180); 
     servo1.write(randNumber);
     delay(20);
        
     randNumber = random(180);
     servo3.write(randNumber);
     delay(20);
     
     randNumber = random(180);
     servo4.write(randNumber);
     delay(20);
     
     randNumber = random(180);
     servo6.write(randNumber);
     delay(20);

     randNumber = random(180);
     servo2.write(randNumber);
     delay(20);
    
     randNumber = random(180);
     servo7.write(randNumber);
     delay(20);
     
     randNumber = random(180);
     servo5.write(randNumber);
     delay(20);
     
     delay(500);
 }
  
 
 }  
 else {
  delay(10);
 }
 
 
}
