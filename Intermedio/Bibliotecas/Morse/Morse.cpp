#include "Morse.h"

Morse::Morse(int pin) {
	pinMode(pin,OUTPUT);
	_pin = pin;
}

void Morse::punto() {
	digitalWrite(_pin,HIGH);
	delay(50);
	digitalWrite(_pin,LOW);
	delay(50);
}

void Morse::linea() {
	digitalWrite(_pin,HIGH);
	delay(200);
	digitalWrite(_pin,LOW);
	delay(200);
}

void Morse::letra(char letra) {
	switch(letra) {
		case 'S':
		case 's':
			punto(); punto(); punto();
			delay(25);
		break;
		case 'O':
		case 'o':
			linea(); linea(); linea();
			delay(25);
		break;
	}
}

void Morse::mensaje(String mensaje) {
	//mensaje.toLowerCase(); minusculas
	//mensaje.toUpperCase(); mayusculas
	for(int i = 0; i < mensaje.length(); i++) {
		letra(mensaje.charAt(i));
	}
}