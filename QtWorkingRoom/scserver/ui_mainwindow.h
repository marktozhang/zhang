/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *showinfo;
    QLabel *userinfo;
    QLabel *userinfo_num;
    QPushButton *openserver;
    QPushButton *closeserver;
    QTextEdit *Servertxt;
    QTextEdit *nip;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *receivetxt;
    QPushButton *sendinfo;
    QTextEdit *sendtxt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(642, 474);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        showinfo = new QTextEdit(centralWidget);
        showinfo->setObjectName(QStringLiteral("showinfo"));
        showinfo->setGeometry(QRect(110, 10, 251, 31));
        showinfo->setReadOnly(true);
        userinfo = new QLabel(centralWidget);
        userinfo->setObjectName(QStringLiteral("userinfo"));
        userinfo->setGeometry(QRect(30, 10, 54, 12));
        userinfo_num = new QLabel(centralWidget);
        userinfo_num->setObjectName(QStringLiteral("userinfo_num"));
        userinfo_num->setGeometry(QRect(120, 10, 54, 12));
        openserver = new QPushButton(centralWidget);
        openserver->setObjectName(QStringLiteral("openserver"));
        openserver->setGeometry(QRect(10, 110, 75, 23));
        closeserver = new QPushButton(centralWidget);
        closeserver->setObjectName(QStringLiteral("closeserver"));
        closeserver->setGeometry(QRect(20, 230, 75, 23));
        Servertxt = new QTextEdit(centralWidget);
        Servertxt->setObjectName(QStringLiteral("Servertxt"));
        Servertxt->setGeometry(QRect(110, 60, 251, 31));
        nip = new QTextEdit(centralWidget);
        nip->setObjectName(QStringLiteral("nip"));
        nip->setGeometry(QRect(110, 110, 251, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 71, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 300, 71, 16));
        receivetxt = new QTextEdit(centralWidget);
        receivetxt->setObjectName(QStringLiteral("receivetxt"));
        receivetxt->setGeometry(QRect(400, 10, 221, 391));
        sendinfo = new QPushButton(centralWidget);
        sendinfo->setObjectName(QStringLiteral("sendinfo"));
        sendinfo->setGeometry(QRect(150, 200, 93, 28));
        sendtxt = new QTextEdit(centralWidget);
        sendtxt->setObjectName(QStringLiteral("sendtxt"));
        sendtxt->setGeometry(QRect(120, 270, 104, 101));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 642, 26));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        userinfo->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", 0));
        userinfo_num->setText(QString());
        openserver->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", 0));
        closeserver->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", 0));
        label->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\216\245\345\217\227\346\266\210\346\201\257", 0));
        sendinfo->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\266\210\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
