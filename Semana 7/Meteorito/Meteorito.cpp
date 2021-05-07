#include<iostream>
#include "Meteorito.h"
using namespace System;
using namespace std;

Meteorito::Meteorito(): Base_Movimiento()
{
	dy = 1;
	dx = 0;
	a = 1;
	l = 1;
}

Meteorito::~Meteorito()
{
}
void Meteorito::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (y + dy + l > MAXH) eliminar = true;
	if (!eliminar)
	{
		y+= dy;
		Mostrar();

	}
}
void Meteorito::Mostrar()
{
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(x, y); cout << "*";
}
