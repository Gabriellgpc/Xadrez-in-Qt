/********************************************************************************
** Form generated from reading UI file 'tabuleiro.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABULEIRO_H
#define UI_TABULEIRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tabuleiro
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tabuleiro;

    void setupUi(QWidget *Tabuleiro)
    {
        if (Tabuleiro->objectName().isEmpty())
            Tabuleiro->setObjectName(QStringLiteral("Tabuleiro"));
        Tabuleiro->resize(580, 580);
        Tabuleiro->setMinimumSize(QSize(560, 560));
        Tabuleiro->setMaximumSize(QSize(600, 600));
        gridLayout = new QGridLayout(Tabuleiro);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabuleiro = new QTableWidget(Tabuleiro);
        if (tabuleiro->columnCount() < 8)
            tabuleiro->setColumnCount(8);
        if (tabuleiro->rowCount() < 8)
            tabuleiro->setRowCount(8);
        tabuleiro->setObjectName(QStringLiteral("tabuleiro"));
        tabuleiro->setMinimumSize(QSize(0, 0));
        tabuleiro->setAutoScroll(true);
        tabuleiro->setRowCount(8);
        tabuleiro->setColumnCount(8);
        tabuleiro->horizontalHeader()->setVisible(false);
        tabuleiro->horizontalHeader()->setCascadingSectionResizes(false);
        tabuleiro->horizontalHeader()->setDefaultSectionSize(70);
        tabuleiro->horizontalHeader()->setHighlightSections(true);
        tabuleiro->verticalHeader()->setVisible(false);
        tabuleiro->verticalHeader()->setDefaultSectionSize(70);

        gridLayout->addWidget(tabuleiro, 0, 0, 1, 1);


        retranslateUi(Tabuleiro);

        QMetaObject::connectSlotsByName(Tabuleiro);
    } // setupUi

    void retranslateUi(QWidget *Tabuleiro)
    {
        Tabuleiro->setWindowTitle(QApplication::translate("Tabuleiro", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tabuleiro: public Ui_Tabuleiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABULEIRO_H
