void setup() {
  // put your setup code here, to run once:

for(int i=2;i<=8;i++)
   pinMode(i,OUTPUT);

}

void loop() {
for(int i=2;i<=8;i++)

if(i!=5)
  digitalWrite(i,HIGH);
  

}
