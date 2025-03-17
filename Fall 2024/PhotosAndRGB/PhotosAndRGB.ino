int pins[] = {A0, A1, A2};
int sensors[] = {A3, A4, A5};
int vals[] = {0,0,0};
int colors[] = {0,0,0};
int mins[] = {217, 300, 285};
int maxs[] = {650, 584, 590};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for( int i = 0; i < 3; i++ )
  {
    pinMode(pins[i], OUTPUT);
    pinMode(sensors[i], INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int i = 0; i < 3; i++ )
  {
    vals[i] = analogRead(sensors[i]);  //vals[0] is voltage at sensors[0]
    colors[i] = map(vals[i], mins[i], maxs[i], 0, 255);
    analogWrite(pins[i], colors[i]);
    Serial.print(vals[i]); Serial.print(" ");
  }
  Serial.println();
  delay(100);
}
