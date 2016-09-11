#pragma once
#include <iostream>
#include "Casilla.h"
using namespace std;

class Tablero {
private:
	Casilla *tabla[8][8];
public:
	Tablero();
	Casilla * getCasilla(int, int);
	void mostrar();
	~Tablero();
};

