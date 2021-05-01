#include <iostream>
using namespace System;
using namespace std;
#include "Gato.h"

Gato::Gato() {
	a = 8;
	l = 13;
}
Gato::~Gato() {

}
void Gato::Mover(int MAXW, int MAXH) {
	Borrar();
	if (x + dx<1 || x + dx + l>MAXW) dx = dx * -1;
	x += dx;
	Mostrar();
}
void Gato::Mostrar()
{
	Console::SetCursorPosition(x, y); cout << ".       .";
	Console::SetCursorPosition(x, y + 1); cout << " \\`-\"'\"-' /";
	Console::SetCursorPosition(x, y + 2); cout << " } 6 6 {";
	Console::SetCursorPosition(x, y + 3); cout << "=.  Y  ,=";
	Console::SetCursorPosition(x, y + 4); cout << "  /^^^\\  .";
	Console::SetCursorPosition(x, y + 5); cout << " /     \\  )";
	Console::SetCursorPosition(x, y + 6); cout << "(  )-(  )/";
	Console::SetCursorPosition(x, y + 7); cout << " \"\"   \"\"";

}