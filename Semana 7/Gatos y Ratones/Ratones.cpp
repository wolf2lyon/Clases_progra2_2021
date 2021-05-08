#include "Ratones.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
Ratones::Ratones() : Base_Movimiento()
{
	a = 1;
	l = 7;

}

Ratones::~Ratones()
{
}
void Ratones::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW || x + dx < 1)dx = dx * -1;
	if (y + dy + a > MAXH || y + dy < 1)dy = dy * -1;
	if (!eliminar)
	{
		x += dx;
		y += dy;
		Mostrar();
	}

}
void Ratones::Mostrar()
{
	Console::ForegroundColor = ConsoleColor::DarkCyan;
	Console::SetCursorPosition(x, y); cout << "--(_c'>";


}


