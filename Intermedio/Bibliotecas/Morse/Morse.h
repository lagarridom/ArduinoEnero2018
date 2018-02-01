#ifndef MORSE_H
#define MORSE_H

#include "arduino.h"

class Morse {
	private:
		int _pin;
	public:
		Morse(int pin);
		void punto();
		void linea();
		void letra(char c);
		void mensaje(String mensaje);
};

#endif