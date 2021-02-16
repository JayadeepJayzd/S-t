#include <DHT.h>
#include <DHT_U.h>
#define dht_1 2
#define DHTTYPE DHT11
DHT dht(dht_1 , DHTTYPE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float humid = dht.readHumidity();
  float temp = dht.readTemperature();

  Serial.println("humidity= ");
  Serial.println(humid);
  Serial.println("temperature = ");
  Serial.println(temp);
  Serial.println("degree centigrade");
}
