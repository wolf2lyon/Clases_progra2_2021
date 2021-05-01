#pragma once
#include "Auto.h"
class Camioneta : public Auto
{
public:
	Camioneta();
	~Camioneta();
	void Cambiar_x(int nuevo);
	void Cambiar_y(int nuevo);
};

