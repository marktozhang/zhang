/********************************************************************************
** Form generated from reading UI file 'window_main.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_MAIN_H
#define UI_WINDOW_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window_main
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton_changlogin;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_9;
    QListWidget *listWidget_user;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QListWidget *listWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_refresh_information;
    QLabel *label_8;
    QLabel *label_show_netstation;

    void setupUi(QWidget *window_main)
    {
        if (window_main->objectName().isEmpty())
            window_main->setObjectName(QStringLiteral("window_main"));
        window_main->resize(800, 600);
        gridLayout = new QGridLayout(window_main);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 50);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(window_main);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 1, 1, 1);

        label = new QLabel(window_main);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(window_main);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        pushButton_changlogin = new QPushButton(window_main);
        pushButton_changlogin->setObjectName(QStringLiteral("pushButton_changlogin"));

        gridLayout_2->addWidget(pushButton_changlogin, 0, 0, 1, 1);

        label_6 = new QLabel(window_main);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 1, 1, 1);

        label_2 = new QLabel(window_main);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_7 = new QLabel(window_main);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 20, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_9 = new QLabel(window_main);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_3->addWidget(label_9);

        listWidget_user = new QListWidget(window_main);
        listWidget_user->setObjectName(QStringLiteral("listWidget_user"));

        verticalLayout_3->addWidget(listWidget_user);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_11 = new QLabel(window_main);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11);

        listWidget_2 = new QListWidget(window_main);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        verticalLayout_4->addWidget(listWidget_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 50);
        pushButton_refresh_information = new QPushButton(window_main);
        pushButton_refresh_information->setObjectName(QStringLiteral("pushButton_refresh_information"));

        verticalLayout_2->addWidget(pushButton_refresh_information, 0, Qt::AlignLeft);

        label_8 = new QLabel(window_main);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_show_netstation = new QLabel(window_main);
        label_show_netstation->setObjectName(QStringLiteral("label_show_netstation"));

        verticalLayout_2->addWidget(label_show_netstation);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);

        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(window_main);

        QMetaObject::connectSlotsByName(window_main);
    } // setupUi

    void retranslateUi(QWidget *window_main)
    {
        window_main->setWindowTitle(QApplication::translate("window_main", "Form", 0));
        label_3->setText(QString());
        label->setText(QString());
        label_4->setText(QString());
        pushButton_changlogin->setText(QApplication::translate("window_main", "\345\210\207\346\215\242\347\231\273\345\275\225", 0));
        label_6->setText(QString());
        label_2->setText(QString());
        label_7->setText(QString());
        label_9->setText(QApplication::translate("window_main", "\345\234\250\347\272\277\344\272\272\346\225\260", 0));
        label_11->setText(QApplication::translate("window_main", "\344\272\247\345\223\201\346\225\260\351\207\217", 0));
        pushButton_refresh_information->setText(QApplication::translate("window_main", "\345\210\267\346\226\260", 0));
        label_8->setText(QString());
        label_show_netstation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class window_main: public Ui_window_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_MAIN_H
