#include "stdafx.h"
#include "Ficha.h"


Ficha::Ficha(){
	color = NEGRO;
	corona = false;
}

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
	if (corona) dibujo += "X";
	return (color == NEGRO) ? dibujo += "\x01": dibujo += "\x02";
}

Ficha::~Ficha()
{
}
