#include "DHT.h"
#define DHTTYPE DHT11  // Analog Pin sensor is connected to
 
DHT dht(D8,DHTTYPE); 
void setup(void)
{

  dht.begin();
  Serial.begin(115200);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}//end "setup()"

void loop() {

  float h =dht.readHumidity();
  float t =dht.readTemperature(true);

  Serial.print("Current Humidity = ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(800);
}
