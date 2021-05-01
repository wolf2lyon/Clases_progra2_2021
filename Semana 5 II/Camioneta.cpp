#include "Camioneta.h"
Camioneta::Camioneta()
{
	n_llantas = 6;
	a = 3;
	l = 10;
	Iniciar();
}
Camioneta::~Camioneta(){}

void Camioneta::Cambiar_x(int nuevo)
{
	x = nuevo;
	llantas[0]->Cambiar_x(x);
	llantas[1]->Cambiar_x(x + 3);
	llantas[2]->Cambiar_x(x+6);
	obj_chasis->Cambiar_x(x);
	llantas[3]->Cambiar_x(x);
	llantas[4]->Cambiar_x(x + 3);
	llantas[5]->Cambiar_x(x + 6);
}
void Camioneta::Cambiar_y(int nuevo)
{
	y = nuevo;
	llantas[0]->Cambiar_y(y);
	llantas[1]->Cambiar_y(y);
	llantas[2]->Cambiar_y(y);
	obj_chasis->Cambiar_y(y+1);
	llantas[3]->Cambiar_y(y+2);
	llantas[4]->Cambiar_y(y+2);
	llantas[5]->Cambiar_y(y+2);

}
