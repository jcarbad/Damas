#include "stdafx.h"
#include "Partida.h"


Partida::Partida(){
	JNegro = new Jugador(NEGRO);
	JBlanco = new Jugador(BLANCO);
	tabla = new Tablero();
	// Coloca las fichas negras arriba...
	int cntN = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 8; j++) {
			if (tabla->getCasilla(i, j) != NULL) {
				if (i % 2 == 0 && j % 2 == 0) {
					tabla->setFichaEnCasilla(i, j, JNegro->getFicha(cntN));
					cntN++;
				}else if (i % 2 == 1 && j % 2 == 1) {
					tabla->setFichaEnCasilla(i, j, JNegro->getFicha(cntN));
					cntN++;
				}
			}
		}
	}
	// Coloca las fichas blancas abajo...
	int cntB = 0;
	for (int i = 5; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (tabla->getCasilla(i, j) != NULL) {
				if (i % 2 == 0 && j % 2 == 0) {
					tabla->setFichaEnCasilla(i, j, JBlanco->getFicha(cntB));
					cntB++;
				} else if (i % 2 == 1 && j % 2 == 1) {
					tabla->setFichaEnCasilla(i, j, JBlanco->getFicha(cntB));
					cntB++;
				}
			}
		}
	}
}

void Partida::mostrarTablero() {
	this->tabla->mostrar();
}

Partida::~Partida()
{
}
