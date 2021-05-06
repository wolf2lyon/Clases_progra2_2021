#pragma once
#include"Base_Movimiento.h"
class Meteorito:public Base_Movimiento
{
public:
	Meteorito();
	~Meteorito();
	void Mover(int MAXW, int MAXH);
	void Mostrar();

};


