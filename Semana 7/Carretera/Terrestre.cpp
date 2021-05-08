#include "Terrestre.h"
#include <iostream>
#include <conio.h>

using namespace System::Drawing;
using namespace std;
Terrestre::Terrestre()
{
	obj_terrestre = new ArrBase_Movimiento();





}
Terrestre::~Terrestre()
{
	delete obj_terrestre;
}
void Terrestre::Crear_Vehiculos(int MAXW, int MAXH)
{
	variante = rand() % 4;





	if (variante == 0)
	{
		int B1, dato;
		dato = 0;
		B1 = rand() % 2;
		if (B1 == 0) { dato = 23; }
		else { dato = 27; }
		obj_terrestre->Insertar(new Bicicleta2());
		obj_terrestre->Cambiar_x(obj_terrestre->Retonar_n_elementos() - 1, MAXW - 6);
		obj_terrestre->Cambiar_y(obj_terrestre->Retonar_n_elementos() - 1, dato);
		obj_terrestre->Cambiar_dx(obj_terrestre->Retonar_n_elementos() - 1, (1 + rand() % 3) * -1);
	}
	if (variante == 1)
	{
		int B2, dato2;
		dato2 = 0;
		B2 = rand() % 2;
		if (B2 == 0) { dato2 = 15; }
		else { dato2 = 19; }

		obj_terrestre->Insertar(new Bicicleta());
		obj_terrestre->Cambiar_x(obj_terrestre->Retonar_n_elementos() - 1, 1);
		obj_terrestre->Cambiar_y(obj_terrestre->Retonar_n_elementos() - 1, dato2);
		obj_terrestre->Cambiar_dx(obj_terrestre->Retonar_n_elementos() - 1, (1 + rand() % 3));
	}
	if (variante == 2)
	{
		int Buses, dato3;
		dato3 = 0;
		Buses = 0;
		if (Buses == 0) { dato3 = 5; }
		obj_terrestre->Insertar(new Bus());
		obj_terrestre->Cambiar_x(obj_terrestre->Retonar_n_elementos() - 1, MAXW - 28);
		obj_terrestre->Cambiar_y(obj_terrestre->Retonar_n_elementos() - 1, dato3);
		obj_terrestre->Cambiar_dx(obj_terrestre->Retonar_n_elementos() - 1, (3 + rand() % 2) * -1);
	}
	if (variante == 3)
	{
		int Carros, dato4;
		dato4 = 0;
		Carros = rand() % 2;
		if (Carros == 0) { dato4 = 1; }
		else { dato4 = 11; }
		obj_terrestre->Insertar(new Carro());
		obj_terrestre->Cambiar_x(obj_terrestre->Retonar_n_elementos() - 1, 1);
		obj_terrestre->Cambiar_y(obj_terrestre->Retonar_n_elementos() - 1, dato4);
		obj_terrestre->Cambiar_dx(obj_terrestre->Retonar_n_elementos() - 1,  1+rand() % 2);

	}
}
int Terrestre::Retornar_variante()
{
	return variante;
}
	
