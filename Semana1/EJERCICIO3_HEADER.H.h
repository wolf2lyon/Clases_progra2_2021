#pragma once
#include<iostream>
#include"Header.h"
#include  <ctime>
using namespace std;

void Generar_arreglo(int*& arreglo,int &n)
{
    n = 21;
    arreglo = new int[n];


    for (int i = 0; i < n; i++)
    {
        arreglo[i] = rand() % 11;
    }

}
void Listar_en_pantalla_las_notas(int* &arreglo,int&n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "\t" << arreglo[i] << endl;
    }
    cout << endl;
    cout << endl;

}




void Imprimir_arreglo_con_repeticiones(int* &arreglo,int*&frecuencia,int&contador,int&n)
{
    frecuencia = new int[11];
    for (int i = 0; i < 11; i++)
    {
        frecuencia[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        frecuencia[arreglo[i]]++;
    }
    for (int i = 0; i < 11; i++)
    {
        if (frecuencia[i] > 0)
        {
            cout << i<< "\t" << frecuencia[i] << endl;
            contador++;
        }
    }
    
    cout << endl;
}
void subarreglo(int*&arreglo,int*&frecuencia,int&contador,int&n)
{
    
    int* auxiliar=new int[contador];
    int j = 0;
    for (int i = 0; i < 11; i++)
    {
        if (frecuencia[i] > 0)
        {
            auxiliar[j] = i;
            j++;
        }
    }
    n = contador;
    arreglo = auxiliar;
}



void Ordenar_arreglo_en_fomra_ascendente(int* &arreglo,int&n)
{
    int aux;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }

    }
}