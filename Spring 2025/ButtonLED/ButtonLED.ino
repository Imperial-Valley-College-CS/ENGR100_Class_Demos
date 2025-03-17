//Declared variables for digital pins (for input & output)
int bttnPin = 2;
int ledPin = 12;
//Declared variable to track state of LED (ON/OFF)
int ledState;
//Declared variable for button state (pressed/released)
int bttnState;

void setup() {
  // put your setup code here, to run once:  
  pinMode(ledPin, OUTPUT);
  pinMode(bttnPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bttnState = digitalRead(bttnPin);

  if( bttnState == HIGH && ledState == LOW )
  {
    digitalWrite(ledPin, HIGH);
    ledState = HIGH;
  }
  else if( bttnState == HIGH && ledState == HIGH )
  {
    digitalWrite(ledPin, LOW);
    ledState = LOW;
  }
  delay(500);   //gives time to remove finger from button
}
