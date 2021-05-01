#pragma once
#include "ArrBase_Movimiento.h"
#include "Perro.h"
#include "Gato.h"
class Controladora
{
private:
	int cant_perros;
	int cant_gatos;
	ArrBase_Movimiento* animales;
public:
	Controladora();
	~Controladora();
	void Crear_Animales(char opt);
	void Mover_Animales(int MAXW, int MAXH);
};


