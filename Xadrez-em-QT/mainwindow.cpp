#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel *cell;
    bool alt = 0;

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
        }
        alt = !alt;
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}
