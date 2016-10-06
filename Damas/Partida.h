#pragma once
#include "Tablero.h"
#include "Jugador.h"
using namespace std;
class Partida {
private:
	Tablero *tabla;
	Jugador *JNegro, *JBlanco;
public:
	Partida();
	~Partida();
};

