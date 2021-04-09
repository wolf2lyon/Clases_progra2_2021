#pragma once
#include"Hormiga.h"
class ArrHormiga
{
public:
	ArrHormiga();
	~ArrHormiga();
	void Insertar(int MAXW, int MAXH);
	void Mover_Todos(int MAXW, int MAXH);
	void Cambiar_x(int indice, int nuevovalor);
	void Cambiar_y(int indice, int nuevovalor);
	void Cambiar_dy(int indice, int nuevovalor);
	int Retornar_y(int indice);
	void Mostrar_Todos(int MAXW, int MAXH);

private:
	int *n_elementos;
	Hormiga** arreglo;

};

