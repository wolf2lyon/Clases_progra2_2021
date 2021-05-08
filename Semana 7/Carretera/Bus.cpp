#include "Bus.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
Bus::Bus() : Base_Movimiento()
{
	a = 4;
	l = 28;
	dy = 0;

}

Bus::~Bus()
{
}
void Bus::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx < 1) eliminar = true;
	if (!eliminar)
	{
		x += dx;
		Mostrar();
	}

}
void Bus::Mostrar()
{

	Console::SetCursorPosition(x, y); cout << "         ___________________";
	Console::SetCursorPosition(x, y+1); cout << "      _/_|[][][][][][][] |";
	Console::SetCursorPosition(x, y+2); cout << "    (                    |";
	Console::SetCursorPosition(x, y+3); cout << "     =--OO------------OO-=";
}




