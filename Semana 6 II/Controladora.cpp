#include <iostream>
#include <conio.h>
#include "Controladora.h"
using namespace System;
using namespace System::Drawing;
using namespace std;
Controladora::Controladora() {}
Controladora::~Controladora()
{
	delete obj_monigote;
	delete obj_vehiculos;
}
void Controladora::Iniciar(int MAXW, int MAXH)
{
	obj_monigote = new Monigote();
	obj_vehiculos = new ArrBase_Movimiento();
	ymeta = 1;
	termino = gano = false;
	frecuencia = 0;
	cantvidas = 3;
	obj_monigote->Cambiar_x(MAXW / 2);
	obj_monigote->Cambiar_y(MAXH - obj_monigote->Retornar_a());
}
void Controladora::Run(int MAXW, int MAXH)
{
	while (cantvidas > 0)
	{
		frecuencia++;
		if (frecuencia == 10)
		{
			Crear_Vehiculo(MAXW, MAXH);
			frecuencia = 0;
		}

		obj_vehiculos->Mover_todos(MAXW, MAXH);
		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'W')
				obj_monigote->Cambiar_direccion(movimiento::arriba);
			if (toupper(t) == 'S')
				obj_monigote->Cambiar_direccion(movimiento::abajo);
			if (toupper(t) == 'A')
				obj_monigote->Cambiar_direccion(movimiento::izquierda);
			if (toupper(t) == 'D')
				obj_monigote->Cambiar_direccion(movimiento::derecha);
		}
		obj_monigote->Mover(MAXW, MAXH);
		_sleep(50);
		for (int i = 0; !termino && i < obj_vehiculos->Retonar_n_elementos(); i++)
			termino = Colision(obj_monigote, obj_vehiculos->Retornar_elemento_enpos(i));
		if (obj_monigote->Retornar_y() == ymeta) { termino = gano = true; cantvidas = 0; }
		if (termino)
		{
			cantvidas--;
			obj_monigote->Cambiar_x(MAXW / 2);
			obj_monigote->Cambiar_y(MAXH - obj_monigote->Retornar_a());
			termino = false;
		}
	}
	Resumen();

}

bool Controladora::Colision(Base_Movimiento* obj1, Base_Movimiento* obj2)
{
	Rectangle rectangulo1;
	rectangulo1.X = obj1->Retornar_x();
	rectangulo1.Y = obj1->Retornar_y();
	rectangulo1.Height = obj1->Retornar_a();
	rectangulo1.Width = obj1->Retornar_l();
	Rectangle rectangulo2;
	rectangulo2.X = obj2->Retornar_x();
	rectangulo2.Y = obj2->Retornar_y();
	rectangulo2.Height = obj2->Retornar_a();
	rectangulo2.Width = obj2->Retornar_l();

	return rectangulo1.IntersectsWith(rectangulo2);
}

void Controladora::Crear_Vehiculo(int MAXW, int MAXH)
{
	if ((rand() % 100) % 2 == 0)
	{
		obj_vehiculos->Insertar(new Auto());
		obj_vehiculos->Cambiar_x(obj_vehiculos->Retonar_n_elementos() - 1, 1);
		obj_vehiculos->Cambiar_y(obj_vehiculos->Retonar_n_elementos() - 1, 1 + rand() % (MAXH - 10));
		obj_vehiculos->Cambiar_dx(obj_vehiculos->Retonar_n_elementos() - 1, 1 + rand() % 3);
	}
	else
	{
		obj_vehiculos->Insertar(new Moto());
		obj_vehiculos->Cambiar_x(obj_vehiculos->Retonar_n_elementos() - 1, MAXW - 7);
		obj_vehiculos->Cambiar_y(obj_vehiculos->Retonar_n_elementos() - 1, 1 + rand() % (MAXH - 10));
		obj_vehiculos->Cambiar_dx(obj_vehiculos->Retonar_n_elementos() - 1, (1 + rand() % 3) * -1);
	}

}
void Controladora::Resumen()
{
	if (gano)
	{
		cout << "LLEGO A LA META";
	}
	else
		cout << "PERDIO";
}