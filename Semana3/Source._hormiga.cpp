#include<iostream>
#include<conio.h>
using namespace std;
#include"Carrera.h"
int main()

{
	Carrera* obj_carrera = new Carrera();
	    const int MAXW = 100;
		const int MAXH = 30;
		Console::SetWindowSize(MAXW, MAXH);
		Console::CursorVisible=false;
	    obj_carrera->Inicio(MAXW, MAXH);
		Console::SetCursorPosition(1, 1);
		cout << "Pulse S para iniciar la carrera";
		bool start = false;
		srand(time_t(0));
		while (!start)
		{
			if (kbhit())
			{
				char t = getch();
				if (toupper(t) == 'S')
				{
					obj_carrera -> Run(MAXW, MAXH);
					start = true;
				}

			}
		}
	cout << endl;
	system("pause");
	delete obj_carrera;
	return 0;
}


















//*#include"ArrRectangulo.h"
//*#include"ArrHormiga.h"
//*#include<conio.h>
//*
//*int main()
//*{
//*	ArrRectangulo* obj = new ArrRectangulo();
//*	ArrHormiga* obj_arrhormiga = new ArrHormiga();
//*	const int MAXW = 100;
//*	const int MAXH = 30;
//*	Console::SetWindowSize(MAXW, MAXH);
//*	Console::CursorVisible=false;
//*
//*	while (true)
//*	{
//*		if(kbhit())
//*		{
//*			char t = getch();
//*			if (toupper(t) == 'I')
//*				obj->insertar(MAXW, MAXH);
//*			if (toupper(t) == 'H')
//*				obj_arrhormiga->Insertar(MAXW, MAXH);
//*		}
//*		obj->mover_todos(MAXW, MAXH);
//*		obj_arrhormiga->Mover_Todos(MAXW, MAXH);
//*		_sleep(50);
//*	}
//*	delete obj;
//*	delete obj_arrhormiga;
//*}