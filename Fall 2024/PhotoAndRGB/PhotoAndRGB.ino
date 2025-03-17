int voltage;
int color;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(A3);
  color = map(voltage, 200, 650, 0, 255);
  analogWrite(A0, color);     //red is held constant
  analogWrite(A1, color);   //blue is going to change with photo
  analogWrite(A2, color);     //green is held constant
  Serial.println(voltage);
  delay(500);
  
}
