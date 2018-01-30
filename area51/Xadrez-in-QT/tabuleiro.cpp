#include "tabuleiro.h"
#include "ui_tabuleiro.h"

#include <QLabel>
#include <QDebug>

Tabuleiro::Tabuleiro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tabuleiro)
{
    ui->setupUi(this);

    //Cell *cell;
    bool alt = 1;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
           ui->tabuleiro->setCellWidget(i,j,&tab[i][j]);
           //cell = (Cell*)ui->tabuleiro->cellWidget(i,j);
           if(alt)
               tab[i][j].setStyleSheet("QLabel{background : rgb(252,252,252)}");
           else
               tab[i][j].setStyleSheet("QLabel{background : rgb(30,30,30)}");
           alt = !alt;
           //cell->setText("HEY");
           //cell->setPixmap(QPixmap(":/new/imgs/imagens/bishop_black.svg"));
        }
        alt = !alt;
    }
}

void Tabuleiro::organiza()
{   //organiza o tabuleiro
    for(int i=0;i<8;i++){
        tab[1][i].setPeca(Peca::PEAO,PRETA);
        tab[6][i].setPeca(Peca::PEAO,BRANCA);

    }
}

Tabuleiro::~Tabuleiro()
{
    delete ui;
}
