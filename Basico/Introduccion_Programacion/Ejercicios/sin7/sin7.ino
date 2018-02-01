int n = 0;
int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}
  

void loop() {

n++;
if(n%7 == 0){
  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,LOW);
}else{
  if((n-7)%10 == 0){
    digitalWrite(pinLed1,HIGH);
    digitalWrite(pinLed2,LOW);
  }else{
    digitalWrite(pinLed1,LOW);
    digitalWrite(pinLed2,HIGH);
  }
}
delay(1000);

digitalWrite(pinLed1,LOW);
digitalWrite(pinLed2,LOW);
delay(1000);

}

