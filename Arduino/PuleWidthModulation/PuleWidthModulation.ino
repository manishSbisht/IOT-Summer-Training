void setup() {
  // put your setup code here, to run onc
}

void loop() {
  // put your main code here, to run repeatedly:
int i=0;
for(i=0;i<=255;i+=16)
{
  analogWrite(9,i);
  delay(500);
}
/*analogWrite(9,64);//25% Duty Cycle
delay(1000);
analogWrite(9,127);//50% Duty Cycle
delay(1000);
analogWrite(9,255);//100% Duty Cycle
delay(1000);
analogWrite(9,0);//0% Duty Cycle
delay(1000);*/

}
