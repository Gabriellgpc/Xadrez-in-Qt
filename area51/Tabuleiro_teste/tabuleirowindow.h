#ifndef TABULEIROWINDOW_H
#define TABULEIROWINDOW_H

#include <QWidget>

namespace Ui {
class TabuleiroWindow;
}

class TabuleiroWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TabuleiroWindow(QWidget *parent = 0);
    ~TabuleiroWindow();

private:
    Ui::TabuleiroWindow *ui;
};

#endif // TABULEIROWINDOW_H
