#include <Wire.h>

void setup() {
  Wire.begin();        // Nos unimos al bus
  Serial.begin(9600);  // Iniciamos monitor Serial
}

void loop() {
  Wire.requestFrom(8, 5);    //Pedimos 5 bits al esclavo #8

  while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
    Serial.print(c);         // print the character
  }

  delay(500);
}

/* Wire.begin() 
 Inicia un bus y se une a el como esclavo o como maestro
 Esta se llama solo una vez y dependiendo de como se llame
 es si se inicia como esclavo o como maestro

 Si se incluye un parametro (direccion), se inicia como 
 esclavo, de lo contrario, se inicia como maestro
*/

/* Wire.requestFrom()
  Usado por el maestro para pedir cierta cantidad de bits
  del esclavo.
  Estos bytes se reciben con available() y read()
 */

/* Wire.available()
  Regresa el número de bytes disponibles con read()
*/

/* Wire.read()
  Lee un byte que fué transmitido por el esclavo al maestro
  
*/

