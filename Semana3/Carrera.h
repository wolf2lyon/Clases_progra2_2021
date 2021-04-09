#pragma once
#include "ArrHormiga.h"
class Carrera
{
public:
	Carrera();
	~Carrera();
	void Inicio(int MAXW,int MAXH);
	void Run(int MAXW, int MAXH);
	void Dibujar_Meta();
	
private:
	int num_participantes;
	ArrHormiga* obj_participantes;
	int x, y, d;//meta
	bool ganador;
	int pos_ganador;

};

