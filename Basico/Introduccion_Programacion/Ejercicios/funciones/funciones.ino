
int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

void prenderSegundos (int x){//declaramos la funcióń
  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,HIGH);
  delay(x*1000);
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,LOW);
  delay(x*1000);
}

void loop() {

prenderSegundos(1);//llamamos a la función
                   // utiliamos a 1 como parámetro

}



