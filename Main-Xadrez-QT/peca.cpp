#include "peca.h"



Peca::Peca(TIPOPECA tipo, COR cor)
{
    this->tipo = tipo;
    this->cor = cor;
}

int Peca::getTipo()
{
    return this->tipo;
}

void Peca::setTipoCor(TIPOPECA tipo, COR cor)
{
    this->tipo = tipo;
    this->cor = cor;
}
