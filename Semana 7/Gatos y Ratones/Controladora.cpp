#include <iostream>
#include <conio.h>
#include <ctime>  
#include "Controladora.h"
using namespace System;
using namespace System::Drawing;
using namespace std;
Controladora::Controladora()
{

}

Controladora::~Controladora()
{
	delete obj_gato;
	delete obj_ratones;
}
void Controladora::Iniciar(int MAXW, int MAXH)
{

	obj_gato = new Gato();
	obj_ratones = new ArrBase_Movimiento();
	termino = false;
	gano = false;
	frecuencia = 0;
	contador = 0;
	contador2 = 0;
	dez = 0;
	obj_gato->Cambiar_x(MAXW / 2);
	obj_gato->Cambiar_y(MAXH - obj_gato->Retornar_a());
	colisiono = false;

}
void Controladora::Run(int MAXW, int MAXH)
{
	srand(time(0));
	n = 1+ rand()%8;
	bool acabo = false;
	while (!acabo)
	{
	
		
		frecuencia++;
		
		if(frecuencia==22)
		{
			Crear_Ratones(MAXW, MAXH);
			frecuencia = 0;
			
		}

		if (contador == n / 2) { acabo = true; }


		obj_ratones->Mover_todos(MAXW, MAXH);
		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'A')
				obj_gato->Cambiar_direccion(movimiento::izquierda);
			if (toupper(t) == 'D')
				obj_gato->Cambiar_direccion(movimiento::derecha);
			if (toupper(t) == 'W')
				obj_gato->Cambiar_direccion(movimiento::arriba);
			if (toupper(t) == 'S')
				obj_gato->Cambiar_direccion(movimiento::abajo);

		}
		obj_gato->Mover(MAXW, MAXH);

		_sleep(50);
		for (int i = 0; !termino && i < obj_ratones->Retonar_n_elementos(); i++)
		{

			termino = Colision(obj_gato, obj_ratones->Retornar_elemento_enpos(i));
			if (termino == true)
			{
				obj_ratones->Cambiar_Eliminar(i, true);
				contador++;
				termino = false;
			}
		}
		for (int i = 0; !colisiono && i < obj_ratones->Retonar_n_elementos(); i++)
		{
			colisiono = Colision2(obj_ratones->Retornar_elemento_enpos(i), obj_gato);
			if (colisiono == true)
			{
				obj_ratones->Cambiar_dy(i, (dez) * -1);
				obj_ratones->Cambiar_dx(i, (dez) * -1);

				colisiono = false;
			}
		}


		/*if (termino == true)
		{
			obj_meteoritos->Cambiar_Eliminar(obj_meteoritos->Retonar_n_elementos()-1, true);
			contador++;
			termino = false;
		}*/

	}
	Resumen();
	cout << endl;
	cout << n;





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
bool Controladora::Colision2(Base_Movimiento* obj1, Base_Movimiento* obj2)
{
	Rectangle rectangulo1;
	rectangulo1.X = obj1->Retornar_x() - 3;
	rectangulo1.Y = obj1->Retornar_y() - 3;
	rectangulo1.Height = obj1->Retornar_a() +5 ;
	rectangulo1.Width = obj1->Retornar_l() +6 ;
	Rectangle rectangulo2;
	rectangulo2.X = obj2->Retornar_x();
	rectangulo2.Y = obj2->Retornar_y();
	rectangulo2.Height = obj2->Retornar_a();
	rectangulo2.Width = obj2->Retornar_l();
	return rectangulo1.IntersectsWith(rectangulo2);
}
void Controladora::Crear_Ratones(int MAXW, int MAXH)
{
	if (contador2 < n) {
		
		dez = 1 ;
		obj_ratones->Insertar(new Ratones());
		obj_ratones->Cambiar_x(obj_ratones->Retonar_n_elementos() - 1, 1 + rand() % (MAXW - 1));
		obj_ratones->Cambiar_y(obj_ratones->Retonar_n_elementos() - 1, 1 + rand() % (MAXH - 1));
		obj_ratones->Cambiar_dy(obj_ratones->Retonar_n_elementos() - 1, 1);
		obj_ratones->Cambiar_dx(obj_ratones->Retonar_n_elementos() - 1, 1);


		
		if (colisiono == true)
		{
			obj_ratones->Cambiar_dy(obj_ratones->Retonar_n_elementos() - 1, (dez) * -1);
			obj_ratones->Cambiar_dx(obj_ratones->Retonar_n_elementos() - 1, (dez) * -1);

			colisiono = false;
		}
		contador2++;
	}
}
void Controladora::Resumen()
{
	if (gano)
	{
		Console::SetCursorPosition(100 / 2, 30 / 2);
		cout << "GANO";
	}


}