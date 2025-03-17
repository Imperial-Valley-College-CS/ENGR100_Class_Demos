int redPin = A0;
int greenPin = A2;
int bluePin = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  turnOnRGB(255,0,0);
  delay(1000);
  turnOnRGB(0,255,0);
  delay(1000);
  turnOnRGB(0,0,255);
  delay(1000);
  turnOnRGB(255,255,255);
  delay(1000);
}

void turnOnRGB( int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
