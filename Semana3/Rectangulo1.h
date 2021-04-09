#pragma once
#include<iostream>
using namespace std;
using namespace System;

class Rectangulo
{
public:
	Rectangulo();
	~Rectangulo();
	void borrar();
	void mostrar();
	void mover(int MAXW,int MAXH);
	void cambiar_x(int nuevovalor);
	void cambiar_y(int nuevovalor);
	void cambiar_l(int nuevovalor);
	void cambiar_a(int nuevovalor);

private:
	int x, y, l, a;
	int dx, dy;

};

