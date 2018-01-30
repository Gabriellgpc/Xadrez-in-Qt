#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <QWidget>

namespace Ui {
class Tabuleiro;
}

class Tabuleiro : public QWidget
{
    Q_OBJECT

public:
    explicit Tabuleiro(QWidget *parent = 0);
    ~Tabuleiro();

private:
    Ui::Tabuleiro *ui;
};

#endif // TABULEIRO_H
