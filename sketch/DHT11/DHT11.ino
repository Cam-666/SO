#include <DHT.h>
#define DHTPIN 13
#define DHTTYPE DHT11

DHT dht( DHTPIN,DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  float humidity= dht.readHumidity();
  float temperature= dht.readTemperature();
 
 if(isnan(humidity)  || isnan(temperature)){
  Serial.print("Error reading sensor data !!!");
  return;
 }
  Serial.print("Humidity:");
  Serial.println(humidity);

  Serial.print("temperature:");
  Serial.println(temperature);

  delay(2000);
  

}