#include <AFMotor.h>

AF_DCMotor engine1(1);
AF_DCMotor engine2(2);
AF_DCMotor engine3(3);
AF_DCMotor engine4(4);
//motor 2 and 4 are on the top while 
//motor 1 and 3 are on the bottom. HW-130 SHIELD MOTOR DRIVER

void setup() {
  // put your setup code here, to run once:


 engine1.setSpeed(200);
 engine2.setSpeed(200);
 engine3.setSpeed(200);
 engine4.setSpeed(200);
}

void loop() {
  // put your main code here, to run repeatedly:

  engine2.run(BACKWARD);
  engine4.run(FORWARD);
  engine1.run(BACKWARD);
  engine3.run(FORWARD);
  //engine4.run(RELEASE);

}
