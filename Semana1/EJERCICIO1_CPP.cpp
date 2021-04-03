
#include<iostream>
#include"Header.h"
using namespace std;
int Menu()
{
	int opt;
	do
	{
		cout << "0.Salir" << endl;
		cout << "1.Buscar el mayor - mostrar ubicacion"<<endl;
			cout << "2.Buscar el menor - mostrar ubicacion"<<endl;
			cout << "3.Ordenar el arreglo en forma descendente"<<endl;
			cout << "4.Generar el arreglo con valores aleatorios "<<endl;	
			cout << "5.Mostrar el arreglo"<<endl;	
			cout << "Ingrese su opcion: "; cin >> opt;
	} while (opt < 0 || opt>5);
	return opt;

}

int main()
{
	int opt = Menu();
	int* arreglo;
	int n;
	srand(time_t(0));
	n = rand() % 101;
	while (opt != 0)
	{
		if (opt == 4) Generar(arreglo, n);
		if (opt == 5) Mostrar(arreglo, n);
		if (opt == 1) Buscar_el_mayor_mostrar_ubicacion(arreglo, n);
		if (opt == 2) Buscar_el_menor_mostrar_ubicacion(arreglo, n);
		if (opt == 3) Ordena_el_arreglo_en_forma_descendente(arreglo, n);
		opt = Menu();
	}
	return 0;
}