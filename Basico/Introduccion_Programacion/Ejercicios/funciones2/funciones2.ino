int r;
int pinLed1 = 8; 
int pinLed2 = 9; 

void setup() {
  
pinMode(pinLed1,OUTPUT); 
pinMode(pinLed2,OUTPUT); 

}

int sumaNumeros (int x, int y){

  return x+y; // la función va a regresar la suma 
              // de los parámetros
  
}

void loop() {

  r = sumaNumeros(1, 2); //r = 3
  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,HIGH);
  delay(r*1000); // va a esperar 3 segundos
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,LOW);
  delay(r*1000); // va a esperar 3 segundos

}



