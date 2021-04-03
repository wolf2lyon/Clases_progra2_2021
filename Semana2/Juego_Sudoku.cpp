
#include "conio.h"
#include"time.h"
#include"windows.h"
#include"iostream"
using namespace System;
using namespace std;
class CSudoku
{
	//Propiedades|Atributos
private:
	const short lado = 9;
	short** tablero;
	//Metodos|Funciones
public://Estas funciones interactuaran con el jugador
	CSudoku() { inicializarMatrizValores(); }
	~CSudoku() { liberarMemoriaMatriz(); }
	void mostrarTablero();
	void escribirNumero();
	bool continuarJuego();
private://Estas funciones seran internas del Sudoku para gestionar sus procesos
	void inicializarMatrizValores();
	void liberarMemoriaMatriz();
	bool validarDatosIngresados(short _N, short _x, short _y);
	bool validarRango(short _N, short _min, short _max);
};
void CSudoku::inicializarMatrizValores()
{
	//Indica que la matriz tendra 'lado' filas
	this->tablero = new short* [this->lado];
	//Para cada fila
	for (short i = 0; i <= this->lado; i++)
	{
		//Cada fila tendra 'lado' columnas
		this->tablero[i] = new short[this->lado];
		//Inicializando cada columna....
		for (short j = 0; j <= this->lado; j++)
			//... con valor 0
			this->tablero[i][j] = 0;
	}
}
void CSudoku::liberarMemoriaMatriz()
{
	//Recorriendo la matriz/tablero fila por fila para...
	for (short i = 0; i <= this->lado; i++)
	{
		//...disponibilizar la memoria ocupada por cada fila de la matriz
		delete[] this->tablero[i];
	}
	//Disponibiliza la memoria,apuntada por matrizValores,ocupada 
	//por el vector de puntos a alas filas 
	delete[]this->tablero;	
}
	//En caso el numero sea permitido se coloca en la matriz
void CSudoku::escribirNumero()
{
	short N, x, y;
	cout << "Ingrese" << endl;
	cout << "Numero: "; cin >> N;
	cout << "X: "; cin >> x;
	cout << "Y: "; cin >> y;
	x--; y--;//Cambiando de posicion a indice
	if (validarDatosIngresados(N, x, y))
		this->tablero[y][x] = N;
	else
	{
		cout << "Valores ingresados incorrectos." << endl;
		system("pause");
	}
}
//Si encuentra algun valor '0' en la matri<,continua jugando
bool CSudoku::continuarJuego()
{
	for (short i = 0; i < 9; i++)
		for (short j = 0; j < 9; j++)
			if (this->tablero [i][j] == 0)
				return true;
	//No hay mas casillas para llenar.
	cout << "Felicitaciones,lo has conseguido." << endl;
	return false;
}
void CSudoku::mostrarTablero()
{
	system("cls");//...
	for (short i = 0; i < 9; i++)
	{
		//Cada vez que el residuo del iterador 'i' con 3 resulte 0 imrpimimos una fila separada
		if (i % 3 == 0)cout << "+----+---+---+" << endl;
		for (short j = 0; j < 9; j++)
		{
			//Cada vez que el residuo del iterador 'j' con 3 resulte 0 imprimimos una columna
			if (j % 3 == 0)cout << "|";
			//Si el valor de la matriz es '0' imprime un'.'
			if (this->tablero[i][j] == 0) cout << ".";
			//Sino imprime el valor indicado en la matriz
			else cout << this->tablero[i][j];
		}
		//Imprime la ultima columna separadora
		cout << "|" << endl;
	}
	//Imprimimos la ultiuma fila separadora
	cout << "+---+---+---+" << endl;
}
bool CSudoku::validarDatosIngresados(short _N, short _x, short _y)
{
	//Si_N es 0, se acepta pues el usuario puede querer borrar un número escrito
	if (_N == 0)
		return true;
	if (_N > 0)
	{
		//Evaluamos que el número y las coordenadas no 
		//se encuentren fuera de los rangos permitidos 
		if (!(this->validarRango(_N, 1, 9) &&
			this->validarRango(_x, 0, this->lado - 1) &&
			this->validarRango(_y, 0, this->lado - 1)))
			return false;
		//Evaluamos que el número no seencuentre repetido en la misma fila
		for (short i = 0; i < 9; i++)
			if (i != _x && this->tablero[_y][i] == _N)
				return false;
		//Evaluamos que el número no se encuentre repetido en la misma fila
		for (short i = 0; i < 9; i++)
			if (i != _x && this->tablero[_y][i] == _N)
				return false;
		//Evaluamos que el número no se encuentre repetido en la misma columna
		for (short i = 0; i < 9; i++)
			if (i != _y && this->tablero[i][_x] == _N)
				return false;
		//Evaluando que el número no se encuentre repetido en la casilla
		short casillaX = (_x / 3) * 3;
		short casillaY = (_y / 3) * 3;
		for (short i = casillaX; i < casillaX + 3; i++)
			for (short j = casillaY; j < casillaY + 3; j++)
				if ((_x != i && _y != j) && this->tablero[_y][_x] == _N)
					return false;
	}
	//Si el numero es 0 o no se encuentra repetido,y lso parametros
	//estan dentro de los rangos permitidos , retorn "true"
	return true;

}
bool CSudoku::validarRango(short N, short min, short max)
{
	if (N >= min && N <= max)return true;
	else return false;
}
int main()
{
	CSudoku juego = CSudoku();
	do {
		juego.mostrarTablero();
		juego.escribirNumero();
	}while (juego.continuarJuego());
	return 0;
}


