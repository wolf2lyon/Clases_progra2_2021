#pragma once
#include"ArrBase_Movimiento.h"
#include"Bicicleta2.h"
#include"Bicileta.h"
#include"Bus.h"
#include"Carro.h"
class Terrestre
{
public:
	Terrestre();
	~Terrestre();
	void Crear_Vehiculos(int MAXW,int MAXH);
	int Retornar_variante();

protected:
	ArrBase_Movimiento* obj_terrestre;
	int carro, b1, b2, bus;
	int variante2;
	int variante;

};



