
#include "conio.h"
#include"time.h"
#include"windows.h"
#include"iostream"
using namespace System;
using namespace std;
class Caracter
{
private://las caracteristicas del objeto de clase Caracter 
	int x;
	int y;
	int* dx;
	public:
		Caracter(void);//Constructor
		void AsignarX();
		void AsignarY();
		void Borrar();
		void Mostrar();
		void Mover();
		~Caracter(void);//Destructor
};
// Implementar la clase 
Caracter::Caracter(void)
{
	dx = new int;
	*dx = 1;
}
Caracter::~Caracter(void)
{
	delete dx;
}
void Caracter::AsignarX()
{
	x = 2 + rand() % 70;
}
void Caracter::AsignarY()
{
	y = 2 + rand() % 70;

}
void Caracter::Borrar()
{
	Console:: SetCursorPosition(x, y);
	cout << " ";

}
void Caracter::Mover()
{
	if (x + *dx < 0 || x + *dx>79)
		*dx = *dx *-1;
	x += *dx;
}
void Caracter::Mostrar()
{
	Console::SetCursorPosition(x, y);
	cout << (char)2;
}
//Funcion Principal
int main()
{
	Caracter* objCaracter;
	objCaracter = new Caracter();//Se instancia el objeto y se ejecutara el constructor
	
	// asignamos valor a los atributos
	objCaracter->AsignarX();
	objCaracter->AsignarY();
	while (true)
	{
		objCaracter->Borrar();
		objCaracter->Mover();
		objCaracter->Mostrar();
		Sleep(100);
	}
	
	
	
	
	return 0;
}