void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(13, 1000);
  blinkLED(12, 500);
}

void blinkLED(int pin, int dt)
{
  digitalWrite(pin, HIGH);
  delay(dt);
  digitalWrite(pin, LOW);
  delay(dt);
}
