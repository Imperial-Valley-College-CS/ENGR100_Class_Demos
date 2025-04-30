int leftPhotoResPin = A1;
int rightPhotoResPin = A0;
int speedPin = A5;

int leftSensor;      //voltage at left most sensor
int rightSensor;    //voltage at right most sensor
int speedSensor;    //voltage for speed sensor

void setup() {
  // put your setup code here, to run once:
  pinMode(leftPhotoResPin, INPUT);
  pinMode(rightPhotoResPin, INPUT);
  pinMode(speedPin, INPUT);
  Serial.begin(9600);
  delay(1500);    //1.5 second delay for motor startup
}

void loop() {
  // put your main code here, to run repeatedly:
  leftSensor = analogRead( leftPhotoResPin );
  rightSensor = analogRead( rightPhotoResPin );
  speedSensor = analogRead( speedPin );

  Serial.print("Left Sensor: ");
  Serial.print(leftSensor);
  Serial.print(", Rigth Sensor: ");
  Serial.print(rightSensor);
  Serial.print(", Speed Sensor: ");
  Serial.print(speedSensor);
  Serial.println();
  delay(500);
  
}
