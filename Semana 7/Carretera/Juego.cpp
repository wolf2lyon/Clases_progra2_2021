#include "Juego.h"
#include <iostream>
#include <conio.h>
#include "Terrestre.h"
using namespace System;
using namespace System::Drawing;
using namespace std;
Juego::Juego(){}
Juego::~Juego()
{
	delete obj_persona;
}
void Juego::Iniciar(int MAXW, int MAXH)
{

	obj_persona = new Persona();
	termino =gano= false;
	frecuencia = 0;
	ymeta = 1;
	termino2 = false;
	cantvidas = 3;
	obj_persona->Cambiar_x(MAXW / 2);
	obj_persona->Cambiar_y(MAXH - obj_persona->Retornar_a());
}
void Juego::Run(int MAXW, int MAXH)
{
	while (cantvidas > 0)
	{

		frecuencia++;
		if (frecuencia == 12)
		{
			Crear_Vehiculos(MAXW, MAXH);
			frecuencia = 0;
		}
		obj_terrestre->Mover_todos(MAXW, MAXH);
		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'W')
				obj_persona->Cambiar_direccion(movimiento::arriba);
			if (toupper(t) == 'S')
				obj_persona->Cambiar_direccion(movimiento::abajo);
			if (toupper(t) == 'A')
				obj_persona->Cambiar_direccion(movimiento::izquierda);
			if (toupper(t) == 'D')
				obj_persona->Cambiar_direccion(movimiento::derecha);
		}
		obj_persona->Mover(MAXW, MAXH);
		_sleep(50);
		for (int i = 0; !termino && i < obj_terrestre->Retonar_n_elementos(); i++)
			termino = Colision(obj_persona, obj_terrestre->Retornar_elemento_enpos(i));

		if (obj_persona->Retornar_y() == ymeta) { termino = gano = true; cantvidas = 0; }
		if (termino && (variante == 2 || variante == 3))
		{
			cantvidas--;
			obj_persona->Cambiar_x(MAXW / 2);
			obj_persona->Cambiar_y(MAXH - obj_persona->Retornar_a());
			termino = false;
		}
		if (termino && (variante == 0 || variante == 1))
		{
			
			obj_persona->Cambiar_x(MAXW / 2);
			obj_persona->Cambiar_y(MAXH - obj_persona->Retornar_a());
			termino = false;
		}
		
	
	}
	Resumen();

}


bool Juego::Colision(Base_Movimiento* obj1, Base_Movimiento* obj2)
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

void Juego::Resumen()
{
	if (cantvidas == 0)
	{
		cout << "Perido";
	}
	if (gano == true) { cout << "Gano"; }
}