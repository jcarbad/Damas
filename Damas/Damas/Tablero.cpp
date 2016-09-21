#include "stdafx.h"
#include "Tablero.h"


Tablero::Tablero() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0)
				tabla[i][j] = new Casilla();
			else {
				if (i % 2 == 1 && j % 2 == 1)
					tabla[i][j] = new Casilla();
				else
					tabla[i][j] = NULL;
			}
		}
	}
}

Casilla * Tablero::getCasilla(int x, int y) {
	return tabla[x][y];
}

void Tablero::setFichaEnCasilla(int x, int y, Ficha *ficha) {
	tabla[x][y]->setFicha(ficha);
}

void Tablero::mostrar() {
	Casilla::colorText(15);
	cout << "\n\n\t    0 1 2 3 4 5 6 7\n\n";
	for (int i = 0; i < 8; i++) {
		cout << "\t" << i << "  ";
		for (int j = 0; j < 8; j++) {
			if (j == 7) {
				if (tabla[i][j] != NULL)
					cout << tabla[i][j]->toString() << "|";
				else cout << "|\xB0|";
			}
			else {
				if (tabla[i][j] != NULL) 
					cout << tabla[i][j]->toString();
				else cout << "|\xB0";
			}
			Casilla::colorText(15);
		}
		cout << endl;
	}
}

Tablero::~Tablero()
{
}
