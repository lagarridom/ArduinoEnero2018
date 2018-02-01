#include <Wire.h>

void setup() {
  Wire.begin(8);                // Nos unimos al bus con la dirección 8
  Wire.onRequest(requestEvent); // Wire.onRequest(que vamos a hacer) Cuando nos haga un pedido, que vamos a hacer
}

void loop() {
  
}
//Funcion que define que vamos a hacer cuando el maestro 
//nos haga un pedido
void requestEvent() {
  Wire.write("hola "); // responder con un mensaje de 5 bytes
  // es lo que espera el maestro
}

/* write()
  Escribe datos en respuesta a un pedido
*/
