#include<iostream>
#include<conio.h>

#include "Controladora.h"
using namespace System;
using namespace std;
int main()
{
	const int MAXW = 100;
	const int MAXH = 30;
	Console::SetWindowSize(MAXW, MAXH);
	Controladora* obj = new Controladora();
	bool fin = false;
	while (!fin)
	{
		if (_kbhit())
		{
			char t = getch();
			if (toupper(t) == 'P' || toupper(t) == 'G')
				obj->Crear_Animales(t);
			if (toupper(t) == 'F')
				fin = true;
		}
		obj->Mover_Animales(MAXW, MAXH);
		_sleep(50);
	}
	delete obj;
	return 0;
}