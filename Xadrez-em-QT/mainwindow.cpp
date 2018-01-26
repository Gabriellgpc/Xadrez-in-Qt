#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPainter>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    for(int i = 0; i < 8; i++)for(int j = 0; j < 8; j++)
    {
       ui->tabuleiro->setCellWidget(i,j,new QPixmap);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}
