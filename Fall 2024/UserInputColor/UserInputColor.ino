int redPin = A0;
int greenPin = A2;
int bluePin = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Enter color: ");
  while(Serial.available() == 0){}
  String color = Serial.readString();
  color.trim();     //remove \r\n
  Serial.println(color);
  delay(100);

  if( color == "red" )
  {
    turnOnRGB(255,0,0);
  }else if( color == "blue" )
  {
    turnOnRGB(0,0,255);
  }
}

void turnOnRGB( int red, int green, int blue)
{
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
