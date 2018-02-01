#include "Morse.h"

Morse morse1(13);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  //morse1.letra('S');
  //morse1.letra('O');
  //morse1.letra('S');
  morse1.mensaje("SOS");
  delay(1000);
}

