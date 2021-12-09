/********************************************************************************
** Form generated from reading UI file 'addcaozuorenyuan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCAOZUORENYUAN_H
#define UI_ADDCAOZUORENYUAN_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcaozuorenyuan
{
public:
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *user;
    QHBoxLayout *horizontalLayout_3;
    QLabel *password;
    QLineEdit *passwordtxt;
    QCheckBox *showpassword;
    QHBoxLayout *horizontalLayout_4;
    QLabel *passwordtwo;
    QLineEdit *quretxt;
    QWidget *widget;
    QLabel *label;

    void setupUi(QWidget *addcaozuorenyuan)
    {
        if (addcaozuorenyuan->objectName().isEmpty())
            addcaozuorenyuan->setObjectName(QStringLiteral("addcaozuorenyuan"));
        addcaozuorenyuan->resize(548, 308);
        addcaozuorenyuan->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        pushButton = new QPushButton(addcaozuorenyuan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 210, 171, 28));
        radioButton = new QRadioButton(addcaozuorenyuan);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(340, 120, 72, 19));
        radioButton->setChecked(true);
        label_3 = new QLabel(addcaozuorenyuan);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 40, 131, 141));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 0, 0);"));
        pushButton_2 = new QPushButton(addcaozuorenyuan);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 210, 187, 28));
        verticalWidget = new QWidget(addcaozuorenyuan);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(41, 41, 262, 135));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        user = new QLineEdit(verticalWidget);
        user->setObjectName(QStringLiteral("user"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user->sizePolicy().hasHeightForWidth());
        user->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(user);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        password = new QLabel(verticalWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(password);

        passwordtxt = new QLineEdit(verticalWidget);
        passwordtxt->setObjectName(QStringLiteral("passwordtxt"));
        sizePolicy.setHeightForWidth(passwordtxt->sizePolicy().hasHeightForWidth());
        passwordtxt->setSizePolicy(sizePolicy);
        passwordtxt->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwordtxt);


        verticalLayout->addLayout(horizontalLayout_3);

        showpassword = new QCheckBox(verticalWidget);
        showpassword->setObjectName(QStringLiteral("showpassword"));

        verticalLayout->addWidget(showpassword);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        passwordtwo = new QLabel(verticalWidget);
        passwordtwo->setObjectName(QStringLiteral("passwordtwo"));
        passwordtwo->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(passwordtwo);

        quretxt = new QLineEdit(verticalWidget);
        quretxt->setObjectName(QStringLiteral("quretxt"));
        sizePolicy.setHeightForWidth(quretxt->sizePolicy().hasHeightForWidth());
        quretxt->setSizePolicy(sizePolicy);
        quretxt->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(quretxt);


        verticalLayout->addLayout(horizontalLayout_4);

        widget = new QWidget(addcaozuorenyuan);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(311, 80, 94, 30));
        label = new QLabel(addcaozuorenyuan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 70, 76, 20));

        retranslateUi(addcaozuorenyuan);

        QMetaObject::connectSlotsByName(addcaozuorenyuan);
    } // setupUi

    void retranslateUi(QWidget *addcaozuorenyuan)
    {
        addcaozuorenyuan->setWindowTitle(QApplication::translate("addcaozuorenyuan", "Form", 0));
        pushButton->setText(QApplication::translate("addcaozuorenyuan", "\350\277\224\345\233\236\346\237\245\347\234\213\344\272\272\345\221\230\345\210\227\350\241\250", 0));
        radioButton->setText(QApplication::translate("addcaozuorenyuan", "\346\223\215\344\275\234\345\221\230", 0));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("addcaozuorenyuan", "\347\241\256\350\256\244", 0));
        label_2->setText(QApplication::translate("addcaozuorenyuan", "\347\224\250\346\210\267\345\220\215", 0));
        password->setText(QApplication::translate("addcaozuorenyuan", "\345\257\206\347\240\201", 0));
        passwordtxt->setText(QString());
        showpassword->setText(QApplication::translate("addcaozuorenyuan", "\346\230\276\347\244\272\345\257\206\347\240\201", 0));
        passwordtwo->setText(QApplication::translate("addcaozuorenyuan", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("addcaozuorenyuan", "    \346\235\203\351\231\220\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class addcaozuorenyuan: public Ui_addcaozuorenyuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCAOZUORENYUAN_H
