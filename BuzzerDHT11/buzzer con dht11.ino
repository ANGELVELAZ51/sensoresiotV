#include <DHT.h>


#define led 12
#define TEMP_PIN 34


DHT sensor(TEMP_PIN, DHT11);

void setup() {
  pinMode(led, OUTPUT);
  sensor.begin();
}

void loop() {
  float temperature = sensor.readTemperature();
  
  if (temperature > 33) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
  }
}
