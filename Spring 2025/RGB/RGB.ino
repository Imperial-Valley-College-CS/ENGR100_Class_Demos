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
  rgb(50, 185, 130);  //shade of green
  delay(dt);
  rgb(255, 0, 0 );    //red
  delay(dt);
  rgb(0, 255, 0 );    //green
  delay(dt);
  rgb(0, 0, 255 );    //blue
  delay(dt);
}

void rgb(int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
