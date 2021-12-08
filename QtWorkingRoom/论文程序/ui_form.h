/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *weight_oil;
    QLabel *label_6;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *weight_card;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_9;
    QLineEdit *yiniz;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *size;
    QLabel *label_8;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(1422, 751);
        Form->setStyleSheet(QLatin1String("background-color: rgb(85, 170, 127);\n"
"\n"
"\n"
""));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1110, 670, 111, 31));
        label_2->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1240, 670, 181, 81));
        label_4->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));
        weight_oil = new QLineEdit(Form);
        weight_oil->setObjectName(QStringLiteral("weight_oil"));
        weight_oil->setGeometry(QRect(1160, 710, 71, 41));
        weight_oil->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(1110, 710, 41, 41));
        label_6->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));
        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 670, 362, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_3);

        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        weight_card = new QLineEdit(widget);
        weight_card->setObjectName(QStringLiteral("weight_card"));
        weight_card->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(weight_card, 2, 3, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 35));
        label->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 4);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        yiniz = new QLineEdit(widget);
        yiniz->setObjectName(QStringLiteral("yiniz"));
        yiniz->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(yiniz, 2, 1, 1, 1);


        horizontalLayout->addWidget(widget);

        horizontalWidget_2 = new QWidget(Form);
        horizontalWidget_2->setObjectName(QStringLiteral("horizontalWidget_2"));
        horizontalWidget_2->setGeometry(QRect(374, 670, 731, 80));
        horizontalWidget_2->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(85, 170, 255);\n"
""));
        horizontalLayout_2 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(horizontalWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("border-right-style:none;"));

        horizontalLayout_2->addWidget(label_7);

        pushButton = new QPushButton(horizontalWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:1px;\n"
"background-color: rgb(85, 170, 255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:1px;\n"
"background-color: rgb(85, 170, 255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:1px;\n"
"background-color: rgb(85, 170, 255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(horizontalWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-style:solid;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:1px;\n"
"background-color: rgb(85, 170, 255);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_4);

        size = new QLineEdit(horizontalWidget_2);
        size->setObjectName(QStringLiteral("size"));
        size->setMaximumSize(QSize(100, 16777215));
        size->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(size);

        label_8 = new QLabel(horizontalWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-left-style:none;\n"
"border-color:rgb(32, 255, 39);\n"
"border-width:4px;\n"
"background-color: rgb(85, 170, 255);\n"
""));

        horizontalLayout_2->addWidget(label_8);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        label_2->setText(QApplication::translate("Form", "\346\266\210\350\200\227\347\237\251\351\230\265", 0));
        label_4->setText(QApplication::translate("Form", "\350\277\231\350\276\271\346\230\257\350\267\257\347\250\213\347\232\204\346\266\210\350\200\227\n"
"\346\225\264\346\225\260\345\275\242\345\274\217", 0));
        label_6->setText(QApplication::translate("Form", "\346\235\203\345\200\274", 0));
        label_3->setText(QApplication::translate("Form", "\350\277\231\350\276\271\346\230\2570.n\345\275\242\345\274\217", 0));
        label_5->setText(QApplication::translate("Form", "\346\235\203\345\200\274", 0));
        label->setText(QApplication::translate("Form", "    \345\240\265\350\275\246\346\246\202\347\216\207\347\237\251\351\230\265 ", 0));
        label_9->setText(QApplication::translate("Form", "\344\277\256\346\255\243\345\233\240\345\255\220", 0));
        label_7->setText(QString());
        pushButton->setText(QApplication::translate("Form", " \344\277\235\345\255\230\350\256\276\345\256\232\345\271\266\350\277\224\345\233\236  ", 0));
        pushButton_2->setText(QApplication::translate("Form", "\344\277\235\345\255\230\350\277\231\344\270\244\344\270\252\347\237\251\351\230\265", 0));
        pushButton_3->setText(QApplication::translate("Form", "\350\257\273\345\217\226\344\271\213\345\211\215\344\270\244\344\270\252\347\237\251\351\230\265", 0));
        pushButton_4->setText(QApplication::translate("Form", "\350\260\203\346\225\264\345\244\247\345\260\217", 0));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
