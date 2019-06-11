void setup() {
  pinMode(3,INPUT);//sensor
  pinMode(2,OUTPUT);//led

}

void loop() {
  int a=digitalRead(3);
  if(a==HIGH){
    digitalWrite(2,HIGH);
    
  }
   if(a==LOW){
    digitalWrite(2,LOW);
     
   }
    

}
