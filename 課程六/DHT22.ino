#include "DHT.h"
DHT dht(3, DHT22);

void setup()
{
  Serial.begin(9600);
  Serial.println("DHT22溫濕度感測器!");
  dht.begin();
}

void loop()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print("濕度: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("攝氏溫度: ");
  Serial.print(t);
  Serial.println(" C");
  delay(1000);
}
