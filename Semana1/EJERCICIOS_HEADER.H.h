#pragma once
#include<iostream>
#include"Header.h"
#include  <ctime>
using namespace std;

void Generar_arreglo(int*& arreglo,int &n)
{
   
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




void Guardar_numeros_no_repetidos(int*&arreglo,int*&frecuencia,int&contador,int&n)
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
            contador++;
        }
    }
    
}
void subarreglo(int *&arreglo,int*&frecuencia,int&contador,int&n,int*&auxiliar)
{
    
    auxiliar=new int[contador];
    int j = 0;
    for (int i = 0; i < 11; i++)
    {
        if (frecuencia[i] > 0)
        {
            auxiliar[j] = i;
            j++;
        }
    }
  
}
void  subarreglo2(int*& arreglo, int*& auxiliar, int R,int&contador,int&n)
{
    int* vector = new int[R * contador];
    int k=0;
    int j = 0;
    while (1)
    {
       
        if (k == contador) break;

        for (int i = j; i < j + R; i++)
        {
            vector[i] = auxiliar[k];
        }
        j = j + R;
        k++;
    }
    n = R * contador;
    arreglo = vector;
    cout << endl;
    cout << endl;
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