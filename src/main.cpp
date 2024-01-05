// main

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
const int buttonPin = 2;
const int joyXPin = A0;
const int joyYPin = A1;
const int joySwitchPin = 4;

int buttonState = 0;
int joyXValue = 0;
int joyYValue = 0;

void setup() {
  servo1.attach(3);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(9);

  pinMode(buttonPin, INPUT);
  pinMode(joySwitchPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  joyXValue = analogRead(joyXPin);
  joyYValue = analogRead(joyYPin);

  if (buttonState == HIGH) {
    servo1.write(90);
  } else {
    servo1.write(0);
  }

  int mappedX = map(joyXValue, 0, 1023, 0, 180);
  servo2.write(mappedX);

  int mappedY = map(joyYValue, 0, 1023, 0, 180);
  if (joyYValue < 512) {
    servo3.write(mappedY);
    servo4.write(180 - mappedY);
  } else {
    servo3.write(180 - mappedY);
    servo4.write(mappedY);
}
