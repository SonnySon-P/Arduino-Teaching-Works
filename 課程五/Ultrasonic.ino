#include <Ultrasonic.h>

Ultrasonic ultrasonic(10, 9);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int distance = ultrasonic.read();
  Serial.print("量測距離為: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
