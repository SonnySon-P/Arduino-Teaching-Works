int buttonState = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(9, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(9) == LOW) {
    if (buttonState == 0) {
      buttonState = 1;
    } else {
      buttonState = 0;
    }
  }

  if (buttonState == 1) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

  delay(100);
}