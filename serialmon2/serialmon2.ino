 int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT);//ir1
  //pinMode(4,INPUT);//ir2
  
  pinMode(5,OUTPUT);//1
  pinMode(6,OUTPUT);//2
  pinMode(7,OUTPUT);//3
  pinMode(8,OUTPUT);//4
 
}

void loop() {
  if(count>15)
count=0;
 
  int* led_status=decToBinary(count);

  for(int j=0;j<4;j++){
      if(j==0)
       digitalWrite(j+5,LOW);//1
      if(j==1)
       digitalWrite(j+5,HIGH);//1
  }
  
  int A = digitalRead(3);
  //int B =digitalRead(4);
  
  if(A == HIGH){
    count++;
    delay(1000);
  }
 // if(B == HIGH){
  //  count++;
  //  delay(1000);
 // }
 
}

int * decToBinary(int n) 
  { 
   // array to store binary number 
    int binaryNum[4]; 
  if(n==0)
  {
    for(int k=0;k<4;k++)
       binaryNum[k] = 0;
    }
    
    int i = 0; 
    while (n > 0) { 
  
      // storing remainder in binary array 
      binaryNum[i] = n % 2; 
      n = n / 2; 
      i++; 
    } 

    
  
    return binaryNum;//aray
     
 }
