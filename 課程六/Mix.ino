#include <LiquidCrystal_I2C.h> 
#include "DHT.h"

LiquidCrystal_I2C lcd(0x27, 16, 2); 
DHT dht(3, DHT22);

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  String output_1 = "Humidity:" + String(h) + "%";
  String output_2 = "Temperature:" + String(t) + "c";
  lcd.setCursor(0, 0);
  lcd.print(output_1);
  lcd.setCursor(0, 1);
  lcd.print(output_2);
  lcd.clear();
}