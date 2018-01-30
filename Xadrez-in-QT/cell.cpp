#include "cell.h"

Cell::Cell(QWidget *parent) : QLabel(parent)
{
     this->peca = Peca::SEM_PECA;
     this->cor = SEM_PECA;
     this->setPixmap(QPixmap(":/new/imgs/imagens/bishop_black.svg"));
}
