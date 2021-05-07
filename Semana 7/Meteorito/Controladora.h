#pragma once
#include <ctime>  
#include"iostream"
#include"ArrBase_Movimiento.h"
#include"Monigote.h"
#include"Meteorito.h"
class Controladora
{
public:
	Controladora();
	~Controladora();
	void Iniciar(int MAXW, int MAXH);
	void Run(int MAXW, int MAXH);
	bool Colision(Base_Movimiento* obj1, Base_Movimiento* obj2);
	void Crear_Meteorito(int MAXW,int MAXH);
	void Resumen();
	
private:
	Monigote*obj_monigote;
	ArrBase_Movimiento*obj_meteoritos;
	int ymeta;
	bool termino;
	bool gano;
	short frecuencia, cantvidas;
	int contador;

};




