int ledPins[] = {2,4,6,8};    //2-oneBit, 4-twoBit, 6-fourBit, 8-eightBit

void setup() {
  // put your setup code here, to run once:
  int i = 0;
  while(i < sizeof(ledPins))
  {
    pinMode(ledPins[i], OUTPUT);
    i++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for( int j = 1; j <= 15; j++ )
  {
    dispBinary(j);    //invoke dispBinary with j as its argument
    delay(500);
  }
}

void dispBinary(int num)
{
  int index = 0;      //index for ledPins array
  while( num  > 0 )
  {
    int rem = num % 2;    //remainder when divided by 2
    if( rem == 1 )
    {
      digitalWrite( ledPins[index], HIGH );
    }else
    {
      digitalWrite( ledPins[index], LOW );
    }
    num = num/2;    //reduce num by halfing it
    index++;        //increment index to point to next pin
  }
}
