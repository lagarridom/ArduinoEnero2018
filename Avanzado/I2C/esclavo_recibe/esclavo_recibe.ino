#include <Wire.h>

void setup() {
  Wire.begin(6);               
  Wire.onReceive(receiveEvent); 
  Serial.begin(9600);           
}

void loop() {

}

// función que se va a ejecutar cuando se recibe algo del maestro
void receiveEvent(int howMany) {
  while (1 < Wire.available()) { // loop necesario para poder imprimir
    char c = Wire.read();       // primero los caracteres
    Serial.print(c);         
  }
  byte x = Wire.read();    // recibe el byte como un entero
  Serial.println(x);      // imprime el entero
}
