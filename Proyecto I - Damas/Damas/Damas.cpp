#include "stdafx.h"
#include <iostream>
#include "Juego.h"

using namespace std;

/*
	# Damas Inglesas
	===================
	Juego de damas inglesas en C++. VS Express 2015.
	----------------------------
	*Proyecto II: Damas inglesas en CLI.*
	Estructuras de Datos. II-2015

	Integrantes:
	-Joan Carballo Badilla (Grupo 10 AM)
	-Sergio Vargas Ure�a (Grupo 1 PM)

	**NOTA**: Si no se muestran bien los t�tulos en
	 la consola, redimensionar la pantalla del cmd.
*/

int main() {
	Juego *juego = new Juego();
	juego->bienvenida();
	system("pause");
	return 0;
}