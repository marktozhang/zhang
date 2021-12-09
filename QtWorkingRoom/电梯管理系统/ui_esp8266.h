/********************************************************************************
** Form generated from reading UI file 'esp8266.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESP8266_H
#define UI_ESP8266_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_esp8266
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *minwindow;
    QPushButton *closewindow;
    QWidget *widget_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_5;
    QWidget *widget_6;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QListWidget *listWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addnewdevice;
    QPushButton *pushButton;
    QPushButton *renew;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *addnewdevice_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QListWidget *listWidget_DTU;
    QWidget *tab_3;

    void setupUi(QWidget *esp8266)
    {
        if (esp8266->objectName().isEmpty())
            esp8266->setObjectName(QStringLiteral("esp8266"));
        esp8266->resize(912, 667);
        esp8266->setCursor(QCursor(Qt::ArrowCursor));
        esp8266->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        verticalLayout = new QVBoxLayout(esp8266);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 0, 0);
        widget = new QWidget(esp8266);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background-color: rgb(71, 214, 105);"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(100, 0, 0);"));

        horizontalLayout_2->addWidget(label);

        minwindow = new QPushButton(widget_2);
        minwindow->setObjectName(QStringLiteral("minwindow"));
        minwindow->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"	border-style:none;\n"
"	background-color: rgb(100, 0, 0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgba(255, 85, 0,255);\n"
"}\n"
"\n"
""));

        horizontalLayout_2->addWidget(minwindow);

        closewindow = new QPushButton(widget_2);
        closewindow->setObjectName(QStringLiteral("closewindow"));
        closewindow->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"	border-style:none;\n"
"	background-color: rgb(100, 0, 0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgba(255, 85, 0,255);\n"
"}\n"
""));

        horizontalLayout_2->addWidget(closewindow);

        horizontalLayout_2->setStretch(0, 16);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: rgb(100, 0, 0);\n"
"}"));

        verticalLayout_3->addWidget(widget_3);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);

        verticalLayout->addWidget(widget);

        tabWidget = new QTabWidget(esp8266);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("#tab_2:selected\n"
"{\n"
"	\n"
"	background-color: rgba(100, 0, 0, 100);\n"
"}\n"
"\n"
"#tab_2:selected\n"
"{\n"
"	\n"
"	background-color: rgba(100, 0, 0, 100);\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setIconSize(QSize(200, 100));
        tabWidget->setDocumentMode(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QLatin1String("\n"
"background-color: rgba(0, 0, 100, 100);"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(tab);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QStringLiteral(""));
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(10, 110, 831, 80));
        widget_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 30, 72, 15));
        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(320, 30, 72, 15));
        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(560, 30, 72, 15));
        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(140, 30, 72, 15));
        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 40, 93, 28));
        pushButton_3 = new QPushButton(widget_5);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 40, 93, 28));
        lineEdit_2 = new QLineEdit(widget_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(420, 40, 181, 41));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        listWidget = new QListWidget(widget_5);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 240, 831, 321));
        listWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(widget_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setStyleSheet(QStringLiteral("background-color: rgba(100, 0, 0, 100);"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalWidget = new QWidget(tab_2);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addnewdevice = new QPushButton(horizontalWidget);
        addnewdevice->setObjectName(QStringLiteral("addnewdevice"));
        addnewdevice->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgb(0, 170, 255);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
" }\n"
"                 \n"
"\n"
"               \n"
"QPushButton:hover\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgba(0, 170, 255,200);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
" background-color:rgb(204 , 228 , 247);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
"\n"
"   \n"
"}"));

        horizontalLayout_3->addWidget(addnewdevice);

        pushButton = new QPushButton(horizontalWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgb(0, 170, 255);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
" }\n"
"                 \n"
"\n"
"               \n"
"QPushButton:hover\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgba(0, 170, 255,200);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
" background-color:rgb(204 , 228 , 247);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
"\n"
"   \n"
"}"));

        horizontalLayout_3->addWidget(pushButton);

        renew = new QPushButton(horizontalWidget);
        renew->setObjectName(QStringLiteral("renew"));
        renew->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgb(0, 170, 255);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
" }\n"
"                 \n"
"\n"
"               \n"
"QPushButton:hover\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgba(0, 170, 255,200);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
" background-color:rgb(204 , 228 , 247);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
"\n"
"   \n"
"}"));

        horizontalLayout_3->addWidget(renew);

        label_2 = new QLabel(horizontalWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit = new QLineEdit(horizontalWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QLatin1String("border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lineEdit);

        addnewdevice_2 = new QPushButton(horizontalWidget);
        addnewdevice_2->setObjectName(QStringLiteral("addnewdevice_2"));
        addnewdevice_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgb(0, 170, 255);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
" }\n"
"                 \n"
"\n"
"               \n"
"QPushButton:hover\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
"background-color: rgba(0, 170, 255,200);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"border-style:outset;\n"
"border-width:4px;\n"
"border-radius:10px;\n"
"border-color:rgba(255,255,255,255);\n"
" background-color:rgb(204 , 228 , 247);\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);\n"
"\n"
"   \n"
"}"));

        horizontalLayout_3->addWidget(addnewdevice_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(4, 10);

        verticalLayout_2->addWidget(horizontalWidget);

        widget_4 = new QWidget(tab_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("\n"
"font:  14pt \"\351\232\266\344\271\246\";\n"
"color: rgba(255, 255, 255, 255);"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_6);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout_2->addWidget(widget_4);

        listWidget_DTU = new QListWidget(tab_2);
        listWidget_DTU->setObjectName(QStringLiteral("listWidget_DTU"));
        listWidget_DTU->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(listWidget_DTU);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 8);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        retranslateUi(esp8266);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(esp8266);
    } // setupUi

    void retranslateUi(QWidget *esp8266)
    {
        esp8266->setWindowTitle(QApplication::translate("esp8266", "Form", 0));
        label->setText(QString());
        minwindow->setText(QApplication::translate("esp8266", "-", 0));
        closewindow->setText(QApplication::translate("esp8266", "\303\227", 0));
        label_8->setText(QApplication::translate("esp8266", "\345\220\215\347\247\260", 0));
        label_10->setText(QApplication::translate("esp8266", "\344\272\272\350\204\270", 0));
        label_11->setText(QApplication::translate("esp8266", "\351\227\250\347\246\201", 0));
        label_12->setText(QApplication::translate("esp8266", "\346\211\213\346\234\272\345\217\267", 0));
        pushButton_2->setText(QApplication::translate("esp8266", "\346\226\260\345\242\236\344\272\272\345\221\230", 0));
        pushButton_3->setText(QApplication::translate("esp8266", "\346\237\245\350\257\242\344\272\272\345\221\230", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("esp8266", "\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        addnewdevice->setText(QApplication::translate("esp8266", "\346\226\260\345\242\236\350\256\276\345\244\207", 0));
        pushButton->setText(QApplication::translate("esp8266", "\344\277\256\346\224\271\350\256\276\345\244\207\345\220\215\347\247\260", 0));
        renew->setText(QApplication::translate("esp8266", "\345\210\267\346\226\260", 0));
        label_2->setText(QString());
        addnewdevice_2->setText(QApplication::translate("esp8266", "\346\237\245\350\257\242\350\256\276\345\244\207", 0));
        label_3->setText(QApplication::translate("esp8266", "\345\220\215\347\247\260", 0));
        label_4->setText(QApplication::translate("esp8266", "\347\274\226\345\217\267", 0));
        label_5->setText(QApplication::translate("esp8266", "\345\234\250\347\272\277\347\212\266\346\200\201", 0));
        label_6->setText(QApplication::translate("esp8266", "\350\256\276\345\244\207\351\207\215\345\220\257", 0));
        label_7->setText(QApplication::translate("esp8266", "----------------------------------", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("esp8266", "DTU", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("esp8266", "\351\227\250\347\246\201", 0));
    } // retranslateUi

};

namespace Ui {
    class esp8266: public Ui_esp8266 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESP8266_H
