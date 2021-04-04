#pragma once
#include<iostream>
#include"Header.h"
#include  <ctime>
using namespace std;

void Generar_arreglo(int* arreglo, int n)
{
    for (int i = 0; i < n; i++)
    {
        arreglo[i] = rand() % 20;
    }

}
void Listar_en_pantalla_las_notas(int* arreglo, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << i << "\t" << arreglo[i] << endl;
    }

}
void Mostrar_mayor_nota(int* arreglo, int n)
{
    int menor = 0;
    int auxiliar=-1;
    for (int i = 0; i < n; i++)
    {
        if (auxiliar < arreglo[i])
            {
          
           auxiliar = arreglo[i];
     
          
            }
    }
    for (int i = 0; i < n; i++)
    {
        if (arreglo[i]==auxiliar)
        {
            cout << i << "\t" << arreglo[i] << endl;
        }

    }
    

}

void  Mostrar_menor_nota(int* arreglo, int n)
{
    int mayor = 0;
    int* auxiliar = new int[1];
    auxiliar[0] = 21;
    for (int i = 0; i < n; i++)
    {
        if (auxiliar[mayor] > arreglo[i])
            {
           auxiliar[mayor] = arreglo[i];
           
            }
    }
    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] == auxiliar[mayor])
        {
            cout << i << "\t" << arreglo[i] << endl;
        }

    }
 

}
void Mostrar_nota_promedio(int* arreglo, int n)
{
    int suma = 0;
    double promedio;
    for (int i = 0; i < n; i++)
    {
        suma += arreglo[i];
    }
    promedio = suma*1.0 / n;
    cout << "El promedio es: " << promedio<<endl;
    

}

void Mostrar_el_porcentaje_de_aprobados_y_desaprobados(int* arreglo, int n)
{
    double pro_des;
    double pro_apr;
    double n1;
    double n2;

    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] > 0 && arreglo[i] < 15) n1++;
        if (arreglo[i] > 14 && arreglo[i] < 21)n2++;
    }

    pro_des = (n1 * 1.0 / n) * 100;
    pro_apr = (n2 * 1.0 / n) * 100;
    cout << "El promedio de desaprobados: " << pro_des<<"%"<<endl;
    cout << "El promedio de aprobados: " << pro_apr<<"%"<<endl;
    

}

void Ordenar_arreglo_en_fomra_descendente(int* arreglo, int n)
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