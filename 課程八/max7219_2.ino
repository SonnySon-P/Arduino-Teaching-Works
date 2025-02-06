#include "LedControl.h"

LedControl lc = LedControl(4, 6, 5, 0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 10);
  lc.clearDisplay(0);
}

void loop() { 
  int x = random(8);
  int y = random(8);

  lc.setLed(0, x, y, true);
  delay(1000);
  lc.setLed(0, x, y, false);
}