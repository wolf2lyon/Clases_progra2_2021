#include <iostream>
using namespace System;
using namespace std;
#include "Perro.h"
Perro::Perro()
{
    a = 6;
    l = 18;
}
Perro::~Perro() {}
void Perro::Mover(int MAXW, int MAXH)
{
    Borrar();
    if (x + dx<1 || x + dx + l>MAXW) dx = dx * -1;
    if (y + dy<1 || y + dy + a>MAXH) dy = dy * -1;
    x += dx;
    y += dy;
    Mostrar();
}
void Perro::Mostrar()
{
    Console::SetCursorPosition(x, y); cout << "           .-._";
    Console::SetCursorPosition(x, y + 1); cout << "           {_}^)o";
    Console::SetCursorPosition(x, y + 2); cout << "{\\________//~";
    Console::SetCursorPosition(x, y + 3); cout << " (         )";
    Console::SetCursorPosition(x, y + 4); cout << " /||~~~~~||\\";
    Console::SetCursorPosition(x, y + 5); cout << "|_\\\\_    \\\\_\\_";
}