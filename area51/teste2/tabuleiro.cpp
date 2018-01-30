#include "tabuleiro.h"
#include "ui_tabuleiro.h"
#include <QLabel>


Tabuleiro::Tabuleiro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabuleiro)
{
    ui->setupUi(this);

    QLabel *cell;
    bool alt = 1;

    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
           ui->tabuleiro->setCellWidget(i,j,new QLabel);
           cell = (QLabel*)ui->tabuleiro->cellWidget(i,j);
           if(alt)
               cell->setStyleSheet("QLabel{background : rgb(252,252,252)}");
           else
               cell->setStyleSheet("QLabel{background : rgb(139,59,54)}");
           alt = !alt;
           cell->setPixmap(QPixmap(":/new/imgs/imagens/bishop_black.svg"));
        }
        alt = !alt;
    }



}

Tabuleiro::~Tabuleiro()
{
    delete ui;
}
