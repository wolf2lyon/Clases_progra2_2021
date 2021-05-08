#include<iostream>
#include "Base_Movimiento.h"
using namespace System;
using namespace std;

Base_Movimiento::Base_Movimiento() { eliminar = false; }
Base_Movimiento::~Base_Movimiento() {}

void Base_Movimiento::Borrar() {
	for (int c = x; c <= x + l; c++)
	{
		for (int f = y; f <= y + a; f++)
		{
			Console::SetCursorPosition(c, f);
			cout << " ";
		}

	}

}
void Base_Movimiento::Mover(int MAXW, int MAXH) {}
void Base_Movimiento::Mostrar() {}

void Base_Movimiento::Cambiar_x(int nuevo) { x = nuevo; }
void Base_Movimiento::Cambiar_y(int nuevo) { y = nuevo; }
void Base_Movimiento::Cambiar_dx(int nuevo) { dx = nuevo; }
void Base_Movimiento::Cambiar_dy(int nuevo) { dy = nuevo; }
void Base_Movimiento::Cambiar_a(int nuevo) { a = nuevo; }
void Base_Movimiento::Cambiar_l(int nuevo) { l = nuevo; }
void Base_Movimiento::Cambiar_color(int nuevo) { color = nuevo; }
int Base_Movimiento::Retornar_x() { return x; }
int Base_Movimiento::Retornar_y() { return y; }
int Base_Movimiento::Retornar_dx() { return dx; }
int Base_Movimiento::Retornar_dy() { return dy; }
int Base_Movimiento::Retornar_a() { return a; }
int Base_Movimiento::Retornar_l() { return l; }
int Base_Movimiento::Retornar_color() { return color; }

bool Base_Movimiento::Retornar_eliminar()
{
	return eliminar;
}
void Base_Movimiento::Cambiar_eliminar(bool nuevo)
{
	Borrar();
	eliminar = nuevo;
}