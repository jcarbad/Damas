#pragma once
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;

class Tablero {
private:
	Lista* Diag;
	Lista* listVector[8];
	string Display[17][17];
public:
	Tablero();
	void preparaDisplay();
	void MostarListadeListas();
	void mostrarDisplay();
	~Tablero();
};

