#include "Carro.h"
#include"Base_Movimiento.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
Carro::Carro() : Base_Movimiento()
{
	a = 3;
	l = 13;
	dy = 0;

}

Carro::~Carro()
{
}
void Carro::Mover(int MAXW, int MAXH)
{
	Borrar();
	if (x + dx + l > MAXW) eliminar = true;
	if (!eliminar)
	{
		x += dx;
		Mostrar();
	}

}
void Carro::Mostrar()
{

	Console::SetCursorPosition(x, y);     cout << "______| ~\\_";
	Console::SetCursorPosition(x, y + 1); cout << "[_____| _ |-";
	Console::SetCursorPosition(x, y + 2); cout << "(_)   (_)";

}
   
