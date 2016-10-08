#include "stdafx.h"
#include <iostream>
#include "Juego.h"

using namespace std;

int main() {
	Juego *juego = new Juego();
	juego->bienvenida();
	system("pause");
	return 0;
}