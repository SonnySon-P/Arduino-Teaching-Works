void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  int xVal = analogRead(A1);
  int yVal = analogRead(A0);
  int zVal = analogRead(A2);

  if (600 < xVal) {
    digitalWrite(0, HIGH);
  } else if (xVal < 500) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(0, LOW);
    digitalWrite(2, LOW);
  }

  if (600 < yVal) {
    digitalWrite(1, HIGH);
  } else if (yVal < 500) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(1, LOW);
    digitalWrite(3, LOW);
  } 

  if (zVal == 0) {     
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}