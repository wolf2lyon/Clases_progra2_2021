#include<iostream>
#include "Header.h"
using namespace std;

/*
int Menu()
{
	int opt;
	do {
		cout << "0.Salir" << endl;
		cout<<"1.Insertar" << endl;
		cout << "2.Eliminar el ultimo" << endl;
		cout << "3.Eliminar el primero" << endl;
		cout << "4.Mostrar" << endl;
		cout << "5.Generar Aleatorios" << endl;
		cout << "6.Eliminar Toodos los pares" << endl;
		cout << "7.Insertar en posicion " << endl;
		cout << "Ingrese su opcion";
		cin >> opt;


	} while (opt < 0 || opt>6);
	return opt;
}



int main()
{
	int* arreglo;
	int* n_elementos= new int;
	*n_elementos = 0;
	int* dato = new int;
	int* posicion = new int;
	cout << "Ingrese el dato a guardar: ";
	cin >> *dato;

	 la palabra numero de elementos me esta 
	sirviendo para saber cuantos tengo y en que celda 
	voy a guadar mi ultimo elemento 
	int opt = Menu();
	while (opt != 0)
	{
		if (opt == 1) {
			cout << "Ingrese el dato a guardar: ";
			cin >> *dato;
			arreglo = Insertar(arreglo, n_elementos, dato);

		}
		if (opt == 2) arreglo = Eliminar_el_ultimo(arreglo, n_elementos);
		if (opt == 3) arreglo = Eliminar_el_primero(arreglo, n_elementos);
		if (opt == 4) Mostrar(arreglo, n_elementos);
		if (opt == 5) {
			*dato = 20; arreglo = Generar_numeros_aleatorios(arreglo, n_elementos, dato);
		}
		if (opt == 6) arreglo = Eliminar_Todos_los_Pares(arreglo, n_elementos);
		if (opt == 7) arreglo = Insertar_en_posicion(arreglo, n_elementos, dato, posicion);
		opt = Menu();
	}
	
	
	
	

	return 0;
}
*/
int Menu()
{
	int opt;
	do
	{
		cout << "0.Salir" << endl;
		cout << "1.Insertar" << endl;
		cout << "2.Eliminar ultimo" << endl;
		cout << "3.Eliminar primero" << endl;
		cout << "4.Mostrar" << endl;
		cout << "5.Generar numero aleatorio" << endl;
		cout << "6.Eliminar todos los pares" << endl;
		cout << "7.Insertar en posicion" << endl;
		cout << "8.Eliminar en posicion" << endl;
		cout << "9.Invertir arreglo" << endl;
		cout << "10.Mayor valor" << endl;
		cout << "11.Menor valor" << endl;
		cout << "12.Subarreglo" << endl;
		cout << "Ingresar opcion: "; cin >> opt;
	} while (opt < 0 || opt>12);
		return opt;
}
int main()
{
	int opt = Menu();
	int* arreglo;
	int* dato = new int;
	int* posicion = new int;
	int* posinicial = new int;
	int* posfinal = new int;
	int* n_elementos = new int; *n_elementos = 0;
	srand(time_t(0));
	while (opt != 0)
	{
		if (opt == 1)
		{
			cout << "Ingrese el dato : "; cin >> *dato;
			arreglo = Insertar(arreglo, n_elementos, dato);
		}
		if (opt == 2) arreglo = Eliminar_ultimo(arreglo, n_elementos);
		if (opt == 3)arreglo = Eliminar_primero(arreglo, n_elementos);
		if (opt == 4) Mostrar(arreglo, n_elementos);
		if (opt == 5)
		{
			*dato = 20; arreglo = Generar_aleatorio(arreglo, n_elementos,dato);
		}
		if (opt == 6) arreglo = Eliminar_todos_los_pares(arreglo, n_elementos);
		if (opt == 7)
		{
			cout << "Ingrese el dato " ; cin >> *dato;
			cout << "Ingrese la posicion " ; cin >> *posicion;
			arreglo = Insertar_en_posicion(arreglo, n_elementos, dato, posicion);
		}
		if (opt == 8)
		{
			cout << "Ingrese la posicion "; cin >> *posicion;
			arreglo = Eliminar_en_posicion(arreglo, n_elementos, posicion);
		}
		if (opt == 9)
		{
			arreglo = Invertir_Arreglo(arreglo,n_elementos);
		}
		if (opt == 10)
		{
			 Mayor(arreglo, n_elementos);
		}
		opt = Menu();
		if (opt == 11)
		{
			Menor(arreglo, n_elementos);
		}
		if (opt == 12)
		{
			cout << "Ingrese posicion inicial: "; cin >> *posinicial;
			cout << "Ingrese posicion final: "; cin >> *posfinal;
			cout << endl;

			arreglo=Subarreglo(arreglo, n_elementos, posinicial, posfinal);
		}
		
	}

	return 0;
}