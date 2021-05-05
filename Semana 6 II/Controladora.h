#pragma once
#include "ArrBase_Movimiento.h"
#include "Auto.h"
#include "Moto.h"
#include "Monigote.h"
class Controladora
{
private:
	Monigote* obj_monigote;
	ArrBase_Movimiento* obj_vehiculos;
	int ymeta;
	bool termino;
	bool gano;
	short frecuencia, cantvidas;
public:
	Controladora();
	~Controladora();
	void Iniciar(int MAXW, int MAXH);
	void Run(int MAXW, int MAXH);
	bool Colision(Base_Movimiento* obj1,
		Base_Movimiento* obj2);
	void Crear_Vehiculo(int MAXW, int MAXH);
	void Resumen();

};
