int x = 5; 

int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

void loop() {

for( x ; x > 0 ; x-- ){//for(variable ; condición ; cambio de la condición)

  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,HIGH);
  delay(500);
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,LOW);
  delay(500);
  
}

}



