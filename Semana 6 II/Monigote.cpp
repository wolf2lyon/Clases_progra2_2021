#include "Monigote.h"

using namespace System;
using namespace std;



Monigote::Monigote():Base_Movimiento()
{
	a = 2;
	l = 1;
	dx = 0; dy = 0;
}

Monigote::~Monigote()
{
}
void Monigote::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW || x + dx < 1) dx = 0;
	if (y + dy + a > MAXH) dy = 0;
	x += dx;
	y += dy;
	Mostrar();
}
void Monigote::Mostrar() {
	Console::SetCursorPosition(x, y); cout << "0";
	Console::SetCursorPosition(x, y + 1); cout << (char)197;
}
void Monigote::Cambiar_direccion(movimiento nuevo)
{
	direccion = nuevo;
	dx = dy = 0;
	if (direccion == movimiento::arriba)dy = -1;
	if (direccion == movimiento::abajo)dy = 1;
	if (direccion == movimiento::izquierda)dx = -1;
	if (direccion == movimiento::derecha)dx = 1;
}
movimiento Monigote::Retornar_direccion() { return direccion; }