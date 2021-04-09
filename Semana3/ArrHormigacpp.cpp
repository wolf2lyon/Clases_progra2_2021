#include"ArrHormiga.h"
ArrHormiga::ArrHormiga()
{
	n_elementos = new int;
	*n_elementos = 0;
}

ArrHormiga::~ArrHormiga()
{
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete n_elementos;
}

void ArrHormiga::Insertar(int MAXW, int MAXH)
{
	Hormiga** auxiliar = new Hormiga * [*n_elementos];
	for (int i = 0; i < *n_elementos; i++)
		auxiliar[i] = arreglo[i];
	arreglo = new Hormiga * [*n_elementos + 1];
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i] = auxiliar[i];
	arreglo[*n_elementos] = new Hormiga();
	arreglo[*n_elementos]->Cambiar_x(1 + rand() % (MAXW - 6));
	arreglo[*n_elementos]->Cambiar_y(1 + rand() % (MAXH - 4));
	*n_elementos = *n_elementos + 1;
}
void ArrHormiga::Mover_Todos(int MAXW, int MAXH)
{
	for (int i = 0; i < * n_elementos; i++)
		arreglo[i]->Mover(MAXW, MAXH);
}
void ArrHormiga::Cambiar_x(int indice, int nuevovalor)
{
	arreglo[indice]->Cambiar_x(nuevovalor);
}
void ArrHormiga::Cambiar_y(int indice, int nuevovalor)
{
	arreglo[indice]->Cambiar_y(nuevovalor);
}
void ArrHormiga::Cambiar_dy(int indice, int nuevovalor)
{
	arreglo[indice]->Cambiar_dy(nuevovalor);
}
int ArrHormiga::Retornar_y(int indice)
{
	return arreglo[indice]->Retornar_y();
}
void ArrHormiga::Mostrar_Todos(int MAXW, int MAXH)
{
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->Mostrar();
}
