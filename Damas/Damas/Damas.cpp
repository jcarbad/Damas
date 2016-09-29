#include "stdafx.h"
#include <iostream>
#include "Tablero.h"
using namespace std;

int main() {
	Tablero *board = new Tablero();
	board->MostarListadeListas();
	cout << "\n\n Buscando casilla (5, 7)....";
	Casilla *F = board->buscaUnaCasilla(5,7);
	F ? cout << "\n\tEncontrada!" : cout << "\n\tNo se encontro (NULL)" ;
	///*board->preparaDisplay();
	//board->mostrarDisplay();*/
	cin.get();
    return 0;
}