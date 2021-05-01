#pragma once
#include "Base_Movimiento.h"
class Gato : public Base_Movimiento
{
public:
	Gato();
	~Gato();
	void Mover(int MAXW, int MAXH);
	void Mostrar();

};
