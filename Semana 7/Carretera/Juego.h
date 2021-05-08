#pragma once
#include "Terrestre.h"
#include"Persona.h"
#include "ArrBase_Movimiento.h"
class Juego:public Terrestre
{
private:
	Persona*obj_persona;
	int ymeta;
	bool termino;
	bool termino2;
	bool gano;
	short frecuencia, cantvidas;
public:
	Juego();
	~Juego();
	void Iniciar(int MAXW, int MAXH);
	void Run(int MAXW, int MAXH);
	bool Colision(Base_Movimiento* obj1,
		Base_Movimiento* obj2);
	void Resumen();

};
