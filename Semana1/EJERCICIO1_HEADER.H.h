#pragma once
#include<iostream>
using namespace std;


void Generar(int *&arreglo, int &n)
{
	arreglo = new int[n];
	for (int i = 0; i < n; i++)
	{
		arreglo[i] = rand() % 10;
	}
}
void Mostrar(int*&arreglo, int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t" << arreglo[i] << endl;
	}
	

}
void Buscar_el_mayor_mostrar_ubicacion(int *& arreglo, int &n)
{
	int mayor = 0;
	for (int i = 0; i < n; i++)
	{
		if (arreglo[mayor] < arreglo[i])
		{
			mayor = i;
		}

	}
	cout << mayor << "\t" << arreglo[mayor] << endl;

}
void Buscar_el_menor_mostrar_ubicacion(int*&arreglo, int &n)
{
	int menor = 0;
	for (int i = 0; i < n; i++)
	{
		if (arreglo[menor] > arreglo[i])
		{
			menor = i;
		}
	}

	cout << menor << "\t" << arreglo[menor] << endl;
}
void Ordena_el_arreglo_en_forma_descendente(int*&arreglo, int &n)
{
	int aux;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arreglo[j] < arreglo[j + 1])
			{
				aux = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = aux;
			}
		}

	}

}
