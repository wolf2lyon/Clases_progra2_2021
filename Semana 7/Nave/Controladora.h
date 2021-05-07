#pragma once
#include "ArrBase_Movimiento.h"
#include"Nave.h"
#include"Balas.h"
#include "Monigote.h"
class Controladora
{
private:
	Monigote* obj_monigote;
	ArrBase_Movimiento* obj_balas;
	Nave* obj_nave;
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
	void Crear_balas(int MAXW, int MAXH);
	void Crear_Nave(int MAXW, int MAXH);
	void Resumen();

};