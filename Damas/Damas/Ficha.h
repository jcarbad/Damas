#pragma once
#include <string>
# define BLANCO 1
# define NEGRO 0

using namespace std;

class Ficha {
private:
	int color;
	bool corona;
	/*
		Si la ficha tiene corona se puede mover en todas direcciones, cuantas casillas quiera.
	*/
public:
	Ficha();
	Ficha(int, bool);
	void setColor(int);
	void setCorona(bool);
	int getColor();
	bool getCorona();
	string toString();
	~Ficha();
};

