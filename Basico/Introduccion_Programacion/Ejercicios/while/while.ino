int x = 5; 
int y = 0; 

int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

void loop() {

while(x > y){//el ciclo se va a repetir hasta que sea falso

  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,LOW);
  delay(500);
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,HIGH);
  delay(500);
  x--;// x = x - 1

  }

digitalWrite(pinLed1,LOW);
digitalWrite(pinLed2,LOW);

}



