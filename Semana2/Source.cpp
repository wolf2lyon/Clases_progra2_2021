#include"Calculadora.h"
#include<iostream>
using namespace std;
int main()
{
	
	Calculadora* ob_casio = new Calculadora();
	int dato;
	cout << "Ingrese el primer numero: ";
	cin >> dato;
	ob_casio->Cambiar_valor_numero1(dato);
	cout << "Ingrese el segundo numero: ";
	cin >> dato;
	ob_casio->Cambiar_valor_numero2(dato);
	ob_casio->Cambiar_valor_numero2(dato);
	ob_casio->Suma();
	ob_casio->Resta();
	ob_casio->Multiplicar();
	ob_casio->Division();
	delete ob_casio;
	cout << endl;
	system("pause");

	return 0;
}