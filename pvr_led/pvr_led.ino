int count = 0;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(3,INPUT);//ir1


  pinMode(5,OUTPUT);//1
  pinMode(6,OUTPUT);//2
  pinMode(7,OUTPUT);//3
  pinMode(8,OUTPUT);//4

}

void loop() {

     int A = digitalRead(3);
  Serial.print(A);

/*
   if(A == HIGH)
    count++;

    int i = 0;
    int count2=count;
    while (count2 > 0) {
      binaryNum[i] = count2 % 2;
      count2 = count2 / 2;
      i++;
    }


   for(int j=3;j>=0;j++){
      if(binaryNum[j]==0)
       digitalWrite(j+5,LOW);//1
      if(binaryNum[j]==1)
       digitalWrite(j+5,HIGH);//1
    }

}//loop
