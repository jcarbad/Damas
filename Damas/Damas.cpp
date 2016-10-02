#include "stdafx.h"
#include <iostream>
#include "Tablero.h"
using namespace std;

int main() {
	Tablero *board = new Tablero();
	board->MostarListadeListas();
	// Este es el que hace el brete de conectarlos  board->conectarTodos();
	// Ya se llama en el constructor

	board->preparaDisplay();
	board->mostrarDisplay();
	cin.get();
    return 0;
}