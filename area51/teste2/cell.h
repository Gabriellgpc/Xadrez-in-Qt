#ifndef CELL_H
#define CELL_H

#include <QLabel>

enum class Peca {SEM_PECA, PEAO, TORRE, CAVALO, BISPO, REI, RAINHA};
enum CorPeca {SEM_PECA, PRETA, BRANCA};

class Cell : public QLabel
{
    Q_OBJECT
private:
    QPixmap pic;
    Peca peca;
    CorPeca cor;

public:
    explicit Cell(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // CELL_H
