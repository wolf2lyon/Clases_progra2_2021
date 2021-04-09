#include"Hormiga.h"


Hormiga::Hormiga()
{
	a = 3;
	l = 5;
	dx = dy = 1;
}

Hormiga::~Hormiga()
{
}
void Hormiga::Borrar()
{
	for(int c=x;c<=x+l;c++)
		for (int f = y; f <= y + a; f++)
		{
			Console::SetCursorPosition(c, f);
			cout << " ";
		}

}
void Hormiga::Mostrar()
{
	Console::SetCursorPosition(x,y);cout<<"\\(\")/";
	Console::SetCursorPosition(x, y + 1);cout<< "-( )-";
	Console::SetCursorPosition(x, y + 2);cout<< "/(_)\\";


}
void Hormiga::Mover(int MAXW,int MAXH)
{
	Borrar();
	if (x + dx<1 || x + dx + l>MAXW) dx = dx*-1;

	if (y + dy<1 || y + dy + a>MAXH) dy = dy*-1;
	x += dx;
	y += dy;
	Mostrar();

}
void Hormiga:: Cambiar_x(int nuevovalor) { x = nuevovalor; }
void Hormiga::Cambiar_y(int nuevovalor) { y = nuevovalor; }
void Hormiga::Cambiar_dy(int nuevovalor) { dy = nuevovalor; }
int Hormiga::Retornar_y() { return y; }