#pragma once

class Base_Movimiento
{
protected:
	int x, y, dx, dy, a, l, color;
public:
	Base_Movimiento();
	~Base_Movimiento();
	void Borrar();
	virtual void Mover(int MAXW, int MAXH);
	virtual void Mostrar();
	void Cambiar_x(int nuevo);
	void Cambiar_y(int nuevo);
	void Cambiar_dx(int nuevo);
	void Cambiar_dy(int nuevo);
	void Cambiar_a(int nuevo);
	void Cambiar_l(int nuevo);
	void Cambiar_color(int nuevo);
	int Retornar_x();
	int Retornar_y();
	int Retornar_dx();
	int Retornar_dy();
	int Retornar_a();
	int Retornar_l();
	int Retornar_color();
};
