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
	void Insertar(Base_Movimiento* objeto);
	void Mover_todos(int MAXW, int MAXH);
	void Mostrar_todos();
	void Cambiar_x(int indice, int nuevo);
	void Cambiar_y(int indice, int nuevo);
	void Cambiar_dx(int indice, int nuevo);
	void Cambiar_dy(int indice, int nuevo);
	void Cambiar_a(int indice, int nuevo);
	void Cambiar_l(int indice, int nuevo);
	void Cambiar_color(int indice, int nuevo);
	void Cambiar_Eliminar(int indice, bool nuevo);
	int Retornar_x(int indice);
	int Retornar_y(int indice);
	int Retornar_dx(int indice);
	int Retornar_dy(int indice);
	int Retornar_a(int indice);
	int Retornar_l(int indice);
	int Retornar_color(int indice);
	int Retonar_n_elementos();
	Base_Movimiento* Retornar_elemento_enpos(int indice);
	void Eliminar();

};