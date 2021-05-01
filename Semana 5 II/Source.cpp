#include"Carrera.h"
int main()
{
	const int MAXW = 100;
	const int MAXH = 30;
	Console::SetWindowSize(MAXW, MAXH);
	Carrera* objcarrera = new Carrera();
	char opt;
	objcarrera->Preparar_Carrera();
	do {
		objcarrera->Iniciar(MAXW, MAXH);
		objcarrera->Run(MAXW, MAXH);
		cout << "Desea otra carrera S/N: "<<endl;
		cin >> opt;
		if (toupper(opt) == 'S')
		{
			objcarrera->Preparar_Carrera();
			Console::Clear();
		}
		
	} while (toupper(opt)!='N');
	
	delete objcarrera;

}