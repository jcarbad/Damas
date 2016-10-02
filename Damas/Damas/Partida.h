#pragma once
#include "Tablero.h"
#include "Jugador.h"
using namespace std;
class Partida {
private:
	Tablero *tabla;
	Jugador *JNegro, *JBlanco;
	string Display[17][17];
public:
	Partida();
	~Partida();
	bool colocarFichaEn(int x, int y, Ficha*);
	void mostrarDisplay();
	void preparaDisplay();
};

