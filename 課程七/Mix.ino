void setup()
{
  pinMode(0, INPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int result = digitalRead(0);
  if (result == 1) {
    tone(8, 30);
    Serial.println("有壞人！");
    delay(1000);
  } else {
    noTone(8);
    delay(1000);
  }
}