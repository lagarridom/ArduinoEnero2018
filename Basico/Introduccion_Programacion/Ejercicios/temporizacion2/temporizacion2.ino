
int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

void loop() {

digitalWrite(pinLed1,HIGH);
digitalWrite(pinLed2,HIGH);
delay(millis());//enciende los leds y espera
                //la cantidad de tiempo transcurrido
digitalWrite(pinLed1,LOW);
digitalWrite(pinLed2,LOW);
delay(millis());//apaga los leds y espera
                //la cantidad de tiempo transcurrido

}



