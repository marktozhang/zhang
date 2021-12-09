/********************************************************************************
** Form generated from reading UI file 'showguanyu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWGUANYU_H
#define UI_SHOWGUANYU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showguanyu
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label_7;
    QPushButton *pushButton;

    void setupUi(QWidget *showguanyu)
    {
        if (showguanyu->objectName().isEmpty())
            showguanyu->setObjectName(QStringLiteral("showguanyu"));
        showguanyu->resize(565, 367);
        showguanyu->setStyleSheet(QString::fromUtf8("QWidget \n"
"{\n"
"	background-color: rgb(0, 85, 0);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLabel\n"
"{\n"
" border-style:none;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"border-style:solid;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width:4px;\n"
"background-color: rgb(255, 170, 127);\n"
"color: rgba(255, 255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:!hover\n"
"{\n"
"border-style:solid;\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border-width:4px;\n"
"background-color:rgb(0, 85, 0);\n"
"color: rgba(255, 255, 255, 255);\n"
"}\n"
"\n"
"QTabBar:tab:selected\n"
"{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(255, 170, 127);\n"
"}\n"
"QTabBar:tab:!selected\n"
"{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	background-color: rgb(0, 85, 0);\n"
"}\n"
"QLineEdit\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	backg"
                        "round-color: rgb(255, 255, 255);\n"
"}\n"
"QTableWidget\n"
"{\n"
"	\n"
"	background-color: rgb(0, 85, 0);\n"
"\n"
"}\n"
"\n"
"QListWidget\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QListWidget::item\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	border-style:none;\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	\n"
"	border-bottom-style:solid;\n"
"	border-bottom-width:4px;\n"
"	border-bottom-color:rgb(0, 85, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QListWidget::item:hover\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"QListWidget::item:!hover\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QListWidget::item:selected\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 0, 0);\n"
"}\n"
"/*\n"
"QListWidget::item:!selected\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}*/\n"
"\n"
"\n"
"\n"
"\n"
""
                        "QComboBox\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"QComboBox::drop-down\n"
"{\n"
" 	width:47px;\n"
"	border-image: url(:/arrow_down.png);	\n"
"}\n"
"QCheckBox\n"
"{\n"
"	font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
"\n"
"QMenuBar\n"
"{\n"
"	background-color:transparent;\n"
"\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"	background-color: rgb(0, 85, 0);\n"
"}\n"
"QMenuBar::item:selected\n"
"{\n"
"	background-color: rgb(255, 170, 0);\n"
"}\n"
"QMenuBar::item:!selected\n"
"{\n"
"	\n"
"	background-color: rgb(0, 85, 0);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(showguanyu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(80, 50, 80, 50);
        widget = new QWidget(showguanyu);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_8);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widget);


        retranslateUi(showguanyu);

        QMetaObject::connectSlotsByName(showguanyu);
    } // setupUi

    void retranslateUi(QWidget *showguanyu)
    {
        showguanyu->setWindowTitle(QApplication::translate("showguanyu", "Form", 0));
        label_2->setText(QApplication::translate("showguanyu", "\346\242\257\346\216\247\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_5->setText(QApplication::translate("showguanyu", "\347\211\210\346\234\254\357\274\23218.0.0.15", 0));
        label->setText(QApplication::translate("showguanyu", "\346\223\215\344\275\234\347\216\257\345\242\203\357\274\232WinXp/Win7/Win10", 0));
        label_4->setText(QApplication::translate("showguanyu", "\347\211\210\346\235\203\346\211\200\346\234\211", 0));
        label_3->setText(QApplication::translate("showguanyu", "XX XX XX XX XX XX XX", 0));
        label_6->setText(QApplication::translate("showguanyu", "\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224\342\200\224", 0));
        label_8->setText(QString());
        label_7->setText(QString());
        pushButton->setText(QApplication::translate("showguanyu", "   \350\277\224\345\233\236   ", 0));
    } // retranslateUi

};

namespace Ui {
    class showguanyu: public Ui_showguanyu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWGUANYU_H
