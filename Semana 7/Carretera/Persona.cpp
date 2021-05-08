#pragma once
#include "Persona.h"
using namespace System;
using namespace std;
Persona::Persona() :Base_Movimiento()
{
	a = 1;
	l = 1;
	dx = 0; dy = 0;
}

Persona::~Persona()
{
}
void Persona::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW || x + dx < 1) dx = 0;
	if (y + dy + a > MAXH) dy = 0;
	x += dx;
	y += dy;
	Mostrar();
}
void Persona::Mostrar() {
	Console::ForegroundColor=ConsoleColor::Green;
	Console::SetCursorPosition(x, y); cout << (char)254;
	Console::ForegroundColor = ConsoleColor::White;

}
void Persona::Cambiar_direccion(movimiento nuevo)
{
	direccion = nuevo;
	dx = dy = 0;
	if (direccion == movimiento::arriba)dy = -1;
	if (direccion == movimiento::abajo)dy = 1;
	if (direccion == movimiento::izquierda)dx = -1;
	if (direccion == movimiento::derecha)dx = 1;
}
movimiento Persona::Retornar_direccion() { return direccion; }