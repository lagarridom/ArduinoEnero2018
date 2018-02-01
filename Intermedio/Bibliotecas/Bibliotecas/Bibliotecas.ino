//Incluimos la biblioteca recién creada
#include "Led.h"

int pinLed = LED_BUILTIN;

//Creamos un objeto para nuestro led
Led led1(pinLed);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  led1.parpadear(1000);
}
