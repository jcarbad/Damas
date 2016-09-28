#include "Casilla.h"
#include <iostream>
using namespace std;
/*
	Convenci�n:
	Sea #1 ir en sentido NO->SE. 
	Sea #2 ir en sentido SO->NE.
*/
# define NOSE 1
# define SONE 2

class Lista {
private:
	Casilla* pLista;
	Casilla* pPio;
	int sentido;
public:
	Lista();
	Lista(int);
	~Lista();
	void irAPrimero();
	void alSiguiente();
	void irAUltimo();
	void InsertarFinal(Casilla*);//Final
	void InsertarAntes(Casilla*);//Antes
	void Vaciar(Casilla*);
	bool ListaVacia();
	void Mostrar();
	Casilla* buscarCasilla(int, int);
	Casilla* getPLista();
	Casilla* getPPio();
	int getSentido();
};

