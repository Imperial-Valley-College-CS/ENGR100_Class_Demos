#include <Servo.h>

Servo myservo;    //creating a Servo object

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);    //servo connected to pin 9
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(90);    //turn servo to 90 deg position
}
