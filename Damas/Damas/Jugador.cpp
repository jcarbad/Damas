#include "stdafx.h"
#include "Jugador.h"

Jugador::Jugador(){
	color = NEGRO;
	for (int i = 0; i < 12; i++)
		fichas[i] = new Ficha(color, false);
	cantActivas = 12;
}

Jugador::Jugador(int c) {
	color = c;
	for (int i = 0; i < 12; i++)
		fichas[i] = new Ficha(color, false);
	cantActivas = 12;
}

int Jugador::getColor() {
	return color;
}

int Jugador::getCantActivas() {
	return cantActivas;
}

bool Jugador::yaPerdio() {
	return cantActivas == 0;
}

bool Jugador::perderFicha() {
	if (yaPerdio() == true)
		return false;
	else {
		fichas[cantActivas - 1] = NULL;
		cantActivas--;
		return true;
	}
}

Ficha* Jugador::getFicha(int index) {
	return fichas[index];
}

void Jugador::mostrarFichas() {
	(this->color == NEGRO) ? cout << " NEGRO : ": cout << " BLANCO: " ;
	for (int i = 0; i < 12; i++) {
		if (fichas[i] == NULL)
			cout << "\xF9";
		else 
			cout << fichas[i]->toString();
	}
	cout << endl;
}

Jugador::~Jugador()
{
}
