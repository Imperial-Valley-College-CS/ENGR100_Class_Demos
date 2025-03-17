int pin = 12;
int pinT = 11; 
int dt = 200;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  pinMode(pinT, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  blinkLED(pin);    //invoke blinkLED (execute commands in function)  
  blinkLED(pin);
  blinkLED(pinT);
  blinkLED(pinT);
}

void blinkLED( int x )
{
  digitalWrite(x, HIGH);
  delay(dt);    
  digitalWrite(x, LOW);
  delay(dt);
}
