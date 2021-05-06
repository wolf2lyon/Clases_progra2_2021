#include <iostream>
#include "Controladora.h"
using namespace System;
using namespace std;
int main()
{
	const int MAXW = 100;
	const int MAXH = 30;
	Console::SetWindowSize(MAXW, MAXH);
	Console::CursorVisible = false;

	Controladora* obj = new Controladora();
	obj->Iniciar(MAXW, MAXH);
	obj->Run(MAXW, MAXH);

	cout << endl;
	system("pause");
	delete obj;
	return 0;
}
/*#include <iostream>
#include <ctime>  
using namespace System;
using namespace std;
CONTROLADORA
int main()
{
	std::time_t tiempo_inicial = std::time(0);  // obtenemos el tiempo inicial frecuencia=0;  funcion INICIO
	FUNCION RUN
	while(true)
	{
		std::time_t tiempo = std::time(0);  // obtenemos el tiempo actualizado frecuencia++;
		int segundos= difftime( tiempo, tiempo_inicial);
		if (segundos >= 5) // 5 es la diferencia en segundos  frecuencia==10
		{
			tiempo_inicial = std::time(0); // frecuencia =0 obtenemos nuevamente el tiempo inicial para el siguiente calculo
		}
	}
	return 0;
}*/