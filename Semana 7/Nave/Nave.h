#pragma once
#include"Base_Movimiento.h"
class Nave:public Base_Movimiento
{
public:
	Nave();
	~Nave();
	void Mostrar();
	void Mover(int MAXW, int MAXH);


};



