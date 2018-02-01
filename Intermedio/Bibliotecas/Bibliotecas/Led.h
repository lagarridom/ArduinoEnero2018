//Evita duplicados de variables
#ifndef LED_H
#define LED_H

//Incluye las funciones de Arduino
#include "arduino.h"

class Led {
	private:
		//Atributos de nuestro componente
		int _pin;
	public:
		//Constructor
		Led(int pin);
		//Prototipos de funciones/métodos
		void encender();
		void apagar();
		void parpadear(int tiempo);
};

#endif