
#include<iostream>
#include"Header.h"
#include  <ctime>
#include  < conio.h >
using namespace std;

int main()
{
	int* arreglo;
	int n;
	int contador = 0;
	int* frecuencia;
	int* auxiliar;
	int R;

	srand(time(NULL));
	do
	{
		cout << "Ingrese el numero del arreglo : ";
		cin >> n;
	} while (n < 10 || n > 30);
	Generar_arreglo(arreglo, n);
	Listar_en_pantalla_las_notas(arreglo, n);
	cout << "Valores ordenados"<<endl;
	cout << endl;
	Ordenar_arreglo_en_fomra_ascendente(arreglo, n);
	Listar_en_pantalla_las_notas(arreglo, n);
		
	do
	{
		cout << "Ingrese el numero R: ";
		cin >> R;

	} while (R < 2 || R>5);
		Guardar_numeros_no_repetidos(arreglo, frecuencia, contador, n);
		subarreglo(arreglo, frecuencia, contador, n, auxiliar);
		subarreglo2(arreglo, auxiliar, R, contador, n);
		Listar_en_pantalla_las_notas(arreglo, n);
		_getch();
	return 0;
}


