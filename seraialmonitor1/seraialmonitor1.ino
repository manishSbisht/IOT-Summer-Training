void setup() {
  pinMode(3,INPUT);//sensor
  pinMode(2,OUTPUT);//led
  Serial.begin(115200);

}

void loop() {
 
  int a=digitalRead(3);
  Serial.print("Data: ");
  Serial.println(a);
  
  if(a==HIGH){
    digitalWrite(2,HIGH);
    Serial.println("LED On ");
  }
   if(a==LOW){
    digitalWrite(2,LOW);
    Serial.println("LED Off ");
     
   }
    

}
