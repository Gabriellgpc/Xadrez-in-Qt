#include "tabuleirowindow.h"
#include "ui_tabuleirowindow.h"

TabuleiroWindow::TabuleiroWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TabuleiroWindow)
{
    ui->setupUi(this);
}

TabuleiroWindow::~TabuleiroWindow()
{
    delete ui;
}
