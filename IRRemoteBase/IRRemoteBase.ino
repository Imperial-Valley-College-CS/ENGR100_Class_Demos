#include <IRremote.h>
#define ON_OFF_KEY 0xFF629D

int sensorPin = 11;

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
    Serial.println( results.value, HEX );
    irrecv.resume();    //resume receiver
  }  

  delay(500);
}
