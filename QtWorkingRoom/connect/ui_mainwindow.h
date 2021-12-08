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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *LineEdit_IP;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *LineEdit_FilePos;
    QPushButton *PushButton_ChooseFile;
    QPushButton *pushButton_InsertData;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *StatusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 9pt \"\344\273\277\345\256\213\";"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 40, 331, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        LineEdit_IP = new QLineEdit(verticalLayoutWidget);
        LineEdit_IP->setObjectName(QStringLiteral("LineEdit_IP"));

        horizontalLayout->addWidget(LineEdit_IP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        LineEdit_FilePos = new QLineEdit(verticalLayoutWidget);
        LineEdit_FilePos->setObjectName(QStringLiteral("LineEdit_FilePos"));

        horizontalLayout_2->addWidget(LineEdit_FilePos);

        PushButton_ChooseFile = new QPushButton(verticalLayoutWidget);
        PushButton_ChooseFile->setObjectName(QStringLiteral("PushButton_ChooseFile"));

        horizontalLayout_2->addWidget(PushButton_ChooseFile);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_InsertData = new QPushButton(centralWidget);
        pushButton_InsertData->setObjectName(QStringLiteral("pushButton_InsertData"));
        pushButton_InsertData->setGeometry(QRect(150, 200, 93, 28));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        StatusBar = new QStatusBar(MainWindow);
        StatusBar->setObjectName(QStringLiteral("StatusBar"));
        MainWindow->setStatusBar(StatusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_2->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200", 0));
        label->setText(QApplication::translate("MainWindow", "EXECL\346\226\207\344\273\266", 0));
        PushButton_ChooseFile->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        pushButton_InsertData->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\346\225\260\346\215\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
