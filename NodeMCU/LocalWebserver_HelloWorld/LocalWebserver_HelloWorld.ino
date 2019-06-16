#include<ESP8266WiFi.h>
#include<ESP8266WebServer.h>

ESP8266WebServer server;

char* ssid="As";
char* password="12345678";

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

  server.on("/",[](){server.send(200,"text/plain","hello world");});
  server.begin();
}

void loop() {

server.handleClient();

  
  
}
