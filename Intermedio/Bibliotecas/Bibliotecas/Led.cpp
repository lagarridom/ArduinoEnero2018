#include "Led.h"

//Definir constructor
Led::Led(int pin) {
	pinMode(pin,OUTPUT);
	_pin = pin;
	//this->pin = pin; //Para la variable pin (sin guión bajo)
}

void Led::encender() {
	digitalWrite(_pin,HIGH);
}

void Led::apagar() {
	digitalWrite(_pin,LOW);
}

void Led::parpadear(int tiempo) {
	digitalWrite(_pin,HIGH);
	delay(tiempo);
	digitalWrite(_pin,LOW);
	delay(tiempo);
}