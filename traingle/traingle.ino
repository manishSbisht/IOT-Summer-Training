 void setup()
{
  for(int i=2;i<=5;i++){
    pinMode(i, OUTPUT);
  
  }
  
}

void loop()
{
  static int k=2;
  if(k>5){
      digitalWrite(2, LOW);  
        digitalWrite(3, LOW);  
          digitalWrite(4, LOW);  
            digitalWrite(5, LOW); 
            delay(500);
            k = 2 ;
    }
  
    digitalWrite(k, HIGH);  
    delay(1000);
    k++;
  
}
