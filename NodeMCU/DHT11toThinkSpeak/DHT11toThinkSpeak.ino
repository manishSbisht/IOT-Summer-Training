//ESP8266 Interfaced with DHT11 Sensor Data to THINGSPEAK
#include <DHT.h> //  DHT.h library
#include <ESP8266WiFi.h> // ESP8266WiFi.h library

#define DHTPIN D4 //variable storing D4
#define DHTTYPE  DHT11 

const char* ssid     = "SSid";
const char* password = "Password";
const char* host = "api.thingspeak.com";
const char* writeAPIKey = "writeapikeyfromThinkspeak";

DHT dht(DHTPIN, DHTTYPE); //Intialization of DHT11

void setup() {
  // Initialize sensor
 Serial.begin(115200); //Intization of Serial Communication
 dht.begin(); //To start the DHT11 Sensor
 delay(1000);

  //  Connect to WiFi network
  WiFi.begin(ssid, password); //Connecting Device to WiFi
  while (WiFi.status() != WL_CONNECTED) { 
    delay(500);
  }
}

void loop() {
 float humidity = dht.readHumidity();  //Storing the Humidity
 float temperature = dht.readTemperature(); // Storing the Temperature
 Serial.print("Humidity : ");
 Serial.println(humidity);
 Serial.print("Temperature : ");
 Serial.println(temperature);
  if (isnan(humidity) || isnan(temperature)) {
    return;
  }

// make TCP connections ( Transmission Control Protocol/Internet Protocol )
  WiFiClient client;
  const int httpPort = 80; 
  if (!client.connect(host, httpPort)) {      // connect () - Connects to a specified IP/Url address and port. The return value indicates success or failure
    return;     //Returns an int (1,-1,-2,-3,-4) indicating connection status : SUCCESS 1/TIMED_OUT -1/INVALID_SERVER -2/TRUNCATED -3/INVALID_RESPONSE -4
  }

  String url = "/update?key=";
  url+=writeAPIKey;
  url+="&field1=";        //4 different fields it becomes like this : updateThingSpeak("field1="+temp+"&field2="+humid+"&field3="+pres+"&field4="+temp2);
  url+=String(humidity);  // Constructs an instance of the String class / String s = String(13): return "13";
                          // String s = String(13, HEX): return String "D", which is the hexadecimal representation of the decimal value 13
                         //String s = String(13, BIN) : return String "1101", which is the binary representation of 13
  url+="&field2=";
  url+=String(temperature);
  url+="\r\n";
  
  // Request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +     //HTTP 1.1 is the latest version of Hypertext Transfer Protocol (HTTP)and provides faster delivery to web pages and reduces Web traffic/HTTP 1.1 is supported by the latest Web servers and browsers/ which runs on top of the Internet's TCP(Transmission Control Protocol)/IP suite of protocols
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
    delay(1000);
}
