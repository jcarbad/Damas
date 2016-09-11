#include "stdafx.h"
#include "Casilla.h"


Casilla::Casilla() {
	ficha = NULL;
	vecinos[NOROESTE] = NULL;
	vecinos[NORESTE] = NULL;
	vecinos[SURESTE] = NULL;
	vecinos[SUROESTE] = NULL;
}

Casilla::Casilla(Ficha *f, Casilla *vec[4]) {
	ficha = f;
	vecinos[NOROESTE] = vec[NOROESTE];
	vecinos[NORESTE] = vec[NORESTE];
	vecinos[SURESTE] = vec[SURESTE];
	vecinos[SUROESTE] = vec[SUROESTE];
}

void Casilla::setFicha(Ficha *f) {
	ficha = f;
}

void Casilla::setVecinos(Casilla *vec[4]) {
	vecinos[NOROESTE] = vec[NOROESTE];
	vecinos[NORESTE] = vec[NORESTE];
	vecinos[SURESTE] = vec[SURESTE];
	vecinos[SUROESTE] = vec[SUROESTE];
}

Ficha * Casilla::getFicha() {
	return ficha;
}

Casilla * Casilla::getVecinos() {
	Casilla * vecs[] = {vecinos[0], vecinos[1], vecinos[2], vecinos[3]};
	return *vecs;
}

string Casilla::toString() {
	return (ficha != NULL) ? "|" + ficha->toString(): "|  ";
}

Casilla::~Casilla()
{
}
