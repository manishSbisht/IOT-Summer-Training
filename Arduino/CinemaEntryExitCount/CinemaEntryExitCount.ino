int count=0;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);//led pin
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(10,INPUT);//Entry sensor
pinMode(11,INPUT);//Exit sensor
pinMode(8,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
if(digitalRead(10))
{count=count+1;
if(count>15)
  count=15;
Serial.println("Entry");
digitalWrite(8,HIGH);
delay(200);
digitalWrite(8,LOW);}
if(digitalRead(11))
{count=count-1;
  Serial.println("Exit");
  if(count<0)
  count=0;
digitalWrite(8,HIGH);
delay(200);
digitalWrite(8,LOW);
}

switch(count)
{
  case 0:
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  Serial.println(0);
  break;
  case 1:
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  Serial.println(1);
  break;
  case 2:
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  Serial.println(2);
  break;
  case 3:
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  Serial.println(3);
  break;
  case 4:
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  Serial.println(4);
  break;
  case 5:
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  Serial.println(5);
  break;
  case 6:
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  Serial.println(6);
  break;
  case 7:
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  Serial.println(7);
  break;
  case 8:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  Serial.println(8);
  break;
  case 9:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  Serial.println(9);
  break;
  case 10:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  Serial.println(10);
  break;
  case 11:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  Serial.println(11);
  break;
  case 12:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  Serial.println(12);
  break;
  case 13:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  Serial.println(13);
  break;
  case 14:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  Serial.println(14);
  break;
  case 15:
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  Serial.println(15);
  delay(700);
  break;
}

}
