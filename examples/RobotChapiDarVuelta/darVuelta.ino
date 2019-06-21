#include <RobotChapi.h>
RobotChapi robot = RobotChapi(2,3,4,5,9,10,0);
void setup() {
  
}
void loop() {
  robot.adelante(200);
  delay(2000);
  robot.derecha(100);
  delay(2000);
  robot.adelante(200);
  delay(2000);
  robot.derecha(100);
  delay(2000);
}
