#pragma once
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;

class Tablero {
private:
	Lista* Diag;
	string Display[8][8];
public:
	Tablero();
	~Tablero();
};

