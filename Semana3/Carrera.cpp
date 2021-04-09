#include"Carrera.h"

Carrera::Carrera()
{
	num_participantes = (2 + rand() % 4);
    obj_participantes = new ArrHormiga();
	x = 1;
	y = 5;
	d = 80;
	ganador = false;
	pos_ganador = -1;
}

Carrera::~Carrera()
{
	delete obj_participantes;
}
void Carrera::Inicio(int MAXW, int MAXH)
{
	int x_inicial = 1;
	for (int i = 0; i < num_participantes; i++)
	{
		obj_participantes->Insertar(MAXW, MAXH);
		obj_participantes->Cambiar_y(i, MAXH-4);
		obj_participantes->Cambiar_x(i, x_inicial);
		x_inicial += 6;
		obj_participantes->Cambiar_dy(i, (1 + rand() % 4) * -1);
	}
	Dibujar_Meta();
	obj_participantes->Mostrar_Todos(MAXW, MAXH);
}
void Carrera::Run(int MAXW, int MAXH)
{
	while (!ganador)
	{
		Dibujar_Meta();
		obj_participantes->Mover_Todos(MAXW, MAXH);
		_sleep(50);
		for(int i=0;i<num_participantes;i++)
			if (obj_participantes->Retornar_y(i) < y)
		{
				ganador = true;
				pos_ganador = i;
		}
		
	}
	Console::SetCursorPosition(10, 10);
	cout << "La hormiga ganadora es: " << pos_ganador;
	
}
void Carrera::Dibujar_Meta()
{
	for (int c = x; c <= x + d; c++)
	{
		Console::SetCursorPosition(c, y);
		cout << (char)219;
	}
}