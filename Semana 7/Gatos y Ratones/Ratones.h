#pragma once
#include"Base_Movimiento.h"
class Ratones :public Base_Movimiento
{
public:
	Ratones();
	~Ratones();
	void Mover(int MAXW, int MAXH);
	void Mostrar();

};

