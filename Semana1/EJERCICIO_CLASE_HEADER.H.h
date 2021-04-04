
#pragma once
#include<iostream>
#include "Header.h"
using namespace std;
int* Insertar(int* arreglo, int* n_elementos, int* dato)
{
	int* auxiliar = new int[*n_elementos];
	for (int i = 0; i < *n_elementos; i++)
	{
		auxiliar[i] = arreglo[i];
	}
	 arreglo = new int[*n_elementos + 1];
	arreglo[*n_elementos] = *dato;
	for (int i = 0; i < *n_elementos; i++)
	{
		arreglo[i] = auxiliar[i];
	}
	*n_elementos=*n_elementos+1;
	return arreglo;
}
int* Eliminar_ultimo(int* arreglo, int* n_elementos)
{
	int* auxiliar = new int[*n_elementos - 1];
	for (int i = 0; i < *n_elementos - 1; i++)
	{
		auxiliar[i] = arreglo[i];
	}
	*n_elementos=*n_elementos-1;
	return auxiliar;
}
int* Eliminar_primero(int* arreglo, int* n_elementos)
{
	int* auxiliar = new int[*n_elementos - 1];
	for (int i = 1; i < *n_elementos; i++)
	{
		auxiliar[i - 1] = arreglo[i];
	}
	*n_elementos=*n_elementos-1;
	return auxiliar;
}
void Mostrar(int* arreglo, int* n_elementos)
{
	for (int i = 0; i < *n_elementos; i++)
	{
		cout << arreglo[i] << "\t";
		
	}
	cout << endl;
}
int* Eliminar_todos_los_pares(int* arreglo, int* n_elementos)
{
	int contador;
	for (int i = 0; i < *n_elementos; i++)
	{
		if (arreglo[i] % 2 == 0) contador++;
	}
	int* auxiliar = new int[*n_elementos - contador];
	int j=0;
	for (int i = 0; i < *n_elementos; i++)
	{
		if (arreglo[i] % 2 != 0)
		{
			auxiliar[j] = arreglo[i];
			j++;
		}
	}
	*n_elementos = *n_elementos - contador;
	return auxiliar;
}
int* Generar_aleatorio(int* arreglo, int* n_elementos, int* cantidad)
{
	int *dato = new int;
	for (int i = 0; i < *cantidad; i++)
	{
		*dato = rand();
		arreglo = Insertar(arreglo, n_elementos, dato);
	}
	return arreglo;
}
int* Insertar_en_posicion(int* arreglo, int* n_elementos, int* dato, int* posicion)
{
	int* auxiliar = new int[*n_elementos + 1];
	for (int i = 0; i < *posicion; i++)
	{
		auxiliar[i] = arreglo[i];
	}
	auxiliar[*posicion] = *dato;
	for (int i = *posicion; i < *n_elementos; i++)
	{
		auxiliar[i+1] = arreglo[i];
	}
	*n_elementos = *n_elementos + 1;
	return auxiliar;
}
int* Eliminar_en_posicion(int* arreglo, int* n_elementos, int* posicion)
{
	int* auxiliar = new int[*n_elementos - 1];
	for (int i = 0; i < *posicion; i++)
	{
		auxiliar[i] = arreglo[i];
	}
	for (int i = *posicion + 1; i < *n_elementos; i++)
	{
		auxiliar[i - 1] = arreglo[i];
	}
	*n_elementos = *n_elementos - 1;
	return auxiliar;
}
int* Invertir_Arreglo(int* arreglo, int* n_elementos)
{
	int* auxiliar = new int[*n_elementos];
	int j;
	j = 0;
	for (int i = *n_elementos; i >=0; i--)
	{
		auxiliar[i-1] = arreglo[j];
		j++;
	}

	return auxiliar;

}
void Mayor(int* arreglo, int* n_elementos)
{
	int mayor = arreglo[0];
	for (int i = 0; i < *n_elementos; i++)
	{
		if (mayor < arreglo[i])
		{
			mayor = arreglo[i];
		}
	}
	cout << "El mayor valor es : " << mayor << endl;
}
void Menor(int*arreglo, int*n_elementos)
{
	int menor = arreglo[0];
	for (int i = 0; i < *n_elementos; i++)
	{
		if (menor > arreglo[i])
			menor = arreglo[i];
	}
	cout << "El menor valor es : " << menor << endl;
}
int* Subarreglo(int* arreglo, int* n_elementos, int* posinicial, int* posfinal)
{
	int* auxiliar = new int[*posfinal - *posinicial + 1];
	int j = 0;
	for (int i = *posinicial; i <= *posfinal; i++)
	{
		auxiliar[j] = arreglo[i];
		j++;
	}
	*n_elementos = *posfinal - *posinicial + 1;
	return auxiliar;
}