#include "Chasis.h"
Chasis::Chasis()
{
	dy = 0;
}

Chasis::~Chasis()
{
}
void Chasis::Borrar()
{
	for (int c = x; c <= x + l; c++)
	{
		Console::SetCursorPosition(c, y);
		cout << " ";
	}
}
void Chasis::Mostrar()
{
	for (int c = x; c <= x + l; c++)
	{
		Console::SetCursorPosition(c, y);
		cout << (char)254;
	}
}
void Chasis::Mover(int MAXW, int MAXH)
{
	Borrar();
	x += dx;
	Mostrar();
}
void Chasis::Cambiar_x(int nuevo) { x = nuevo; }
void Chasis::Cambiar_y(int nuevo) { y = nuevo; }
void Chasis::Cambiar_dx(int nuevo) { dx = nuevo; }
void Chasis::Cambiar_l(int nuevo) { l = nuevo; }
void Chasis::Detener()
{
	dx = 0;
}