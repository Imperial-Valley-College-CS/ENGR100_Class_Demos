#include <IRremote.h>
#define ON_OFF_KEY 0xFF629D
#define A_KEY 0xFF22DD
#define B_KEY 0xFF02FD
#define C_KEY 0xFFC23D

int sensorPin = 11;
int redPin = A0;
int greenPin = A1;
int bluePin = A2;

IRrecv irrecv(sensorPin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();  //start receiver
  pinMode(sensorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( irrecv.decode(&results)){

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
