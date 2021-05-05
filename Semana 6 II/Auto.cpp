#include<iostream>
#include"Auto.h"
using namespace std;
using namespace System;
Auto::Auto() : Base_Movimiento()
{
	dy = 0;
	dx = 1;
	a = 2;
	l = 10;

}

Auto::~Auto()
{
}
void Auto::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW) eliminar = true;
	if (!eliminar)
	{
		x += dx;
		Mostrar();

	}
}
void Auto::Mostrar() {
	Console::SetCursorPosition(x, y); cout << ".-'--`-._";
	Console::SetCursorPosition(x, y + 1); cout << "'-O---O--'";
}