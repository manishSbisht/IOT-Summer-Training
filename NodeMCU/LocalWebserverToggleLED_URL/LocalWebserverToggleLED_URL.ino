#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>
uint8_t pin_led=D1;
char* ssid="As";
char* password="12345678";

ESP8266WebServer server;


void setup() {
  
  pinMode(pin_led, OUTPUT);
  WiFi.begin(ssid, password);
 
  
  
  Serial.begin(115200);
  while(WiFi.status()!=WL_CONNECTED){
    Serial.print(".");  
    delay(500);
  }
  
  Serial.print("");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());

  server.on("/",[](){server.send(200,"text/plain","hello world");});
  server.on("/toggley",toggleLED);
  server.begin();
}

void loop() {
  server.handleClient();
}

void toggleLED(){
  digitalWrite(pin_led, !digitalRead(pin_led));
  server.send(204, "");
  }
