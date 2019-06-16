long duration,cm,inches;
void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);//trigger pin
pinMode(9,INPUT);//echo pin
pinMode(7,OUTPUT);//buzzer
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,LOW);
delayMicroseconds(5);
digitalWrite(8,HIGH);
delayMicroseconds(10);
digitalWrite(8,LOW);
duration=pulseIn(9,HIGH);
cm=(duration/2)/29.1;
inches=(duration/2)/74;
Serial.print("The distance in cm:");
Serial.println(cm);
//delay(500);
Serial.print("The distance in inches:");
Serial.println(inches);
//delay(500);
if(cm<10)
digitalWrite(7,HIGH);
else
digitalWrite(7,LOW);

}
