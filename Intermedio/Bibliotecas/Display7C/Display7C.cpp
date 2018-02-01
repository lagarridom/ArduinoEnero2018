#include "Display7C.h"

Display7C::Display7C(int a, int b, int c, int d, int e, int f, int g, int punto) {
	pinMode(a,OUTPUT);
	pinMode(b,OUTPUT);
	pinMode(c,OUTPUT);
	pinMode(d,OUTPUT);
	pinMode(e,OUTPUT);
	pinMode(f,OUTPUT);
	pinMode(g,OUTPUT);
	pinMode(punto,OUTPUT);
	_a = a;
	_b = b;
	_c = c;
	_d = d;
	_e = e;
	_f = f;
	_g = g;
	_punto = punto;
}

void Display7C::set(int a, int b, int c, int d, int e, int f, int g, int punto) {
	digitalWrite(_a,a);
	digitalWrite(_b,b);
	digitalWrite(_c,c);
	digitalWrite(_d,d);
	digitalWrite(_e,e);
	digitalWrite(_f,f);
	digitalWrite(_g,g);
	digitalWrite(_punto,punto);
}

void Display7C::mostrar(char digito) {
	switch(digito) {
		case '1':
			set(0,1,1,0,0,0,0,0);
		break;
		case '2':
			set(1,1,0,1,1,0,1,0);
		break;
	}
}