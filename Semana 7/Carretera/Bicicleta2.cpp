#include "Bicicleta2.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
Bicicleta2::Bicicleta2() : Base_Movimiento()
{
	a = 2;
	l = 6;
	dy = 0;

}

Bicicleta2::~Bicicleta2()
{
}
void Bicicleta2::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx  < 1) eliminar = true;
	if (!eliminar)
	{
		x += dx;
		Mostrar();
	}

}
void Bicicleta2::Mostrar()
{
	Console::SetCursorPosition(x, y);cout << " /_..";
	Console::SetCursorPosition(x, y + 1); cout << "(o)(o)";

}


