#pragma once
#include "Base_Movimiento.h"

class Perro : public Base_Movimiento
{
public:
	Perro();
	~Perro();
	void Mover(int MAXW, int MAXH);
	void Mostrar();
};


