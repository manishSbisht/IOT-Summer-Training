void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int a=analogRead(A0);
Serial.println(a);
if(a<=300)
{
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
}
if(a>300&&a<=600)
{
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
  
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
}
if(a>600&&a<=900)
{
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW); 
 
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
delay(200);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
delay(200);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);

}
if(a>900&&a<=1023)
{
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);  

digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
digitalWrite(7,HIGH);
delay(200);
digitalWrite(7,LOW);
}
exit(1);
}
