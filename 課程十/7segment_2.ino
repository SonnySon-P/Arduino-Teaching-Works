const int segmentPins[10][8] = {
                                {1, 1, 1, 1, 1, 1, 1, 0},
                                {0, 1, 1, 1, 0, 0, 0, 0},
                                {1, 1, 0, 1, 1, 1, 0, 1},
                                {1, 1, 1, 1, 1, 0, 0, 1},
                                {0, 1, 1, 1, 0, 0, 1, 1},
                                {1, 0, 1, 1, 1, 0, 1, 1},
                                {1, 0, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 0, 0, 0, 0},
                                {1, 1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 1, 0, 1, 1},
                              };

void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

int t = 0;
void loop() {
  digitalWrite(12, segmentPins[t][0]);
  digitalWrite(11, segmentPins[t][1]);
  digitalWrite(A5, segmentPins[t][2]);
  digitalWrite(A4, segmentPins[t][3]);
  digitalWrite(A3, segmentPins[t][4]);
  digitalWrite(A2, segmentPins[t][5]);
  digitalWrite(A1, segmentPins[t][6]);
  digitalWrite(A0, segmentPins[t][7]);
  delay(1000);
  t = (t + 1) % 10;
}