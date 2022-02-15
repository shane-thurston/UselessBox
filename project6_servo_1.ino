#include <Servo.h>
Servo lidServo;
int pos = 0;
int delayTime = 10;

void setup() {
  // put your setup code here, to run once:
  lidServo.attach(11);
  lidServo.write(pos);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (pos <= 180) {
    lidServo.write(pos);
    delay(delayTime);
    pos = pos + 1;
  }
  while (pos > 0) {
    lidServo.write(pos);
    delay(delayTime);
    pos = pos - 1;
  }
}
