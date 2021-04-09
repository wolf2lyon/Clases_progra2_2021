#include"ArrRectangulo.h"
ArrRectangulo::ArrRectangulo()
{
	n_elementos = new int;
	*n_elementos = 0;
}
ArrRectangulo::~ArrRectangulo()
{
	for (int i = 0; i < *n_elementos; i++)
		delete arreglo[i];
	delete n_elementos;
}
void ArrRectangulo::insertar(int MAXW,int MAXH)
{
	Rectangulo** auxiliar = new Rectangulo * [*n_elementos];
	for (int i = 0; i < *n_elementos; i++)
	{
		auxiliar[i] = arreglo[i];
	}
	arreglo = new Rectangulo * [*n_elementos + 1];
	for (int i = 0; i < *n_elementos; i++)
	{
		arreglo[i] = auxiliar[i];
	}

	arreglo[*n_elementos] = new Rectangulo();
	arreglo[*n_elementos]->cambiar_a(5 + rand() % 6);
	arreglo[*n_elementos]->cambiar_l(5 + rand() % 8);

	arreglo[*n_elementos]->cambiar_x(5 + rand() % MAXW -4);
	arreglo[*n_elementos]->cambiar_y(5 + rand() % MAXH -4);

	*n_elementos = *n_elementos + 1;
	delete [] auxiliar;

}
void ArrRectangulo::mover_todos(int MAXW,int MAXH)
{
	for (int i = 0; i < *n_elementos; i++)
		arreglo[i]->mover(MAXW, MAXH);

}