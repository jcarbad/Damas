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
			// ------- casillas blancas (que no jeugan) ----------
			if (i % 2 == 1 && j % 2 == 1 && tabla->buscaUnaCasilla(((i-1)/2), (j-1)/2)) Display[i][j] = "   ";
			if (i % 2 == 1 && j % 2 == 1 && tabla->buscaUnaCasilla(((i - 1) / 2), (j - 1) / 2) ==  nullptr) Display[i][j] = "\xB0\xB0\xB0";
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
			if (Display[i][j] == " \x01 ") Casilla::colorText(10);
			if (Display[i][j] == " \x02 ") Casilla::colorText(14);
			if (Display[i][j] == "\xB0\xB0\xB0") Casilla::colorText(7);
			cout << Display[i][j];
			Casilla::colorText(7);
		}
	}
}

void Partida::moverFicha(int x, int y, int direccion){
	tabla->moverFicha(x,y,direccion);
}

void Partida::colocacionInicialDeFichas() {
	int index = 0; // index es para ir "vaciando" las fichas[12] de cada jugador
	// Inicia con las fichas del JNegro (Arriba)
	for (int i = 0; i < 3; i++) {
		if (i % 2 == 0) {
			colocarFichaEn(i, 0, JNegro->getFicha(index++));
			colocarFichaEn(i, 2, JNegro->getFicha(index++));
			colocarFichaEn(i, 4, JNegro->getFicha(index++));
			colocarFichaEn(i, 6, JNegro->getFicha(index++));
		}
		else {
			colocarFichaEn(i, 1, JNegro->getFicha(index++));
			colocarFichaEn(i, 3, JNegro->getFicha(index++));
			colocarFichaEn(i, 5, JNegro->getFicha(index++));
			colocarFichaEn(i, 7, JNegro->getFicha(index++));
		}
	}
	index = 0;
	for (int i = 5; i < 8; i++) {
		if (i % 2 == 0) {
			colocarFichaEn(i, 0, JBlanco->getFicha(index++));
			colocarFichaEn(i, 2, JBlanco->getFicha(index++));
			colocarFichaEn(i, 4, JBlanco->getFicha(index++));
			colocarFichaEn(i, 6, JBlanco->getFicha(index++));
		}
		else {
			colocarFichaEn(i, 1, JBlanco->getFicha(index++));
			colocarFichaEn(i, 3, JBlanco->getFicha(index++));
			colocarFichaEn(i, 5, JBlanco->getFicha(index++));
			colocarFichaEn(i, 7, JBlanco->getFicha(index++));
		}
	}
}

bool Partida::hacerMovimiento(int x_orig, int y_orig, int x_dest, int y_dest) {
	Casilla *cOrigen = tabla->buscaUnaCasilla(x_orig, y_orig);
	Casilla *cDestino = tabla->buscaUnaCasilla(x_dest, y_dest);
	if (cOrigen && cOrigen->getFicha()) {
		int vecino = cOrigen->esMiVecino(cDestino);
		if (vecino != -1) {
			// Estoy trabajando en este
			if (vecino) return true; // FALTAAAA
		}
		else return false; // No son adyacentes.
	}
	else return false; // Casilla de origen vacia
}