#pragma once
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;
/*
	Diag: Es la lista "principal", que contiene las casillas de la diagonal, en sentido NO->SE.
	ListVector[]: Contiene todas las sub-listas que cruzan la diagonal en sentido SO->NE.
	Display[][]: Matriz de strings con el único fin de mostrar estados.
*/

class Tablero {
private:
	Lista* Diag;
	Lista* ListVector[8];
	string Display[17][17];
public:
	Tablero();
	void preparaDisplay();
	Casilla* buscaUnaCasilla(int, int);
	void conectarFilaDeVecinos(int, int);
	void conectarTodos();
	void MostarListadeListas();
	void mostrarDisplay();
	bool comer(int, int);
	bool moverNO(int,int);
	~Tablero();
};

