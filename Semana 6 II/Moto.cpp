#include <iostream>
#include "Moto.h"
using namespace System;
using namespace std;
Moto::Moto() :Base_Movimiento()
{
	dy = 0;
	dx = -1;
	a = 2;
	l = 6;
}
Moto::~Moto() {}
void Moto::Mover(int MAXW, int MAXH) {
	Borrar();
	if (x + dx < 1) eliminar = true;
	if (!eliminar)
	{
		x += dx;
		Mostrar();
	}
}
void Moto::Mostrar() {
	Console::SetCursorPosition(x, y); cout << "/_..";
	Console::SetCursorPosition(x, y + 1); cout << "(o)(o)";
}