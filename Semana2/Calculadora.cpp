#include "Calculadora.h"
#include<iostream>
using namespace std;
Calculadora::Calculadora()
{
	numero1 = numero2 = 0;
}
Calculadora::~Calculadora()
{

}
void Calculadora::Suma() {
	cout << "La suma es: " << numero1 + numero2 << endl;

}
void Calculadora::Resta() {
	cout << "La resta es : " << numero1 - numero2 << endl;

}
void Calculadora::Multiplicar() {
	cout << "La multiplicacion es : " << numero1 * numero2 << endl;

}
void Calculadora::Division() {
	if (numero2 != 0)
	{
		cout << "La division es : " << numero1 / numero2 << endl;

	}
	else {
		cout << "Error - Division entre 0 ";
	}
}
void Calculadora::Cambiar_valor_numero1(int nuevovalor)
{
	numero1 = nuevovalor;
}
void Calculadora::Cambiar_valor_numero2(int nuevovalor)
{
	numero2 = nuevovalor;
}
int  Calculadora::Retornar_valor_numero1()
{
	return numero1;
}
int Calculadora::Retornar_valor_numero2()
{
	return numero2;
}

