#include "Display7C.h"

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinPunto = 9;

Display7C display1(pinA,pinB,pinC,pinD,pinE,pinF,pinG,pinPunto);
//Display7C display1(2,3,4,5,6,7,8,9);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  display1.mostrar('2');
}
