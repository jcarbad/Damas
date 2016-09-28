#include "stdafx.h"
#include <iostream>
#include "Lista.h"
using namespace std;

int main() {
	Lista* listVector[8];
	// Inicializa la diagonal
	Lista *LNO = new Lista(NOSE);
	for (int i = 0; i < 8; i++) {
		LNO->InsertarFinal(new Casilla(i, i));
		if (i == 0 || i == 7)
			listVector[i] = LNO;
	}

	Lista *LSO;
	// Inicia con las sublistas SO->NE
	for (int i = 0, res = 1; i < 8; i++) {
		LSO = new Lista(SONE);
		LSO->InsertarFinal( LNO->buscarCasilla(i, i));
		if (i < 4) {
			for (int j = 0; j < i; j++) {
				LSO->InsertarFinal(new Casilla(i - j - 1, i + j + 1));
				LSO->InsertarAntes(new Casilla(i + j + 1, i - j - 1));
			}
		}
		else {
			if (i == 7)
				LSO->InsertarFinal(new Casilla(i, i));
			for (int j = 0; j < i - res; j++) {
				LSO->InsertarFinal(new Casilla(i - j - 1, i + j + 1));
				LSO->InsertarAntes(new Casilla(i + j + 1, i - j - 1));
			}
			res += 2;
		}
		listVector[i] = LSO;
	}
	cout << "Diagonal: ";
	LNO->Mostrar();
	cout << "\n\n\nCompleta:\n";
	for (int i = 0; i < 8; i++) {
		listVector[i]->Mostrar();
		cout << endl;
	}
	cin.get();
    return 0;
}