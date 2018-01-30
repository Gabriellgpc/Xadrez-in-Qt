#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <QWidget>
#include <cell.h>
namespace Ui {
class Tabuleiro;
}

class Tabuleiro : public QWidget
{
    Q_OBJECT

public:
    explicit Tabuleiro(QWidget *parent = 0);
    void organiza();
    ~Tabuleiro();

private:
    Ui::Tabuleiro *ui;
    Cell tab[8][8];
};

#endif // TABULEIRO_H
