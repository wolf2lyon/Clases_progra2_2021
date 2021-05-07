#include "Nave.h"
#include<iostream>
#include<conio.h>
using namespace System;
using namespace std;
Nave::Nave():Base_Movimiento()
{
    l = 17;
    a = 5;
    dy = 0;
    x = 1;
    y = 1;
    dx = 1;
}

Nave::~Nave()
{
}
void Nave::Mostrar()
{
    Console::SetCursorPosition(x,y); cout << "      .-""`""-.";
    Console::SetCursorPosition(x, y+1); cout << " _/`oOoOoOoOo`\\_";
    Console::SetCursorPosition(x, y+2); cout << "'.-=-=-=-=-=-=-.'";
    Console::SetCursorPosition(x, y+3); cout << " `-=.=-.-=.=-'";
    Console::SetCursorPosition(x, y+4); cout << "    ^  ^  ^";


}
void Nave::Mover(int MAXW, int MAXH)
{
    Borrar();
    if (x + dx + l > MAXW || x + dx < 1)dx = dx * -1;
    x += dx;
    Mostrar();
}