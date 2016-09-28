#include "stdafx.h"
#include <iostream>
#include "Tablero.h"
using namespace std;

int main() {
	Tablero *board = new Tablero();
	// PRUEBA GITHUB
	//board->MostarListadeListas();
	board->preparaDisplay();
	board->mostrarDisplay();
	cin.get();
    return 0;
}