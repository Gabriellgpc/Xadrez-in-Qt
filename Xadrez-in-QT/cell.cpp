#include "cell.h"

Cell::Cell(QWidget *parent) : QLabel(parent)
{
     this->peca = Peca::SEM_PECA;
     this->cor = SEM_PECA;
     this->clear();
}

void Cell::setPeca(Peca p, CorPeca c)
{
    this->peca = p;
    this->cor = c;
}
