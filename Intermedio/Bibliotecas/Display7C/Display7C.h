#ifndef DISP7C_H
#define DISP7C_H

#include "arduino.h"

class Display7C {
	private:
		int _a, _b, _c, _d, _e, _f, _g, _punto;
	public:
		Display7C(int a, int b, int c, int d, int e, int f, int g, int punto);
		void set(int a, int b, int c, int d, int e, int f, int g, int punto);
		void encender(int segmento);
		void apagar(int segmento);
		void mostrar(char digito);
};

#endif