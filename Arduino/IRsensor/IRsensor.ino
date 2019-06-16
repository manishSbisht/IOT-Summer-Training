int i=2;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);//led pin
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,INPUT);
Serial.begin(9600);//Function for serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("The input is:");
Serial.println(digitalRead(6));
delay(500);
if(digitalRead(6))//This means that the IR sensor has sensed something
{
digitalWrite(i,HIGH);
Serial.print("Led ");
Serial.print(i-1);
Serial.println(" ON");
delay(300);
digitalWrite(i,LOW);
Serial.print("Led ");
Serial.print(i-1);
Serial.println(" OFF");
delay(300);
}
i=i+1;
if(i==6)
i=2;}
