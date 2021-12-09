/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *bit_conversion;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout;
    QWidget *SC;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchcondition;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(964, 677);
        bit_conversion = new QAction(MainWindow);
        bit_conversion->setObjectName(QStringLiteral("bit_conversion"));
        bit_conversion->setCheckable(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_2->addWidget(treeWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SC = new QWidget(centralWidget);
        SC->setObjectName(QStringLiteral("SC"));
        horizontalLayout = new QHBoxLayout(SC);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        searchcondition = new QLineEdit(SC);
        searchcondition->setObjectName(QStringLiteral("searchcondition"));

        horizontalLayout->addWidget(searchcondition);

        pushButton = new QPushButton(SC);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(SC);

        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QStringLiteral(""));
        tableWidget->horizontalHeader()->setMinimumSectionSize(26);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);

        verticalLayout->addWidget(tableWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 10);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 964, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(bit_conversion);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        bit_conversion->setText(QApplication::translate("MainWindow", "\350\277\233\345\210\266\350\275\254\345\214\226", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
