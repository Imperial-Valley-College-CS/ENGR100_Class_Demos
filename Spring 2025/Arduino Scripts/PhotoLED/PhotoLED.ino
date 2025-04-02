int ledPin = 13;
int sensorPin = A0;
int lightLevel;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightLevel = analogRead(sensorPin);
  //Serial.println(lightLevel*0.00488);
  if( lightLevel*0.00488 < 2.5 )
  {
    digitalWrite(ledPin, HIGH);
  }else
  {
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
