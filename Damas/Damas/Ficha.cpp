#include "stdafx.h"
#include "Ficha.h"


Ficha::Ficha(){
	color = NEGRO;
	corona = false;
}

Ficha::Ficha(int c):color(c), corona(false) {}

Ficha::Ficha(int col, bool cor) {
	color = col;
	corona = cor;
}

void Ficha::setColor(int col) {
	color = col;
}

void Ficha::setCorona(bool cor) {
	corona = cor;
}

int Ficha::getColor() {
	return color;
}

bool Ficha::getCorona() {
	return corona;
}

string Ficha::toString() {
	string dibujo = "";
	if (corona && color == NEGRO) return dibujo += " \06 ";
		else if (corona && color == BLANCO) return dibujo += " \05 ";
			else  return (color == NEGRO) ? dibujo += " \x02 ": dibujo += " \x01 ";
}

Ficha::~Ficha()
{
}
