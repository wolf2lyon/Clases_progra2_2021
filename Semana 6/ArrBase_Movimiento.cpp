#include "ArrBase_Movimiento.h"

ArrBase_Movimiento::ArrBase_Movimiento()
{
	n_elementos = new int;
	*n_elementos = 0;
}
ArrBase_Movimiento::~ArrBase_Movimiento() {
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete[] arreglo;
	delete n_elementos;
}
void ArrBase_Movimiento::Insertar(Base_Movimiento* obj_nuevo)
{
	Base_Movimiento** auxiliar = new Base_Movimiento * [*n_elementos];
	for (int i = 0; i < *n_elementos; i++)
		auxiliar[i] = arreglo[i];
	arreglo = new Base_Movimiento * [*n_elementos + 1];
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i] = auxiliar[i];
	arreglo[*n_elementos] = obj_nuevo;
	*n_elementos = *n_elementos + 1;
}
void ArrBase_Movimiento::Mover_todos(int MAXW, int MAXH)
{
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Mover(MAXW, MAXH);
}
void ArrBase_Movimiento::Cambiar_x(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_x(nuevo);
}
void ArrBase_Movimiento::Cambiar_y(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_y(nuevo);
}
void ArrBase_Movimiento::Cambiar_dx(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_dx(nuevo);
}
void ArrBase_Movimiento::Cambiar_dy(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_dy(nuevo);
}

void ArrBase_Movimiento::Cambiar_a(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_a(nuevo);
}

void ArrBase_Movimiento::Cambiar_l(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_l(nuevo);
}
void ArrBase_Movimiento::Cambiar_color(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_color(nuevo);
}
int ArrBase_Movimiento::Retonar_x(int indice)
{
	return arreglo[indice]->Retornar_x();
}
int ArrBase_Movimiento::Retonar_y(int indice)
{
	return arreglo[indice]->Retornar_y();
}
int ArrBase_Movimiento::Retonar_dx(int indice)
{
	return arreglo[indice]->Retornar_dx();
}
int ArrBase_Movimiento::Retonar_dy(int indice)
{
	return arreglo[indice]->Retornar_dy();
}
int ArrBase_Movimiento::Retonar_a(int indice)
{
	return arreglo[indice]->Retornar_a();
}
int ArrBase_Movimiento::Retonar_l(int indice)
{
	return arreglo[indice]->Retornar_l();
}
int ArrBase_Movimiento::Retonar_color(int indice)
{
	return arreglo[indice]->Retornar_color();
}

