/********************************************************************************
** Form generated from reading UI file 'xiugaipassword.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIUGAIPASSWORD_H
#define UI_XIUGAIPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xiugaipassword
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QCheckBox *shihide;
    QHBoxLayout *horizontalLayout_2;
    QLabel *hide1;
    QLineEdit *hide2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QWidget *xiugaipassword)
    {
        if (xiugaipassword->objectName().isEmpty())
            xiugaipassword->setObjectName(QStringLiteral("xiugaipassword"));
        xiugaipassword->resize(631, 339);
        xiugaipassword->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        horizontalLayout_5 = new QHBoxLayout(xiugaipassword);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 50, -1, 50);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(60, -1, 60, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 20);
        label = new QLabel(xiugaipassword);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(xiugaipassword);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(xiugaipassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(xiugaipassword);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lineEdit_3);

        shihide = new QCheckBox(xiugaipassword);
        shihide->setObjectName(QStringLiteral("shihide"));

        horizontalLayout_3->addWidget(shihide);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        hide1 = new QLabel(xiugaipassword);
        hide1->setObjectName(QStringLiteral("hide1"));
        hide1->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(hide1);

        hide2 = new QLineEdit(xiugaipassword);
        hide2->setObjectName(QStringLiteral("hide2"));
        sizePolicy.setHeightForWidth(hide2->sizePolicy().hasHeightForWidth());
        hide2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(hide2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(50, -1, 50, -1);
        pushButton_2 = new QPushButton(xiugaipassword);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        label_4 = new QLabel(xiugaipassword);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pushButton = new QPushButton(xiugaipassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(xiugaipassword);

        QMetaObject::connectSlotsByName(xiugaipassword);
    } // setupUi

    void retranslateUi(QWidget *xiugaipassword)
    {
        xiugaipassword->setWindowTitle(QApplication::translate("xiugaipassword", "Form", 0));
        label->setText(QApplication::translate("xiugaipassword", "\346\227\247\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("xiugaipassword", "\346\226\260\345\257\206\347\240\201", 0));
        shihide->setText(QApplication::translate("xiugaipassword", "\346\230\276\347\244\272\345\257\206\347\240\201", 0));
        hide1->setText(QApplication::translate("xiugaipassword", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", 0));
        pushButton_2->setText(QApplication::translate("xiugaipassword", "\347\241\256\350\256\244", 0));
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("xiugaipassword", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class xiugaipassword: public Ui_xiugaipassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIUGAIPASSWORD_H
