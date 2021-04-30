#pragma once
#include<iostream>
using namespace System;
using namespace std;
class Llanta
{
public:
	Llanta();
	~Llanta();
	void Borrar();
	void Mostrar();
	void Mover(int MAXW, int MAXH);
	void Cambiar_x(int nuevo);
	void Cambiar_y(int nuevo);
	void Cambiar_dx(int nuevo);
	void Detener();

private:
	int x, y, dx, dy;

};


