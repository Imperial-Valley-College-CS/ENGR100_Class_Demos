#include <Servo.h>
#include <IRremote.h>
#define ON_OFF_KEY 0xFF629D
#define A_KEY 0xFF22DD
#define B_KEY 0xFF02FD
#define C_KEY 0xFFC23D
#define UP_KEY 0xFF9867
#define DOWN_KEY 0xFF38C7


int sensorPin = 11;
int servoPin = 9;
int redPin = A0;
int greenPin = A1;
int bluePin = A2;
int pos = 0;      //position of servo in degrees

Servo myservo;
IRrecv irrecv(sensorPin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(servoPin);
  irrecv.enableIRIn();  //start receiver
  pinMode(sensorPin, INPUT);
  myservo.write(pos);   //move servo to 0 degrees on start up
}

void loop() {
  // put your main code here, to run repeatedly:
  if( irrecv.decode(&results)){

    if( results.value == UP_KEY )
    {
      pos = pos + 5;
      if( pos >= 180 )    //prevents windup of the position
      {
        pos = 180;
      }
      myservo.write(pos);
    }

    if( results.value == DOWN_KEY )
    {
      pos = pos - 5;
      if( pos <= 0 )    //prevents windup of the position
      {
        pos = 0;
      }
      myservo.write(pos);
    }
    
    if( results.value == ON_OFF_KEY )
    {
      rgb(0,255,0);   //turn on LED Green when power key is pressed
    }
    
    Serial.println( results.value, HEX );
    irrecv.resume();    //resume receiver
  }  

  delay(500);
}

void rgb(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
