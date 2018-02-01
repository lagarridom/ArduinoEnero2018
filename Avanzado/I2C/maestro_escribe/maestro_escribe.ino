#include <Wire.h>

void setup() {
  Wire.begin(); 
}

byte x = 0;

void loop() {
  Wire.beginTransmission(6);
  Wire.write("x is ");        // mandamos 5 bytes
  Wire.write(x);              // mandamos 1 byte
  Wire.endTransmission();  

  x++;
  delay(500);
}

/* beginTransmission( numero de esclavo)
  Inicia una transmisión con un esclavo indicado
*/

/* endTransmission()
  Finaliza la transmisión con el esclavo con el que
  se había iniciado con beginTransmission
*/
