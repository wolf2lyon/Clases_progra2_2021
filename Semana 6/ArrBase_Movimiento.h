#pragma once
#include "Base_Movimiento.h"
class ArrBase_Movimiento
{
private:
	int* n_elementos;
	Base_Movimiento** arreglo;
public:
	ArrBase_Movimiento();
	~ArrBase_Movimiento();
	void Insertar(Base_Movimiento* obj_nuevo);
	void Mover_todos(int MAXW, int MAXH);
	void Cambiar_x(int indice, int nuevo);
	void Cambiar_y(int indice, int nuevo);
	void Cambiar_dx(int indice, int nuevo);
	void Cambiar_dy(int indice, int nuevo);
	void Cambiar_a(int indice, int nuevo);
	void Cambiar_l(int indice, int nuevo);
	void Cambiar_color(int indice, int nuevo);
	int Retonar_x(int indice);
	int Retonar_y(int indice);
	int Retonar_dx(int indice);
	int Retonar_dy(int indice);
	int Retonar_a(int indice);
	int Retonar_l(int indice);
	int Retonar_color(int indice);
};





