#include "stdafx.h"
#include "Tablero.h"


Tablero::Tablero() {
	Diag = new Lista(NOSE);
	Lista *LSO;

	// Inicializa la diagonal
	for (int i = 0; i < 8; i++)
		Diag->InsertarFinal(new Casilla(i, i));

	// Inicializa las sublistas SO->NE
	for (int i = 0, res = 1; i < 8; i++) {
		LSO = new Lista(SONE);
		LSO->InsertarFinal(Diag->buscarCasilla(i, i)); // Aquí se "guinda" de la Diag.

		// Agrega los vecinos necesarios, partiendo de Diag.
		if (i < 4) {
			for (int j = 0; j < i; j++) {
				LSO->InsertarFinal(new Casilla(i - j - 1, i + j + 1));
				LSO->InsertarAntes(new Casilla(i + j + 1, i - j - 1));
			}
		} else {
			if (i == 7)		LSO->InsertarFinal(new Casilla(i, i));
			for (int j = 0; j < i - res; j++) {
				LSO->InsertarFinal(new Casilla(i - j - 1, i + j + 1));
				LSO->InsertarAntes(new Casilla(i + j + 1, i - j - 1));
			}
			res += 2;
		}
		ListVector[i] = LSO;
	}
}

// Este método es meramente estética, para el Display.
void Tablero::preparaDisplay() {
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
			if (i == 0		&& j == 0	 ) Display[i][j] = "\xC9";
			if (i == 0		&& j == 16	 ) Display[i][j] = "\xBB";
			if (i == 16		&& j == 0	 ) Display[i][j] = "\xC8";
			if (i == 16		&& j == 16	 ) Display[i][j] = "\xBC";
			//---------------- Espacios vacios ------------------
		}
	}
}

Casilla * Tablero::buscaUnaCasilla(int x, int y){
	/* 
		Busca cualquier casilla en todo el tablero y la devuelve.
		Si no la encuentra retorna NULL. 
	*/
	Casilla* encontrada = NULL;
	for (int i = 0; i < 8; i++) {
		// Se revisa, lista por lista, si está la ficha.
		encontrada = ListVector[i]->buscarCasilla(x, y);
		if (encontrada)
			return encontrada;
	}
	return NULL;
}

Lista * Tablero::getSubLista(int i){
	return ListVector[i];
}

// Método para pruebas, únicamente.
void Tablero::MostarListadeListas(){
	cout << "Diagonal: ";
	Diag->Mostrar();
	cout << "\n\n\nCompleta:\n";
	for (int i = 0; i < 8; i++) {
		ListVector[i]->Mostrar();
		cout << endl;
	}
}

void Tablero::mostrarDisplay(){
	for (int i = 0; i < 17; i++) {
		cout << endl;
		for (int j = 0; j < 17; j++)
			cout << Display[i][j];
	}
}

Tablero::~Tablero(){
}
