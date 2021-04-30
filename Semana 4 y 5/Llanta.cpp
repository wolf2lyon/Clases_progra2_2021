#include "Llanta.h"
Llanta::Llanta()
{
	dy = 0;
}

Llanta::~Llanta()
{
}
void Llanta::Borrar()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}
void Llanta::Mostrar()
{
	Console::SetCursorPosition(x, y);
	cout << (char)219;
}
void Llanta::Mover(int MAXW, int MAXH)
{
	Borrar();
	x += dx;
	Mostrar();
}
void Llanta::Cambiar_x(int nuevo) { x = nuevo; }
void Llanta::Cambiar_y(int nuevo) { y = nuevo; }
void Llanta::Cambiar_dx(int nuevo) { dx = nuevo; }
void Llanta::Detener()
{
	dx = 0;
}
