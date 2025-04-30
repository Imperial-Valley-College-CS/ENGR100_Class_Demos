#include <L298NX2.h>

enum side {LEFT, RIGHT};

//                  Left Motors   Right motors 
L298NX2 DriveMotors(  2, 3, 4,      7, 5, 6);
//                 ENA, IN1, IN2, ENB, IN3, IN4

//Set Initial Speed of Motors
int speed = 60;

void setup() {
  // put your setup code here, to run once:
  delay(1500);
}

// A function that commands a specified motor to move towards a given direction at a given speed
void runMotorAtSpeed(side _side, int speed) {

  if (_side == LEFT) {
    DriveMotors.setSpeedA(abs(speed));
    if (speed > 0)                // swap direction if speed is negative
      DriveMotors.forwardA();           // sets the direction of the motor from arguments
    else
      DriveMotors.backwardA();          // sets the direction of the motor from arguments
  }
  if (_side == RIGHT) {
    DriveMotors.setSpeedB(abs(speed));
    if (speed > 0)                // swap direction if speed is negative
      DriveMotors.forwardB();           // sets the direction of the motor from arguments
    else
      DriveMotors.backwardB();          // sets the direction of the motor from arguments
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
