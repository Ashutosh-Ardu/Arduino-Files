/*
 Link : https://create.arduino.cc/projecthub/SAnwandter1/programming-8x8-led-matrix-23475a
 */
#include <dht.h>

#define Spin A0

dht DHT;

void setup(){
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & Temperature Sensor\n\n");
  delay(1000);
}

void loop(){
  DHT.read11(Spin);
  Serial.print("Current Humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("% ");
  Serial.print(" Temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("C ");
  delay(5000);
}
