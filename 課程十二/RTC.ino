#include <TM1637Display.h>
#include <RTClib.h>

TM1637Display display(4, 5);
RTC_DS1307 rtc;

void setup() {
  display.setBrightness(5);
  rtc.begin();
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  Serial.begin(9600);
}

void loop() {
  DateTime now = rtc.now();
  Serial.print("RTC Date Time: ");
  Serial.print(now.year());
  Serial.print("/");
  Serial.print(now.month());
  Serial.print("/");
  Serial.print(now.day());
  Serial.print(" ");
  Serial.print(now.hour());
  Serial.print(":");
  Serial.print(now.minute());
  Serial.print(":");
  Serial.println(now.second());
  int timeToDisplay = now.hour() * 100 + now.minute();
  display.showNumberDecEx(timeToDisplay, 0x80, true);
  delay(500);
  display.showNumberDecEx(timeToDisplay, 0x00, true);
  delay(500);
}