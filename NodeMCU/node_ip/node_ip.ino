#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

char* ssid="IOT";
char* password="mountain@123";

void setup() {
  WiFi.begin(ssid, password);
  Serial.begin(115200);

  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");  
    delay(500);
  }
  
  Serial.print("");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

}

void loop() {



  //Serial.println(a);

}
