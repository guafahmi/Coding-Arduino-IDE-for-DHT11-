#include <dht11.h>
#define DHT11PIN 4
dht11 DHT11;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println();
  int chk = DHT11.read(DHT11PIN);
  Serial.print("Kelembapan Udara (%): ");
  Serial.println((float)DHT11.humidity, 2);
  Serial.print("Suhu (C): ");
  Serial.println((float)DHT11.temperature, 2);
  delay(2000);
}