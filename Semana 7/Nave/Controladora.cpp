#include "Controladora.h"
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
	delete obj_balas;
	delete obj_nave;
}
void Controladora::Iniciar(int MAXW, int MAXH)
{
	obj_monigote = new Monigote();
	obj_balas = new ArrBase_Movimiento();
	obj_nave = new Nave();
	termino = false;
	frecuencia = 0;
	cantvidas = 8;
	obj_monigote->Cambiar_x(MAXW / 2);
	obj_monigote->Cambiar_y(MAXH - obj_monigote->Retornar_a());
}
void Controladora::Run(int MAXW, int MAXH)
{
	while (cantvidas > 0)
	{
		
		obj_nave->Mover(MAXW,MAXH);
		frecuencia++;
		if (frecuencia == 1)
		{
			Crear_balas(MAXW, MAXH);
			frecuencia = 0;
		}

		obj_balas->Mover_todos(MAXW, MAXH);
		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'A')
				obj_monigote->Cambiar_direccion(movimiento::izquierda);
			if (toupper(t) == 'D')
				obj_monigote->Cambiar_direccion(movimiento::derecha);
		}
		obj_monigote->Mover(MAXW, MAXH);
		_sleep(50);
		for (int i = 0; !termino && i < obj_balas->Retonar_n_elementos(); i++)
			termino = Colision(obj_monigote, obj_balas->Retornar_elemento_enpos(i));
		
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

void Controladora::Crear_balas(int MAXW, int MAXH)
{
	
		obj_balas->Insertar(new Balas());
		obj_balas->Cambiar_x(obj_balas->Retonar_n_elementos() - 1, (obj_nave->Retornar_x()+5) + rand() % 7);
		obj_balas->Cambiar_y(obj_balas->Retonar_n_elementos() - 1,  (obj_nave->Retornar_y()+5) );
		obj_balas->Cambiar_dy(obj_balas->Retonar_n_elementos() - 1, 1);
	

}

void Controladora::Resumen()
{
	if (cantvidas == 0)
	{
		cout << "Perido";
	}
}