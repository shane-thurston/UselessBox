// C++ code
//
int redLedPin = 11;
int greenLedPin = 9;
int blueLedPin = 10;
void setup()
{
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop()
{
  analogWrite(redLedPin, random(0,255));
  analogWrite(greenLedPin, random(0,255));
  analogWrite(blueLedPin, random(0,255));
  delay(500);
}
