#pragma once
#include "Ficha.h"
#include <windows.h>
using namespace std;

class Casilla {
private:
	Ficha *ficha;
	Casilla *vecinos[4];
public:
	Casilla();
	Casilla(Ficha *, Casilla *[4]);
	void setFicha(Ficha *);
	void setVecinos(Casilla *[4]);
	Ficha * getFicha();
	Casilla * getVecinos();
	string toString();
	~Casilla();
	static void colorText(int);
	static const int NOROESTE = 0;
	static const int NORESTE = 1;
	static const int SURESTE = 2;
	static const int SUROESTE = 3;
};

