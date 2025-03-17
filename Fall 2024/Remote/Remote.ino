#include <IRremote.h>
#define POWER 0xFF629D
#define A_KEY 0xFF629D

int sensorPin = 11;
IRrecv irrecv(sensorPin);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   //establish comm through Serial connection
  irrecv.enableIRIn();  //start receiver
}

void loop() {
  // put your main code here, to run repeatedly:
  if( irrecv.decode(&results) )
  {
    if( results.value == POWER )
    {
      rgb(0, 0, 0);
    }else if( results.value == A_KEY )
    {
      rgb(255, 0, 0);
    }
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
  delay(500);
}

void rgb( int red, int green, int blue )
{
  analogWrite(A0, red);
  analogWrite(A1, blue);
  analogWrite(A2, green);
}
