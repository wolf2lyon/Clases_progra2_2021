#include "ArrAuto.h"
ArrAuto::ArrAuto()
{
	n_elementos = new int;
	*n_elementos = 0;
}

ArrAuto::~ArrAuto()
{
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete[]arreglo;
	delete n_elementos;
}
void ArrAuto::Insertar()
{
	Auto** auxiliar = new Auto * [*n_elementos];
	for (int i = 0; i < *n_elementos; i++)
		auxiliar[i] = arreglo[i];
	arreglo = new Auto * [*n_elementos+1];
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i] = auxiliar[i];
	arreglo[*n_elementos] = new Auto();
	*n_elementos = *n_elementos + 1;
}
void ArrAuto::Mostrar_todos()
{

	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Mostrar();
}
void ArrAuto::Mover_todos(int MAXW, int MAXH)
{

	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Mover(MAXW,MAXH);
}
void ArrAuto::Detener_todos()
{
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Detener();
}
void ArrAuto::Cambiar_x(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_x(nuevo);
}
void ArrAuto::Cambiar_dx(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_dx(nuevo);
}
void ArrAuto::Cambiar_y(int indice, int nuevo)
{
	arreglo[indice]->Cambiar_y(nuevo);
}
int ArrAuto::RetornarXmasL(int indice)
{
	return arreglo[indice]->Retornar_x() + arreglo[indice]->Retornar_l();
}
