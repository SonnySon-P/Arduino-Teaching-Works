#include "LedControl.h"

int word_matrix[8][18] = {
                          {1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0}, 
                          {1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                          {1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0}, 
                          {1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0},
                          {1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0},
                          {1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0}, 
                          {1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                          {1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
                        };

LedControl lc = LedControl(4, 6, 5, 0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 10);
  lc.clearDisplay(0);
}

int t = 0;
void loop() { 
  for (int j = t % 18; j < (8 + t % 18) && j < 18; j++) { 
    for (int i = 0; i < 8; i++) {
      if (word_matrix[i][j] == 1) 
      {
        lc.setLed(0, i, j - t % 18, true);
      } else {
        lc.setLed(0, i, j - t % 18, false);
      } 
    } 
  }
  delay(500); 
  t = t + 1;
}
