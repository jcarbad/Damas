#include "stdafx.h"
#include <iostream>
#include "Partida.h"

using namespace std;

int main() {
	Partida *match = new Partida();
	match->colocacionInicialDeFichas();
	match->mostrarDisplay();
	cin.get();
	bool seHizo = match->hacerMovimiento(2, 2, 3, 3);
	if (seHizo) {
		system("cls");
		match->mostrarDisplay();
		cin.get();
	}
	else cout << "\a";
	seHizo = match->hacerMovimiento(3, 3, 4, 2);
	if (seHizo) {
		system("cls");
		match->mostrarDisplay();
		cin.get();
	}
	else cout << "\a";
	seHizo = match->hacerMovimiento(5, 3, 4, 2);
	if (seHizo) {
		system("cls");
		match->mostrarDisplay();
		cin.get();
	}
	else cout << "\a";
	seHizo = match->hacerMovimiento(2, 0, 3, 1);
	if (seHizo) {
		system("cls");
		match->mostrarDisplay();
		cin.get();
	}
	else cout << "\a";
	 return 0;
}