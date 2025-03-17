int redPin = A0;
int greenPin = A1;
int bluePin = A2;
int dt = 200;   //200 milliseconds (0.2 seconds)

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int i = 50; i <= 255; i+= 5)
  {
    rgb(i, 0, 0);
    delay(dt);
  }
}

void rgb(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
