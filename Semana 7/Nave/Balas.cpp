#include "Balas.h"
#include<iostream>
#include<conio.h>
using namespace System;
using namespace std;
Balas::Balas():Base_Movimiento()
{
	a = 1;
	l = 1;

}

Balas::~Balas()
{
}
void Balas::Mostrar()
{
	Console::SetCursorPosition(x, y); cout << char(179);
}
void Balas::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (y + dy + a > MAXH) eliminar = true;
	if (!eliminar)
	{
		y += dy;
		Mostrar();
	}
}
