int pins[] = {13,12,11,10};
int delays[] = {500, 1000, 100, 1500};

void setup() {
  // put your setup code here, to run once:
  for( int i = 0; i < sizeof(pins); i++ )
  {
    pinMode(pins[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int i = 0; i < sizeof(pins); i++ )
  {
    blinkLED(pins[i], delays[i]);
  }
}

void blinkLED(int pin, int dt)
{
  digitalWrite(pin, HIGH);
  delay(dt);
  digitalWrite(pin, LOW);
  delay(dt);
}
