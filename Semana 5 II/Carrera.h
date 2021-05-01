#pragma once
#include"ArrAuto.h"

class Carrera
{
public:
	Carrera();
	~Carrera();
	void Iniciar(int MAXW, int MAXH);
	void Run(int MAXW,int MAXH);
	void Dibujar_Meta();
	void Resumen();
	void Preparar_Carrera();

private:
	int cant_participantes;
	ArrAuto* obj_arr;
	int xmeta, ymeta, dmeta;
	int pos_ganador;
	bool ganador;


};



