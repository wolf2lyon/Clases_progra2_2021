#pragma once
#include<iostream>
using namespace System;
using namespace std;
class Hormiga
{
public:
	Hormiga();
	~Hormiga();
	void Borrar();
	void Mostrar();
	void Mover(int MAXW, int MAXH);
	void Cambiar_x(int nuevovalor);
	void Cambiar_y(int nuevovalor);
	void Cambiar_dy(int nuevovalor);
	int Retornar_y();

private:
	int x, y, a, l;
	int dx, dy;

};

