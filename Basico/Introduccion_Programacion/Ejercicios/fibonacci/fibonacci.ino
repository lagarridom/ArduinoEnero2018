int n = 0;
int c = 0;
int a = 0;
int b = 1;
int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}
  
void prenderled(int veces){

  for( int i = 0; i < veces; i++){
    digitalWrite(pinLed1,HIGH);
    digitalWrite(pinLed2,HIGH);
    delay(200);
    digitalWrite(pinLed1,LOW);
    digitalWrite(pinLed2,LOW);
    delay(200);
  }
  
}

void loop() {

  if( n == 0){

    prenderled(0);
    delay(1000);
    prenderled(1);
    delay(1000);
  }
  
c = a;
a = b;
b = c + b;

prenderled(b);
delay(1000);
n++;
}

