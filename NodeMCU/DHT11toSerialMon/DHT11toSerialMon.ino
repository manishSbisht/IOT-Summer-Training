#include<DHT.h>

#define DHTPIN D1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(115200);
  Serial.println("DHT test!!");

}

void loop() {
  delay(2000);
  float h=dht.readHumidity();
  
  float f=dht.readTemperature(true);

  if(isnan(h)||isnan(f)){
    Serial.println("Failed to read from sensor.!");
    return ;  
  }

  Serial.print("\n\nHumidity: ");
  Serial.print(h);
  Serial.print("\nTemperature: ");
  Serial.print((f-32)*5/9);
  Serial.print("*C");
  

}
