#include "stdafx.h"
#include <iostream>
#include "Juego.h"

using namespace std;

int main() {
	Juego *juego = new Juego();
	juego->bienvenida();

	//Partida *p = new Partida();	
	//p->colocarFichaEn(1,1, new Ficha(NEGRO,TRUE));
	//p->colocarFichaEn(6,6, new Ficha(BLANCO,NULL));
	//p->colocarFichaEn(4,4, new Ficha(BLANCO,NULL));
	//p->colocarFichaEn(2,2, new Ficha(BLANCO,NULL));	p->mostrarDisplay();
	//cin.get();
	//system("cls");
	//if(p->hacerMovimiento(1,1,SE,NEGRO))  cout<<"verdadero";else cout<<"No se hizo el movimiento";
	//cout<<endl;

	//p->mostrarDisplay();
	cin.get();
	return 0;
}