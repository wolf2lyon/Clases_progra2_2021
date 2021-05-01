#pragma once
#include"Chasis.h"
#include"Llanta.h"
class Auto
{
public:
	Auto();
	~Auto();
	void Iniciar();
	void Borrar();
	void Mostrar();
	void Mover(int MAXW, int MAXH);
	virtual void Cambiar_x(int nuevo);
	virtual void Cambiar_y(int nuevo);
	void Cambiar_dx(int nuevo);
	void Detener();
	int Retornar_x();
	int Retornar_l();

protected:
	Chasis* obj_chasis;
	Llanta** llantas;
	int x, y, dx, a, l,color,n_llantas;
	

};


