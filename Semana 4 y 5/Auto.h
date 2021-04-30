#pragma once
#include"Chasis.h"
#include"Llanta.h"
class Auto
{
public:
	Auto();
	~Auto();
	void Borrar();
	void Mostrar();
	void Mover(int MAXW, int MAXH);
	void Cambiar_x(int nuevo);
	void Cambiar_y(int nuevo);
	void Cambiar_dx(int nuevo);
	void Detener();
	int Retornar_x();
	int Retornar_l();

private:
	Chasis* obj_chasis;
	Llanta** llantas;
	int x, y, dx, a, l,color;
	

};


