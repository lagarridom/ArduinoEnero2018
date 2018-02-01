
int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

void loop() {

digitalWrite(pinLed1,HIGH);
digitalWrite(pinLed2,HIGH);
delay(1000);//enciende los leds y espera un segundo
digitalWrite(pinLed1,LOW);
digitalWrite(pinLed2,LOW);
delay(1000);//apaga los leds y espera un segundo

}



