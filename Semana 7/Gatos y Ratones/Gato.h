#pragma once
#include"iostream"
#include"Base_Movimiento.h"
public enum movimiento
{
	arriba, abajo, izquierda, derecha, ninguno
};

class Gato :public Base_Movimiento
{
public:
	Gato();
	~Gato();
	void Mover(int MAXW, int MAXH);
	void Mostrar();
	void Cambiar_direccion(movimiento nuevo);
	movimiento Retornar_direccion();

private:
	movimiento direccion;

};


