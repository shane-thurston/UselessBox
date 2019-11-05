#include <Servo.h>
Servo fingerServo;
Servo lidServo;
int switch_pin = 6;
int pos = 0;
int selectedMove = 0;
void setup()
{
  pinMode(switch_pin, INPUT);
  fingerServo.attach(10);
  fingerServo.write(0);
  lidServo.attach(8);
  lidServo.write(0);
}

void loop()
{
  
  if(digitalRead(switch_pin) == HIGH) {
    
    if(selectedMove == 0) {
      switchoff();
    }
    else if (selectedMove == 1) {
      //hesitation();
    }
    else if (selectedMove == 2) {
      //lazy();
    }
  }
}

void switchoff() {
  for (pos = 0; pos < 90; pos += 5) {
    lidServo.write(pos);
    delay(15);
  }
  delay(500);
  for (pos = 0; pos < 160; pos += 4) {
    fingerServo.write(pos);
    delay(15);
  }
  for (pos = 160; pos >=0; pos -= 5) {
    fingerServo.write(pos);
    delay(15);
  }
  delay(500);
  for (pos = 90; pos >= 0; pos -= 5) {
    lidServo.write(pos);
    delay(15);
  }
}

void hesitation() {
  //add code here for hestitation
}

void lazy() {
  //add code here for lazy
}
