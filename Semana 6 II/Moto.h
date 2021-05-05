#pragma once
#include "Base_Movimiento.h"
class Moto : public Base_Movimiento
{
public:
    Moto();
    ~Moto();
    void Mover(int MAXW, int MAXH);
    void Mostrar();

};

