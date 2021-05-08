#include <iostream>
#include "Terrestre.h"
#include"Juego.h"
using namespace System;
using namespace std;
int main()
{
	const int MAXW = 100;
	const int MAXH = 30;
	Console::SetWindowSize(MAXW, MAXH);
	Console::CursorVisible = false;

	Juego* obj = new Juego();
	obj->Iniciar(MAXW, MAXH);
	obj->Run(MAXW, MAXH);

	cout << endl;
	system("pause");
	delete obj;
	return 0;
}