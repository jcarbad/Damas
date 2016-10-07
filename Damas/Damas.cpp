#include "stdafx.h"
#include <iostream>
#include "Juego.h"

using namespace std;

int main() {
	Juego *juego = new Juego();
	juego->bienvenida();

	/*Partida *p = new Partida();
	p->colocarFichaEn(1, 1, new Ficha(NEGRO, false));
	p->colocarFichaEn(2, 0, new Ficha(BLANCO, false));
	p->mostrarDisplay();
	cin.get();
	system("cls");
	(p->hacerMovimiento(1, 1, SO, NEGRO)) ? cout<<"verdadero": cout<<"No se hizo el movimiento";
	p->mostrarDisplay();*/
	cin.get();
	return 0;
}