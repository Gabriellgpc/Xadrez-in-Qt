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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
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
    QTableView *tableViewHistorico;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QTableView *viewChat;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonEnviar;
    QLineEdit *lineEditMensagem;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(740, 600);
        MainWindow->setMinimumSize(QSize(740, 600));
        MainWindow->setMaximumSize(QSize(740, 600));
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
        tabuleiro->setFrameShape(QFrame::Box);
        tabuleiro->setFrameShadow(QFrame::Raised);
        tabuleiro->setLineWidth(1);
        tabuleiro->setRowCount(8);
        tabuleiro->setColumnCount(8);
        tabuleiro->horizontalHeader()->setVisible(true);
        tabuleiro->horizontalHeader()->setDefaultSectionSize(62);
        tabuleiro->horizontalHeader()->setHighlightSections(false);
        tabuleiro->horizontalHeader()->setMinimumSectionSize(62);
        tabuleiro->verticalHeader()->setVisible(false);
        tabuleiro->verticalHeader()->setDefaultSectionSize(62);
        tabuleiro->verticalHeader()->setHighlightSections(false);
        tabuleiro->verticalHeader()->setMinimumSectionSize(62);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(520, 20, 213, 205));
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

        tableViewHistorico = new QTableView(layoutWidget);
        tableViewHistorico->setObjectName(QStringLiteral("tableViewHistorico"));
        tableViewHistorico->setMinimumSize(QSize(211, 181));
        tableViewHistorico->setMaximumSize(QSize(211, 181));

        verticalLayout_2->addWidget(tableViewHistorico);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(520, 240, 216, 261));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        viewChat = new QTableView(layoutWidget1);
        viewChat->setObjectName(QStringLiteral("viewChat"));
        viewChat->setMinimumSize(QSize(214, 228));
        viewChat->setMaximumSize(QSize(214, 228));

        verticalLayout->addWidget(viewChat);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ButtonEnviar = new QPushButton(layoutWidget1);
        ButtonEnviar->setObjectName(QStringLiteral("ButtonEnviar"));

        horizontalLayout->addWidget(ButtonEnviar);

        lineEditMensagem = new QLineEdit(layoutWidget1);
        lineEditMensagem->setObjectName(QStringLiteral("lineEditMensagem"));

        horizontalLayout->addWidget(lineEditMensagem);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        tabuleiro->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 740, 21));
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
        ButtonEnviar->setText(QApplication::translate("MainWindow", "enviar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
