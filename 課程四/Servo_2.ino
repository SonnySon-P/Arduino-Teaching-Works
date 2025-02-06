#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(13);
  servo.write(0);
}

void loop() {
  int potentiometer = analogRead(A5);
  int angle = map( potentiometer, 0, 1023, 0, 180);
  servo.write(angle);
}