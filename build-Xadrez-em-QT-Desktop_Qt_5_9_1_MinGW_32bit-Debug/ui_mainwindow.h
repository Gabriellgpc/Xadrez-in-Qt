/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tabuleiro;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListView *listView;
    QTableWidget *tableLateral;
    QTableWidget *tableLateral_2;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(760, 600);
        MainWindow->setMinimumSize(QSize(740, 600));
        MainWindow->setMaximumSize(QSize(5000, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabuleiro = new QTableWidget(centralWidget);
        if (tabuleiro->columnCount() < 8)
            tabuleiro->setColumnCount(8);
        if (tabuleiro->rowCount() < 8)
            tabuleiro->setRowCount(8);
        tabuleiro->setObjectName(QStringLiteral("tabuleiro"));
        tabuleiro->setGeometry(QRect(0, 0, 500, 500));
        tabuleiro->setMinimumSize(QSize(500, 500));
        tabuleiro->setMaximumSize(QSize(500, 500));
        tabuleiro->setStyleSheet(QStringLiteral(""));
        tabuleiro->setFrameShape(QFrame::Box);
        tabuleiro->setFrameShadow(QFrame::Raised);
        tabuleiro->setLineWidth(1);
        tabuleiro->setRowCount(8);
        tabuleiro->setColumnCount(8);
        tabuleiro->horizontalHeader()->setVisible(false);
        tabuleiro->horizontalHeader()->setDefaultSectionSize(62);
        tabuleiro->horizontalHeader()->setHighlightSections(false);
        tabuleiro->horizontalHeader()->setMinimumSectionSize(62);
        tabuleiro->verticalHeader()->setVisible(false);
        tabuleiro->verticalHeader()->setDefaultSectionSize(62);
        tabuleiro->verticalHeader()->setHighlightSections(false);
        tabuleiro->verticalHeader()->setMinimumSectionSize(62);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(540, 20, 213, 205));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        listView = new QListView(layoutWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_2->addWidget(listView);

        tableLateral = new QTableWidget(centralWidget);
        if (tableLateral->columnCount() < 1)
            tableLateral->setColumnCount(1);
        if (tableLateral->rowCount() < 8)
            tableLateral->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableLateral->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableLateral->setItem(1, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableLateral->setItem(2, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableLateral->setItem(3, 0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableLateral->setItem(4, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableLateral->setItem(5, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableLateral->setItem(6, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableLateral->setItem(7, 0, __qtablewidgetitem7);
        tableLateral->setObjectName(QStringLiteral("tableLateral"));
        tableLateral->setGeometry(QRect(500, 0, 30, 500));
        tableLateral->setStyleSheet(QStringLiteral("background: rgb(160, 160, 160)"));
        tableLateral->setGridStyle(Qt::SolidLine);
        tableLateral->setRowCount(8);
        tableLateral->setColumnCount(1);
        tableLateral->horizontalHeader()->setVisible(false);
        tableLateral->horizontalHeader()->setDefaultSectionSize(30);
        tableLateral->horizontalHeader()->setHighlightSections(false);
        tableLateral->horizontalHeader()->setMinimumSectionSize(30);
        tableLateral->verticalHeader()->setVisible(false);
        tableLateral->verticalHeader()->setDefaultSectionSize(62);
        tableLateral->verticalHeader()->setHighlightSections(false);
        tableLateral->verticalHeader()->setMinimumSectionSize(62);
        tableLateral_2 = new QTableWidget(centralWidget);
        if (tableLateral_2->columnCount() < 8)
            tableLateral_2->setColumnCount(8);
        if (tableLateral_2->rowCount() < 1)
            tableLateral_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableLateral_2->setItem(0, 7, __qtablewidgetitem15);
        tableLateral_2->setObjectName(QStringLiteral("tableLateral_2"));
        tableLateral_2->setGeometry(QRect(0, 500, 500, 30));
        tableLateral_2->setFont(font);
        tableLateral_2->setLayoutDirection(Qt::LeftToRight);
        tableLateral_2->setAutoFillBackground(false);
        tableLateral_2->setStyleSheet(QStringLiteral("background : rgb(160, 160, 160)"));
        tableLateral_2->setGridStyle(Qt::SolidLine);
        tableLateral_2->setRowCount(1);
        tableLateral_2->setColumnCount(8);
        tableLateral_2->horizontalHeader()->setVisible(false);
        tableLateral_2->horizontalHeader()->setDefaultSectionSize(62);
        tableLateral_2->horizontalHeader()->setHighlightSections(false);
        tableLateral_2->horizontalHeader()->setMinimumSectionSize(62);
        tableLateral_2->verticalHeader()->setVisible(false);
        tableLateral_2->verticalHeader()->setDefaultSectionSize(30);
        tableLateral_2->verticalHeader()->setHighlightSections(false);
        tableLateral_2->verticalHeader()->setMinimumSectionSize(30);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(550, 260, 191, 231));
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        tabuleiro->raise();
        tableLateral->raise();
        tableLateral_2->raise();
        label_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 760, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Historico", Q_NULLPTR));

        const bool __sortingEnabled = tableLateral->isSortingEnabled();
        tableLateral->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableLateral->item(0, 0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableLateral->item(1, 0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableLateral->item(2, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableLateral->item(3, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableLateral->item(4, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableLateral->item(5, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableLateral->item(6, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableLateral->item(7, 0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        tableLateral->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = tableLateral_2->isSortingEnabled();
        tableLateral_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableLateral_2->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "      A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableLateral_2->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "      B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableLateral_2->item(0, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "      C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableLateral_2->item(0, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "      D", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableLateral_2->item(0, 4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "      E", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableLateral_2->item(0, 5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "      F", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableLateral_2->item(0, 6);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "      G", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableLateral_2->item(0, 7);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "      H", Q_NULLPTR));
        tableLateral_2->setSortingEnabled(__sortingEnabled1);

        label_2->setText(QApplication::translate("MainWindow", "Espa\303\247o para um Timer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
