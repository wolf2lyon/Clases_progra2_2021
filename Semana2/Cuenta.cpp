
#include<iostream>
#include"Header.h"
#include  <ctime>
#include  < conio.h >
#include<time.h>
using namespace std;
void main()
{
	CCuenta *obj;
	string nombre;
	cin >> nombre;
	int opc;
	cout << "desea hacer deposito inicial:(1 o 0)" << endl;
	cin >> opc;
	if (opc == 1)
	{
		float monto = 0;
		cin >> monto;
		obj = new CCuenta(nombre, monto);
	}
	else
	{
		obj = new CCuenta(nombre);
	}
	float monto = 0;
	bool terminar = true;
	while (terminar)
		{
				system("cls");
	    cout << "titular\tsaldo"<<endl;
		cout << obj->gettitular() << "\t" << obj->getmonto() << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:cin >> monto; if (obj->retiro(monto) == false) { cout << "FBI OPEN UP"; }break;
		case 2:cin >> monto; obj->deposito(monto); break;
		
		default:
			break;
		}
		_getch();
	}
	delete obj;


}





		
		
		
		
		
		
		
		
		
		





