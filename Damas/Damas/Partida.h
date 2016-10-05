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
	Jugador* getJNegro();
	Jugador* getJBlanco();
	bool colocarFichaEn(int x, int y, Ficha*);
	void mostrarDisplay();
	void preparaDisplay();
	Tablero* getTabla();
	bool comer(int x, int y);
	bool moverFicha(int x, int y, int direccion);
	void colocacionInicialDeFichas();
	bool hacerMovimiento(int, int, int, int); // Hibrido de metodos.
	bool seTermino();
};

