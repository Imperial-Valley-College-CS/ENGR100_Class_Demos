#include <Servo.h>
#include <IRremote.h>

#define POWER_KEY 0xFF629D
#define A_KEY 0xFF22DD

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
IRsend irsend;
decode_results results;

Servo myservo;    //creates a Servo object

int redPin = A0;
int bluePin = A1;
int greenPin = A2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  myservo.attach(9);    //attach pin 9 to servo object
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);   //print the code of the button
    irrecv.resume();
    if( results.value == POWER_KEY )
    {
      rgb(255,0,0);   //invoke rgb function (give it 255-red, 0-green, 0-blue)
    }else if( results.value == A_KEY )
    {
      rotateServo();
    }    
  }
  delay(500);
} //end loop

void rgb( int red, int green, int blue )
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}

void rotateServo()
{
    myservo.write(180);
    delay(200);
    myservo.write(90);   
    delay(200);
    myservo.write(0);
    delay(200);
}
