#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Jogo = new game();
    Jogo->novo_jogo();

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Jogo;
}
