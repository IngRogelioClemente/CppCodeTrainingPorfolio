#include <Servo.h>
Servo servo9g;

void setup() {
  servo9g.attach(3);

}

void loop() {
  servo9g.write(0);
  delay(2000);
  servo9g.write(90);
  delay(2000);
  servo9g.write(180);
  delay(2000);

}
