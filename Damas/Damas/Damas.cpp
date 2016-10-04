#include "stdafx.h"
#include <iostream>
#include "Partida.h"
using namespace std;

int main() {
	Partida *match = new Partida();
	//match->colocarFichaEn(0, 0, new Ficha(BLANCO));
	//match->mostrarDisplay();
	//	system("pause");
	//system("cls");
	//match->moverFicha(7,1,2);
	//match->mostrarDisplay();
	match->colocacionInicialDeFichas();
	match->mostrarDisplay();
	cin.get();
    return 0;
}