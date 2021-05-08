#pragma once
#pragma once
#include"Base_Movimiento.h"

class Carro :public Base_Movimiento
{
public:
	Carro();
	~Carro();
	void Mover(int MAXW, int MAXH);
	void Mostrar();

};