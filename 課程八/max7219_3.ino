#include "LedControl.h"

int word_matrix[8][8] = {{1, 1, 0, 0, 0, 0, 1, 1}, 
                         {1, 1, 0, 0, 0, 0, 1, 1},
                         {1, 1, 0, 0, 0, 0, 1, 1}, 
                         {1, 1, 1, 1, 1, 1, 1, 1},
                         {1, 1, 1, 1, 1, 1, 1, 1},
                         {1, 1, 0, 0, 0, 0, 1, 1}, 
                         {1, 1, 0, 0, 0, 0, 1, 1},
                         {1, 1, 0, 0, 0, 0, 1, 1},
                        };

LedControl lc = LedControl(4, 6, 5, 0);

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 10);
  lc.clearDisplay(0);
}

void loop() { 
  for (int i = 0; i < 8; i++) { 
    for (int j = 0; j < 8; j++) {
      if (word_matrix[i][j] == 1) 
      {
        lc.setLed(0, i, j, true);
      } else {
        lc.setLed(0, i, j, false);
      } 
    } 
  }
}