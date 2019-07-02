#include <ESP8266WiFi.h>        // import ESP8266WiFi libraries
#include <PubSubClient.h>       // import PubSubClient libraries
 
// Connect to the WiFi
const char* ssid = "Manish";               // ssid_name
const char* password = "manish@123";        // ssid_password
const char* mqtt_server = "192.168.43.253";   // Borker_IP_Address (IP of RPi3)
 
WiFiClient espClient;             // WiFiClient Object to Connect to WiFi
PubSubClient client(espClient);   // PubSubClient Object
 
const byte ledPin = 13;           // LED to D7 pin on NodeMCU
 
void callback(char* topic, byte* payload, unsigned int length) {    //Standard method
 Serial.print("Message arrived [");    // print on serial monitor
 Serial.print(topic);
 Serial.print("] ");
 for (int i=0;i<length;i++) {
  char receivedChar = (char)payload[i];
  Serial.print(receivedChar);
  if (receivedChar == '0')            
  // ESP8266 Huzzah outputs are "reversed"
    digitalWrite(ledPin, LOW);         // LED OFF
  if (receivedChar == '1')
    digitalWrite(ledPin, HIGH);        // LED ON
  }
  Serial.println();
}
 
 
void reconnect() {                      // function to reconnect to MQTT Broker (RPi3)
 // Loop until we're reconnected
 while (!client.connected()) {
 Serial.print("Attempting MQTT connection...");
 // Attempt to connect
 if (client.connect("ESP8266 Client")) {
  Serial.println("connected");
  Serial.println(WiFi.localIP());
  // ... and subscribe to topic
  client.subscribe("iot");             // topic_name
 } else 
 {
  Serial.print("failed, rc=");
  Serial.print(client.state());
  Serial.println(" try again in 5 seconds");
  // Wait 5 seconds before retrying
  delay(5000);
  }
 }
}
 
void setup()
{
 WiFi.begin(ssid, password);
 Serial.begin(9600);                  // set baud rate = 9600
 
 client.setServer(mqtt_server, 1883); // connect mqtt broker with port no. = 1883
 client.setCallback(callback);        // set the callback method 
 // callback function gets called automatically when a msg arrives to subscriber
 // callback function returns a pointer to the received msg
 
 pinMode(ledPin, OUTPUT);             // set pin 13 (D7) as Output
}
 
void loop()
{
 if (!client.connected()) {
  reconnect();       // call function to recconect to MQTT Broker 
 }
 client.loop();      // to process incoming msg and to maintain its connectio to broker
}
