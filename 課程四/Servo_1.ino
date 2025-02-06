#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(13);
  servo.write(30);
}

void loop() {
  servo.write(30);
  delay(2000);
  servo.write(150);
  delay(2000);
}