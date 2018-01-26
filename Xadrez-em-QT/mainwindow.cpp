#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    for(int i = 0; i < 8; i++)for(int j = 0; j < 8; j++)
    {
       ui->tabuleiro->setCellWidget(i,j,new );
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
