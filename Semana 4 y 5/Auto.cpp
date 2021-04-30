#include "Auto.h"
Auto::Auto()
{
	obj_chasis = new Chasis();
	llantas = new Llanta * [4];
	a = 3;
	l = 6;
	obj_chasis->Cambiar_l(l);
	for (int i = 0; i < 4; i++)
	{
		llantas[i] = new Llanta();
	}
}

Auto::~Auto()
{
	delete obj_chasis;
	for (int i = 0; i < 4; i++)
	{

		delete llantas[i];
	}
	delete[]llantas;
}
void Auto::Borrar()
{
	obj_chasis->Borrar();
	for (int i = 0; i < 4; i++)
	{
		llantas[i]->Borrar();
	}
}
void Auto::Mostrar()
{
	obj_chasis->Mostrar();
	for (int i = 0; i < 4; i++)
	{
		llantas[i]->Mostrar();
	}
}
void Auto::Mover(int MAXW, int MAXH)
{
	x += dx;
	obj_chasis->Mover( MAXW,MAXH);
	for (int i = 0; i < 4; i++)
	{
		llantas[i]->Mover(MAXW,MAXH);
	}
}
void Auto::Cambiar_x(int nuevo)
{
	x = nuevo;
	llantas[0]->Cambiar_x(x);
	llantas[2]->Cambiar_x(x);
	obj_chasis->Cambiar_x(x);
	llantas[1]->Cambiar_x(x + 5);
	llantas[3]->Cambiar_x(x + 5);
}
void Auto::Cambiar_y(int nuevo)
{
	y = nuevo;
	llantas[0]->Cambiar_y(y);
	llantas[1]->Cambiar_y(y);
	obj_chasis->Cambiar_y(y+1);
	llantas[2]->Cambiar_y(y+2);
	llantas[3]->Cambiar_y(y+2);

}
void Auto::Cambiar_dx(int nuevo)
{
	dx = nuevo;
	obj_chasis->Cambiar_dx(dx);
	for (int i = 0; i < 4; i++)
		llantas[i]->Cambiar_dx(dx);
}
void Auto::Detener()
{
	dx = 0;
	obj_chasis->Detener();
	for (int i = 0; i < 4; i++)
		llantas[i]->Detener();
}
int Auto::Retornar_x()
{
	return x;
}
int Auto::Retornar_l()
{
	return l;
}
