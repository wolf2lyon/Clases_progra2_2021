#pragma once
#include"Base_Movimiento.h"

class Bicicleta2 :public Base_Movimiento
{
public:
	Bicicleta2();
	~Bicicleta2();
	void Mover(int MAXW, int MAXH);
	void Mostrar();

};

