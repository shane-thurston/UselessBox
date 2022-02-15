#include <Servo.h>
Servo lidServo;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  lidServo.attach(11);
  lidServo.write(pos);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (pos = 0; pos < 90; pos += 2) {
    lidServo.write(pos);
    delay(15);
  }
  delay(500);
  for (pos = 90; pos > 0; pos -= 2) {
    lidServo.write(pos);
    delay(15);
  }
  delay(500);
}
