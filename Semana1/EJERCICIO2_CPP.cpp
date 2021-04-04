
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
		cout << "2.Listar en pantalla las notas" << endl;
		cout << "3.Mostrar la mayor nota" << endl;
		cout << "4.Mostrar la menor nota" << endl;
		cout << "5.Mostrar la nota promedio" << endl;
		cout << "6.Mostrar el porcentaje de aprobados y desaprobados" << endl;
		cout << "7.Ordenar el arreglo en forma descendente"<<endl;
		cout << "Ingrese su opcion: "; cin >> opt;
	} while (opt < 0 || opt>7);
	return opt;
}
int main()
{
	int opt = Menu();
	int* arreglo;
	int n;
	srand(time(NULL));
	while (opt != 0)
	{
		if (opt == 1)
		{
			cout << "Ingrese la cantidad de alumnos: " << endl;
			cin >> n;
			arreglo = new int[n];
			Generar_arreglo(arreglo, n);
		}
		if (opt == 2) Listar_en_pantalla_las_notas(arreglo, n);
		if (opt == 3) Mostrar_mayor_nota(arreglo, n);
		if (opt == 4) Mostrar_menor_nota(arreglo, n);
		if (opt == 5) Mostrar_nota_promedio(arreglo, n);
		if (opt == 6) Mostrar_el_porcentaje_de_aprobados_y_desaprobados(arreglo, n);
		if (opt == 7) Ordenar_arreglo_en_fomra_descendente(arreglo, n);
		opt = Menu();
	}

	return 0;
}


