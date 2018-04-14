#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tabuleiroWidget_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    game *Jogo;
};

#endif // MAINWINDOW_H
