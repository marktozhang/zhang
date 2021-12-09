/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QWidget *searchbar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *sex;
    QLabel *label_3;
    QLineEdit *age;
    QLabel *label_2;
    QLineEdit *high;
    QLabel *label;
    QLineEdit *weight;
    QLabel *label_6;
    QLineEdit *detail;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1017, 767);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout->addWidget(treeWidget);

        verticalWidget = new QWidget(centralWidget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setMinimumSize(QSize(20, 0));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(7);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        searchbar = new QWidget(verticalWidget);
        searchbar->setObjectName(QStringLiteral("searchbar"));
        searchbar->setMinimumSize(QSize(0, 10));
        horizontalLayout_2 = new QHBoxLayout(searchbar);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(searchbar);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        name = new QLineEdit(searchbar);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout_2->addWidget(name);

        label_4 = new QLabel(searchbar);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        sex = new QLineEdit(searchbar);
        sex->setObjectName(QStringLiteral("sex"));

        horizontalLayout_2->addWidget(sex);

        label_3 = new QLabel(searchbar);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        age = new QLineEdit(searchbar);
        age->setObjectName(QStringLiteral("age"));

        horizontalLayout_2->addWidget(age);

        label_2 = new QLabel(searchbar);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        high = new QLineEdit(searchbar);
        high->setObjectName(QStringLiteral("high"));

        horizontalLayout_2->addWidget(high);

        label = new QLabel(searchbar);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        weight = new QLineEdit(searchbar);
        weight->setObjectName(QStringLiteral("weight"));

        horizontalLayout_2->addWidget(weight);

        label_6 = new QLabel(searchbar);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        detail = new QLineEdit(searchbar);
        detail->setObjectName(QStringLiteral("detail"));

        horizontalLayout_2->addWidget(detail);

        pushButton = new QPushButton(searchbar);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(searchbar);

        tableWidget = new QTableWidget(verticalWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(tableWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 20);

        horizontalLayout->addWidget(verticalWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1017, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\271\264\351\276\204", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\272\253\351\253\230", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\275\223\351\207\215", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "\346\217\217\350\277\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
