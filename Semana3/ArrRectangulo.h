#pragma once
#include"Rectangulo.h"
class ArrRectangulo
{
public:
	ArrRectangulo();
	~ArrRectangulo();
	void insertar(int MXW, int MAXH);
	void mover_todos(int MXW, int MAXH);

private:
	int* n_elementos;
	Rectangulo** arreglo;
		// *arreglo dinamico
		//*guardara punteros de una clase(objetos)

};

