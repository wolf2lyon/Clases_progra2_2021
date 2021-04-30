#pragma once
#include "Auto.h"
class ArrAuto
{
public:
	ArrAuto();
	~ArrAuto();
	void Insertar();
	void Mostrar_todos();
	void Mover_todos(int MAXW,int MAXH);
	void Detener_todos();
	void Cambiar_x(int indice, int nuevo);
	void Cambiar_dx(int indice, int nuevo);
	void Cambiar_y(int indice, int nuevo);
	int  RetornarXmasL(int indice);




private:
	int* n_elementos;
	Auto** arreglo;

};



