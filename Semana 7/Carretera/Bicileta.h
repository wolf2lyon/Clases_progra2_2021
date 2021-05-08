#pragma once
#include"Base_Movimiento.h"

class Bicicleta:public Base_Movimiento
{
public:
	Bicicleta();
	~Bicicleta();
	void Mover(int MAXW,int MAXH);
	void Mostrar();

};


