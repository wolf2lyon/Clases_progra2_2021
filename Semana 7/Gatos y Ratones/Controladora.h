#pragma once
#include <ctime>  
#include"iostream"
#include"ArrBase_Movimiento.h"
#include"Gato.h"
#include"Ratones.h"


class Controladora
{
public:
	Controladora();
	~Controladora();
	void Iniciar(int MAXW, int MAXH);
	void Run(int MAXW, int MAXH);
	bool Colision(Base_Movimiento* obj1, Base_Movimiento* obj2);
	bool Colision2(Base_Movimiento* obj1, Base_Movimiento* obj2);
	void Crear_Ratones(int MAXW, int MAXH);
	void Resumen();

private:
	Gato* obj_gato;
	ArrBase_Movimiento* obj_ratones;
	int ymeta;
	bool termino,colisiono;
	bool gano;
	short frecuencia, cantvidas;
	int contador,contador2;
	int n;
	int dez;

};
