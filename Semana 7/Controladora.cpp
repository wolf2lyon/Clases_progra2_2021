#include <iostream>
#include <conio.h>
#include "Controladora.h"
using namespace System;
using namespace System::Drawing;
using namespace std;
Controladora::Controladora()
{

}

Controladora::~Controladora()
{
	delete obj_monigote;
	delete obj_meteoritos;
}
void Controladora::Iniciar(int MAXW, int MAXH)
{
	obj_monigote = new Monigote();
	obj_meteoritos = new ArrBase_Movimiento();
	termino = false;
	frecuencia = 0;
	contador = 0;
	obj_monigote->Cambiar_x(MAXW / 2);
	obj_monigote->Cambiar_y(MAXH - obj_monigote->Retornar_a());

}
void Controladora::Run(int MAXW, int MAXH)
{
	bool acabo=false;
	while (!acabo)
	{
		frecuencia++;
		if (frecuencia == 3)
		{
			Crear_Meteorito(MAXW, MAXH);
			frecuencia = 0;
		}
	

		obj_meteoritos->Mover_todos(MAXW, MAXH);
		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'A')
				obj_monigote->Cambiar_direccion(movimiento::izquierda);
			if (toupper(t) == 'D')
				obj_monigote->Cambiar_direccion(movimiento::derecha);
			if (toupper(t) == 'F') acabo = true;
		}
		obj_monigote->Mover(MAXW, MAXH);

		_sleep(50);
		for (int i = 0; !termino && i < obj_meteoritos->Retonar_n_elementos(); i++)
		{
	
			termino = Colision(obj_monigote, obj_meteoritos->Retornar_elemento_enpos(i));	
			if (termino == true)
			{
				obj_meteoritos->Cambiar_Eliminar(i, true);
				contador++;
				termino = false;
			}
		}
				
		/*if (termino == true)
		{
			obj_meteoritos->Cambiar_Eliminar(obj_meteoritos->Retonar_n_elementos()-1, true);
			contador++;
			termino = false;
		}
		*/
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
void Controladora::Crear_Meteorito(int MAXW, int MAXH)
{
	obj_meteoritos->Insertar(new Meteorito());
	obj_meteoritos->Cambiar_x(obj_meteoritos->Retonar_n_elementos() - 1, 1 + rand() % (MAXW - 1));
	obj_meteoritos->Cambiar_y(obj_meteoritos->Retonar_n_elementos() - 1, 1 + rand() % (MAXH - 10));
	obj_meteoritos->Cambiar_dy(obj_meteoritos->Retonar_n_elementos() - 1, 1 + rand() % 2);

}
void Controladora::Resumen()
{
	Console::SetCursorPosition(100 / 2, 30 / 2);
		cout << "La cantidad de meteoritos recogidos es: " << contador;
	
}



