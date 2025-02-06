#include "LedControl.h"

LedControl lc = LedControl(4, 6, 5, 0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 10);
  lc.clearDisplay(0);
}

void loop() { 
  lc.setLed(0, 2, 2, true);
  delay(1000);
}
