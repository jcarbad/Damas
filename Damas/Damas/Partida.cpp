#include "stdafx.h"
#include "Partida.h"


Partida::Partida()
	:tabla(new Tablero()), JNegro(new Jugador(NEGRO)), JBlanco(new Jugador(BLANCO))
{
	preparaDisplay();
}


Partida::~Partida()
{
}

bool Partida::colocarFichaEn(int x, int y, Ficha* ficha){
	Casilla* setEn = tabla->buscaUnaCasilla(x, y);
	if (setEn == NULL)
		return false;
	else {
		setEn->setFicha(ficha);
		// Ajuste para mostrar en display.
		Display[2 * x + 1][2 * y + 1] = setEn->getFicha()->toString();
	}
}

// Este método es meramente estética, para el Display.
void Partida::preparaDisplay() {
	for (int i = 0; i < 17; i++) {
		for (int j = 0; j < 17; j++) {
			// ------- cruzados ----------------------------------
			if (i % 2 == 0 && j % 2 == 1) Display[i][j] = "\xCD\xCD\xCD";
			if (i % 2 == 0 && j % 2 == 0) Display[i][j] = "\xCE";
			if (i % 2 == 1 && j % 2 == 0) Display[i][j] = "\xBA";
			if (i % 2 == 1 && j % 2 == 1) Display[i][j] = "   ";
			//--------------- laterales (izq, der) ---------------
			if (j == 0 && i % 2 == 0) Display[i][j] = "\xCC";
			if (j == 16 && i % 2 == 0) Display[i][j] = "\xB9";
			// -------------- laterales (sup, inf) ---------------
			if (i == 0 && j % 2 == 0) Display[i][j] = "\xCB";
			if (i == 16 && j % 2 == 0) Display[i][j] = "\xCA";
			//----------------- Esquinas -------------------------
			if (i == 0 && j == 0) Display[i][j] = "\xC9";
			if (i == 0 && j == 16) Display[i][j] = "\xBB";
			if (i == 16 && j == 0) Display[i][j] = "\xC8";
			if (i == 16 && j == 16) Display[i][j] = "\xBC";
			//---------------- Espacios vacios ------------------
		}
	}
}

void Partida::mostrarDisplay() {
	Casilla *actual = nullptr;
	cout << "\n\n\t    0   1   2   3   4   5   6   7";
	for (int i = 0, cols = 0; i < 17; i++) {
		cout <<"\n\t";
		if (i % 2 == 1) {
			cout << cols << " ";
			cols++;
		}
		else cout << "  ";
		for (int j = 0; j < 17; j++) {
			if (Display[i][j] == "\x01") Casilla::colorText(12);
			if (Display[i][j] == "\x02") Casilla::colorText(14);
			cout << Display[i][j];
			Casilla::colorText(7);
		}
	}
}