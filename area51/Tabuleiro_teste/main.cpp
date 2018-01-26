#include "tabuleirowindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TabuleiroWindow w;
    w.show();

    return a.exec();
}
