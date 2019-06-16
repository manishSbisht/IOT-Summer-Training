void setup() {
    Serial.begin(9600);
  
  pinMode(A3,INPUT);//potentio

  pinMode(4,OUTPUT);//led
  pinMode(5,OUTPUT);//led
  pinMode(6,OUTPUT);//led

    pinMode(7,OUTPUT);//buzz
  
}

void loop() {
 
  int val=analogRead(A3);
  Serial.println(val);

  
  if(val<100){
    digitalWrite(7, LOW);
   digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  if(val>=100 && val<300){
    digitalWrite(7, LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
    
  if(val>=300 && val<600){
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    //digitalWrite(7, LOW);
    digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
  }
  if(val>=600 && val<900){
    digitalWrite(7, LOW);
        digitalWrite(4,HIGH);
        
        digitalWrite(5,HIGH);
  
        digitalWrite(6,HIGH);
  }

  if(val>900)
    digitalWrite(7, HIGH);
 
}
