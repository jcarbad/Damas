#include "stdafx.h"
#include <iostream>
#include "Partida.h"
using namespace std;

int main() {
	Partida *match = new Partida();
	match->mostrarDisplay();
	system("pause");
	system("cls");
	match->colocarFichaEn(0, 0, new Ficha(BLANCO));
	match->colocarFichaEn(1, 1, new Ficha(NEGRO));
	match->colocarFichaEn(2, 2, new Ficha(BLANCO));
	match->colocarFichaEn(3, 3, new Ficha(NEGRO));
	match->colocarFichaEn(4, 4, new Ficha(BLANCO));
	match->colocarFichaEn(5, 5, new Ficha(NEGRO));
	match->colocarFichaEn(6, 6, new Ficha(BLANCO));
	match->colocarFichaEn(7, 7, new Ficha(NEGRO));
	match->mostrarDisplay();
	cin.get();
    return 0;
}