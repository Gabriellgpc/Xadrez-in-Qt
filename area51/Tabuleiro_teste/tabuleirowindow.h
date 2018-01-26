#ifndef TABULEIROWINDOW_H
#define TABULEIROWINDOW_H

#include <QWidget>
#include <QPainter>

namespace Ui {
class TabuleiroWindow;
}

class TabuleiroWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TabuleiroWindow(QWidget *parent = 0);
    ~TabuleiroWindow();

protected:
    void paintEvent(QPaintEvent *event);
private:
    Ui::TabuleiroWindow *ui;
};

#endif // TABULEIROWINDOW_H
