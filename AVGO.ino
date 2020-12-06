

#include <Servo.h>

Servo myservo; 


int pos = 0;   

void setup() {
  myservo.attach(9);  

pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  for (pos = 80; pos <= 110; pos += 1) { 
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
     myservo.write(pos);              
    delay(30);
    
                          
  }
  for (pos = 110; pos >= 80; pos -= 1) {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    myservo.write(pos);              
    delay(30); 
   
  }
}
