#include <Servo.h>

Servo myservo;    //creating a Servo object
int pos = 5;
boolean flag = true;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);    //servo connected to pin 9
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(pos);    //turn servo to 90 deg position
  if( flag )
  {
    pos += 5;
  }else
  {
    pos -= 5;
  }
  if( pos == 180 || pos == 0 )
  {
    flag = !flag;       //change flag to true if false, or to false if true
  }
  delay(200);
}
