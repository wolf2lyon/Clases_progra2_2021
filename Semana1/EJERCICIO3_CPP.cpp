
#include<iostream>
#include"Header.h"
#include  <ctime>
using namespace std;
int Menu()
{
	int opt;
	do
	{
		cout << "0.Salir" << endl;
		cout << "1.Generar las notas" << endl;
		cout << "2.Ordenar arreglo en forma ascendente" << endl;
		cout << "3.Imprimir el arreglo" << endl;
		cout << "4.Imprimir la frecuencia del arreglo" << endl;
		cout << "5.Borra los valores repetidos" << endl;
		cout << "Ingrese su opcion: "; cin >> opt;
	} while (opt < 0 || opt>5);
	return opt;
}
int main()
{
	int opt = Menu();
	int* arreglo;
	int n;
	int contador = 0;
	int* frecuencia;

	srand(time(NULL));
	while (opt != 0)
	{
		if (opt == 1) Generar_arreglo(arreglo, n);
		if (opt == 2)Ordenar_arreglo_en_fomra_ascendente(arreglo, n);
		if (opt == 3)
		{
			Listar_en_pantalla_las_notas(arreglo, n);
		}
		if (opt == 4)
		{
			Imprimir_arreglo_con_repeticiones(arreglo, frecuencia, contador, n);
		}
		if (opt == 5) subarreglo(arreglo, frecuencia, contador, n);
		opt = Menu();
	}

	return 0;
}


