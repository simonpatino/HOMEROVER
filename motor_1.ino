#include <AFMotor.h>

AF_DCMotor engine1(1);
AF_DCMotor engine2(2);
AF_DCMotor engine3(3);
AF_DCMotor engine4(4);
//motor 2 and 4 are on the top while 
//motor 1 and 3 are on the bottom. HW-130 SHIELD MOTOR DRIVER

void setup() {
  // put your setup code here, to run once:


 engine1.setSpeed(0);
 engine2.setSpeed(0);
 engine3.setSpeed(0);
 engine4.setSpeed(0);
}
  
// a void loop is always necesary on arduino. In case you forget it --->
//undefined reference to `loop'
//collect2: error: ld returned 1 exit status

void loop() {


}
void forward() {
  

  engine2.run(BACKWARD);
  engine4.run(FORWARD);
  engine1.run(BACKWARD);
  engine3.run(FORWARD);
 

}
//void function doesn't return a value while function() always return a value 
