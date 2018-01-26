#include "tabuleirowindow.h"
#include "ui_tabuleirowindow.h"

#include <QWidget>
using namespace std;

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

void TabuleiroWindow::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    paint.drawRect(0,0,100,100);
    paint.setBrush(Qt::blue);

    paint.drawPixmap(0,0,100,100,QPixmap("/tabuleiro.png"));
    Qwidget::paintEvent(event);
}
