void setup() {
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  if (digitalRead(1) == LOW) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
  if (digitalRead(2) == LOW) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  if (digitalRead(3) == LOW) {
    digitalWrite(A5, HIGH);
  } else {
    digitalWrite(A5, LOW);
  }
  if (digitalRead(4) == LOW) {
    digitalWrite(A4, HIGH);
  } else {
    digitalWrite(A4, LOW);
  }
  if (digitalRead(5) == LOW) {
    digitalWrite(A3, HIGH);
  } else {
    digitalWrite(A3, LOW);
  }
  if (digitalRead(6) == LOW) {
    digitalWrite(A2, HIGH);
  } else {
    digitalWrite(A2, LOW);
  }
  if (digitalRead(7) == LOW) {
    digitalWrite(A1, HIGH);
  } else {
    digitalWrite(A1, LOW);
  }
  if (digitalRead(8) == LOW) {
    digitalWrite(A0, HIGH);
  } else {
    digitalWrite(A0, LOW);
  }
}