#include"Rectangulo.h"
Rectangulo::Rectangulo()
{
	dx = dy = 1;
}
Rectangulo::~Rectangulo()
{

}
void Rectangulo::borrar()
{
	for (int c = x; c <= x + l; c++)
	{
		for (int f = y; f <= y + a; f++)
		{
			Console::SetCursorPosition(c, f);
			cout << " ";

		}
	}

}
void Rectangulo::mostrar()
{
	for (int c=x;c<=x+l;c++)
	{
		for (int f=y;f<y+a;f++)
		{
			Console::SetCursorPosition(c, f);
			cout << "*";

		}

	}
}
void Rectangulo::mover(int MAXW, int MAXH)
{
	borrar();
	if (x + dx<1 || x + dx + l>MAXW) dx = dx * -1;
	if (y + dy<1 || y + dy + a>MAXH) dy = dy * -1;
	x += dx;
	y += dy;
	mostrar();
}
void Rectangulo::cambiar_x(int nuevovalor)
{
	x = nuevovalor;
}
void Rectangulo::cambiar_y(int nuevovalor)
{
	y = nuevovalor;
}
void Rectangulo::cambiar_l(int nuevovalor)
{
	l = nuevovalor;
}
void Rectangulo::cambiar_a(int nuevovalor)
{
	a = nuevovalor;
}
