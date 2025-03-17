//variables for voltage reading on A0-A3
double volt0;
double volt1;
double volt2;
double volt3;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(A0,INPUT);    //read voltage at pin A0
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  Serial.begin(9600);   //baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  volt0 = 0.00488*analogRead(A0);     //read voltage at A0
  volt1 = 0.00488*analogRead(A1);     //read voltage at A1
  volt2 = 0.00488*analogRead(A2);     //read voltage at A2
  volt3 = 0.00488*analogRead(A3);     //read voltage at A3
  Serial.print(volt0);    //print voltage at A0
  Serial.print(" ");
  Serial.print(volt1);    //print voltage at A1
  Serial.print(" ");
  Serial.print(volt2);    //print voltage at A2
  Serial.print(" ");
  Serial.print(volt3);    //print voltage at A3
  Serial.println();       //print a new line
  delay(1000);
}
