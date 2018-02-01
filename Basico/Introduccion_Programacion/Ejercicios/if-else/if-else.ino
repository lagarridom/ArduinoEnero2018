int x = 1; 
int y = 2; 

int pinLed1 = 8; //Declaramos los pines
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); //Declaramos cada pin como salida
pinMode(pinLed2,OUTPUT); // pinMode( número de pin, OUTPUT o INPUT )

}

void loop() {

if(y > x){ 
  
  digitalWrite(pinLed1,HIGH); //Con esta función estamos mandando voltaje por los pines
  digitalWrite(pinLed2,LOW); //digitalWrite( número de pin, HIGH o LOW)
  
}else{//Se ejecuta si la condición es falsa

  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,HIGH);
  
}

}



