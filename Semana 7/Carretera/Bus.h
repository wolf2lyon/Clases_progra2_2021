#pragma once
#include"Base_Movimiento.h"

class Bus :public Base_Movimiento
{
public:
	Bus();
	~Bus();
	void Mover(int MAXW, int MAXH);
	void Mostrar();

};

