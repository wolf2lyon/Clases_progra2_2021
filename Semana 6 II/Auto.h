#pragma once
#include "Base_Movimiento.h"
class Auto :
    public Base_Movimiento
{
public:
    Auto();
    ~Auto();
    void Mover(int MAXW, int MAXH);
    void Mostrar();

};
