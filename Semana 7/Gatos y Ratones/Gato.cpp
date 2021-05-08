#include "Gato.h"
#pragma once

using namespace System;
using namespace std;
Gato::Gato() :Base_Movimiento()
{
	a = 3;
	l = 5;
	dx = 0; dy = 0;
}

Gato::~Gato()
{
}
void Gato::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW || x + dx < 1) dx = 0;
	if (y + dy + a > MAXH|| y+dy<1 ) dy = 0;
	x += dx;
	y += dy;
	Mostrar();
}
void Gato::Mostrar() {
	Console::ForegroundColor = ConsoleColor::Green;

	Console::SetCursorPosition(x, y);   cout << " /\\_/\\";
	Console::SetCursorPosition(x, y+1); cout << " (o.o)";
	Console::SetCursorPosition(x, y+2); cout << "  >^<";

	Console::ForegroundColor = ConsoleColor::White;

}
void Gato::Cambiar_direccion(movimiento nuevo)
{
	direccion = nuevo;
	dx = dy = 0;
	if (direccion == movimiento::arriba)dy = -1;
	if (direccion == movimiento::abajo)dy = 1;
	if (direccion == movimiento::izquierda)dx = -1;
	if (direccion == movimiento::derecha)dx = 1;
}
movimiento Gato::Retornar_direccion() { return direccion; }




     
