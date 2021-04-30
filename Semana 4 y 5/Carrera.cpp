#include "Carrera.h"
Carrera::Carrera()
{
	cant_participantes = 0;
}

Carrera::~Carrera()
{
	delete obj_arr;
}
void Carrera::Iniciar(int MAXW, int MAXH)
{
	xmeta = MAXW - 7;
	ymeta = 1;
	dmeta = MAXH;
	ganador = false;
	pos_ganador = -1;
	int yinicial = 2;
	for (int i = 0; i < cant_participantes; i++)
	{
		obj_arr->Insertar();
		obj_arr->Cambiar_x(i,2);
		obj_arr->Cambiar_y(i,yinicial);
		obj_arr->Cambiar_dx(i,1+rand()%2);
		yinicial += 4;
	}
	obj_arr->Mostrar_todos();
	Dibujar_Meta();
}
void Carrera::Run(int MAXW, int MAXH)
{
	while (!ganador)
	{
		obj_arr->Mover_todos(MAXW , MAXH);
		_sleep(50);
		for (int i = 0; i < cant_participantes; i++)
		{
			if (obj_arr->RetornarXmasL(i) >= xmeta)
			{
				ganador = true;
				pos_ganador = i;
			}
		}
	}
	Resumen();
}
void Carrera::Dibujar_Meta()
{
	for (int f = ymeta; f <= dmeta; f++)
	{
		Console::SetCursorPosition(xmeta, f);
		cout << (char)221;

	}

}
void Carrera::Resumen()
{
	Console::SetCursorPosition(10, 10);
	cout << "El ganador fue el competidor nro: " << pos_ganador<<endl;
}
void Carrera::Preparar_Carrera()
{
	if (cant_participantes != 0)
		delete obj_arr;

	cant_participantes = 5 + rand() % 3;
	obj_arr = new ArrAuto();
}