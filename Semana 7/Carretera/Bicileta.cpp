#include "Bicileta.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
Bicicleta::Bicicleta(): Base_Movimiento()
{
	    a = 2;
		l = 6;
		dy = 0;

}

Bicicleta::~Bicicleta()
{
}
void Bicicleta::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW) eliminar = true;
	if (!eliminar)
	{
		x += dx;
		Mostrar();
	}
	
}
void Bicicleta::Mostrar()
{
	Console::SetCursorPosition(x, y); cout << " .._\\";
	Console::SetCursorPosition(x, y + 1); cout << "(o)(o)";

}