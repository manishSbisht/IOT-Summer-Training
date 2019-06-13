void setup() {
 
 pinMode(2,INPUT);//sensor
 Serial.begin(9600);
 for(int i=12;i<=15;i++)//lEDs
    pinMode(i, OUTPUT);

  
}

void loop() {
  int a =digitalRead(2);
  Serial.println(a);
  if(a==HIGH){
     for(int i=12;i<=15;i++)
       digitalWrite(i, HIGH);  
   }
 else{
  for(int i=12;i<=15;i++)
       digitalWrite(i, LOW);  
  
  }
}
    
  
