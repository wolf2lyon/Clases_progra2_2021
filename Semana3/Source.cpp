#include"ArrRectangulo.h"
#include<conio.h>

int main()
{
	ArrRectangulo* obj = new ArrRectangulo();
	const int MAXW = 100;
	const int MAXH = 30;
	Console::SetWindowSize(MAXW, MAXH);
	Console::CursorVisible=false;

	while (true)
	{
		if(kbhit())
		{
			char t = getch();
			if (toupper(t) == 'I')
				obj->insertar(MAXW, MAXH);
		}
		obj->mover_todos(MAXW, MAXH);
		_sleep(50);
	}
	delete obj;
}