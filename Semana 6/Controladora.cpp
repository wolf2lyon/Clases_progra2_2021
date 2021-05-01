#include <iostream>
using namespace System;
using namespace std;
#include "Controladora.h"

Controladora::Controladora()
{
	cant_gatos = 0;
	cant_perros = 0;
	animales = new ArrBase_Movimiento();
}
Controladora::~Controladora() {
	delete animales;
}
void Controladora::Crear_Animales(char opt)
{
	if (toupper(opt) == 'P')
	{
		animales->Insertar(new Perro());
		animales->Cambiar_dy(cant_gatos + cant_perros, 1);
		animales->Cambiar_x(cant_gatos + cant_perros, 10);
		animales->Cambiar_y(cant_gatos + cant_perros, 10);
		animales->Cambiar_dx(cant_gatos + cant_perros, 1);

		cant_perros++;
	}
	else
	{
		animales->Insertar(new Gato());
		animales->Cambiar_dx(cant_gatos + cant_perros, 0);
		animales->Cambiar_x(cant_gatos + cant_perros, 20);
		animales->Cambiar_y(cant_gatos + cant_perros, 20);
		animales->Cambiar_dx(cant_gatos + cant_perros, 1);

		cant_gatos++;
	}
}
void Controladora::Mover_Animales(int MAXW, int MAXH)
{
	animales->Mover_todos(MAXW, MAXH);
}