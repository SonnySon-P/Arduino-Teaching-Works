#include <IRremote.h>

int buttonValue = 0;
IRrecv receiver(12);
int pinList[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  Serial.begin(9600);
  receiver.enableIRIn();
  for (int i = 0; i < 10; i++) {
    pinMode(pinList[i], OUTPUT);
  }
}

void loop() {
  if (receiver.decode()){
    translateIR();
    receiver.resume();
  }
}

void translateIR() {
  Serial.print("你目前按下的按鈕是：");
  buttonValue = receiver.decodedIRData.command;
  if (buttonValue == 48) {
    digitalWrite(1, HIGH);
    Serial.println(1);
    delay(300);
    digitalWrite(1, LOW);
  }
  if (buttonValue == 24) {
    digitalWrite(2, HIGH);
    Serial.println(2);
    delay(300);
    digitalWrite(2, LOW);
  }
  if (buttonValue == 122) {
    digitalWrite(3, HIGH);
    Serial.println(3);
    delay(300);
    digitalWrite(3, LOW);
  }
  if (buttonValue == 16) {
    digitalWrite(4, HIGH);
    Serial.println(4);
    delay(300);
    digitalWrite(4, LOW);
  }
  if (buttonValue == 56) {
    digitalWrite(5, HIGH);
    Serial.println(5);
    delay(300);
    digitalWrite(5, LOW);
  }
  if (buttonValue == 90) {
    digitalWrite(6, HIGH);
    Serial.println(6);
    delay(300);
    digitalWrite(6, LOW);
  }
  if (buttonValue == 66) {
    digitalWrite(7, HIGH);
    Serial.println(7);
    delay(300);
    digitalWrite(7, LOW);
  }
  if (buttonValue == 74) {
    digitalWrite(8, HIGH);
    Serial.println(8);
    delay(300);
    digitalWrite(8, LOW);
  }
  if (buttonValue == 82) {
    digitalWrite(9, HIGH);
    Serial.println(9);
    delay(300);
    digitalWrite(9, LOW);
  }
}