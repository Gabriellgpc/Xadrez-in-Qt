/********************************************************************************
** Form generated from reading UI file 'tabuleirowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABULEIROWINDOW_H
#define UI_TABULEIROWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabuleiroWindow
{
public:

    void setupUi(QWidget *TabuleiroWindow)
    {
        if (TabuleiroWindow->objectName().isEmpty())
            TabuleiroWindow->setObjectName(QStringLiteral("TabuleiroWindow"));
        TabuleiroWindow->resize(400, 300);

        retranslateUi(TabuleiroWindow);

        QMetaObject::connectSlotsByName(TabuleiroWindow);
    } // setupUi

    void retranslateUi(QWidget *TabuleiroWindow)
    {
        TabuleiroWindow->setWindowTitle(QApplication::translate("TabuleiroWindow", "TabuleiroWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TabuleiroWindow: public Ui_TabuleiroWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABULEIROWINDOW_H
