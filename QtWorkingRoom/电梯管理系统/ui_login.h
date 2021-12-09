/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *loginStart;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *user;
    QComboBox *txtuser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtpassword;
    QWidget *widget;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *showmin;
    QPushButton *closeWindow;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLabel *txtwaring;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *autologin;
    QCheckBox *memorypassword;
    QLabel *label;
    QWidget *widget_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(550, 412);
        login->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        loginStart = new QPushButton(login);
        loginStart->setObjectName(QStringLiteral("loginStart"));
        loginStart->setGeometry(QRect(140, 317, 221, 51));
        loginStart->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        verticalLayoutWidget = new QWidget(login);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 160, 401, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 2, -1, 2);
        user = new QLabel(verticalLayoutWidget);
        user->setObjectName(QStringLiteral("user"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user->sizePolicy().hasHeightForWidth());
        user->setSizePolicy(sizePolicy);
        user->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"\n"
"color: rgba(100, 100, 100, 255);\n"
"/*\n"
"border-top-style: none;\n"
"border-bottom-style: solid;\n"
"border-bottom-width: 2px;\n"
"border-bottom-color: rgb(232, 232, 232);\n"
"\n"
"border-left-style: none;\n"
"border-right-style: none;*/\n"
"boder-style:none;\n"
"}"));
        user->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(user);

        txtuser = new QComboBox(verticalLayoutWidget);
        txtuser->setObjectName(QStringLiteral("txtuser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtuser->sizePolicy().hasHeightForWidth());
        txtuser->setSizePolicy(sizePolicy1);
        txtuser->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"	border-style: none;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
" 	width:47px;\n"
"	border-image: url(:/arrow_down.png);	\n"
"}\n"
"\n"
"QComboBox::editable\n"
"{\n"
"	font: 75 12pt \"\345\215\216\346\226\207\347\273\206\351\273\221\";\n"
"	border-style: none;\n"
"	border-bottom-style: solid;\n"
"	border-bottom-width: 2px;\n"
"	border-bottom-color: rgb(255, 255,255);\n"
"}\n"
"QComboBox::editable:hover\n"
"{\n"
"	font: 75 12pt \"\345\215\216\346\226\207\347\273\206\351\273\221\";\n"
"	border-bottom-style: solid;\n"
"	border-bottom-width: 2px;\n"
"	border-bottom-color: rgb(200, 20, 200);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        txtuser->setEditable(true);
        txtuser->setMaxVisibleItems(5);
        txtuser->setIconSize(QSize(32, 32));
        txtuser->setFrame(true);

        horizontalLayout->addWidget(txtuser);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 9);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"\n"
"color: rgba(100, 100, 100, 255);\n"
"/*\n"
"border-top-style: none;\n"
"border-bottom-style: solid;\n"
"border-bottom-width: 2px;\n"
"border-bottom-color: rgb(232, 232, 232);\n"
"\n"
"border-left-style: none;\n"
"border-right-style: none;*/\n"
"border-style:none;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        txtpassword = new QLineEdit(verticalLayoutWidget);
        txtpassword->setObjectName(QStringLiteral("txtpassword"));
        sizePolicy1.setHeightForWidth(txtpassword->sizePolicy().hasHeightForWidth());
        txtpassword->setSizePolicy(sizePolicy1);
        txtpassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font: 75 12pt \"\345\215\216\346\226\207\347\273\206\351\273\221\";\n"
"border-top-style: none;\n"
"border-bottom-style: solid;\n"
"border-bottom-width: 2px;\n"
"border-bottom-color: rgb(232, 232, 232);\n"
"\n"
"border-left-style: none;\n"
"border-right-style: none;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border-top-style: none;\n"
"border-bottom-style: solid;\n"
"border-bottom-width: 2px;\n"
"border-bottom-color: rgb(200, 20, 200);\n"
"\n"
"border-left-style: none;\n"
"border-right-style: none;\n"
"}"));
        txtpassword->setEchoMode(QLineEdit::Password);
        txtpassword->setAlignment(Qt::AlignCenter);
        txtpassword->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(txtpassword);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 9);

        verticalLayout->addLayout(horizontalLayout_2);

        widget = new QWidget(login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -10, 551, 151));
        widget->setStyleSheet(QLatin1String("\n"
"background-color: rgba(108, 158, 232, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 30, 231, 101));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 75 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgba(74, 100, 61, 0);\n"
"color: rgba(255, 0, 0, 200);"));
        label_3->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget_3 = new QWidget(widget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(430, 10, 105, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        showmin = new QPushButton(horizontalLayoutWidget_3);
        showmin->setObjectName(QStringLiteral("showmin"));
        sizePolicy1.setHeightForWidth(showmin->sizePolicy().hasHeightForWidth());
        showmin->setSizePolicy(sizePolicy1);
        showmin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"	border-style:none;\n"
"background-color: rgba(108, 158, 232, 0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgba(255, 85, 0,255);\n"
"}\n"
"QPushButton:!hover\n"
"{\n"
"background-color: rgba(108, 158, 232, 0);\n"
"}\n"
""));

        horizontalLayout_3->addWidget(showmin);

        closeWindow = new QPushButton(horizontalLayoutWidget_3);
        closeWindow->setObjectName(QStringLiteral("closeWindow"));
        sizePolicy1.setHeightForWidth(closeWindow->sizePolicy().hasHeightForWidth());
        closeWindow->setSizePolicy(sizePolicy1);
        closeWindow->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"	font: 25 20pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";\n"
"	border-style:none;\n"
"background-color: rgba(108, 158, 232, 0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgba(255, 85, 0,255);\n"
"}\n"
"QPushButton:!hover\n"
"{\n"
"\n"
"background-color: rgba(108, 158, 232, 0);\n"
"}\n"
""));

        horizontalLayout_3->addWidget(closeWindow);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalWidget_4 = new QWidget(login);
        horizontalWidget_4->setObjectName(QStringLiteral("horizontalWidget_4"));
        horizontalWidget_4->setGeometry(QRect(0, 370, 531, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        pushButton_2 = new QPushButton(horizontalWidget_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMinimumSize(QSize(65, 39));
        pushButton_2->setMaximumSize(QSize(65, 39));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font.setPointSize(11);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style\357\274\232none\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"\n"
"color: rgba(165, 165, 165, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(165, 165, 165, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:none\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(165, 165, 1265, 250);\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:none\n"
"}\n"
"\n"
"QPushButton:!hover\n"
"{\n"
"border-style\357\274\232none\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"\n"
"color: rgba(165, 165, 165, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:none;\n"
"}\n"
""));
        pushButton_2->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(horizontalWidget_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setMinimumSize(QSize(72, 39));
        pushButton_5->setMaximumSize(QSize(72, 39));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-style\357\274\232none\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"\n"
"color: rgba(165, 165, 165, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(165, 165, 165, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:none\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(165, 165, 1265, 250);\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:none\n"
"}\n"
"\n"
"QPushButton:!hover\n"
"{\n"
"border-style\357\274\232none\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"\n"
"color: rgba(165, 165, 165, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"border-style:none;\n"
"}\n"
""));
        pushButton_5->setFlat(false);

        horizontalLayout_4->addWidget(pushButton_5);

        txtwaring = new QLabel(horizontalWidget_4);
        txtwaring->setObjectName(QStringLiteral("txtwaring"));
        sizePolicy2.setHeightForWidth(txtwaring->sizePolicy().hasHeightForWidth());
        txtwaring->setSizePolicy(sizePolicy2);
        txtwaring->setMinimumSize(QSize(342, 39));
        txtwaring->setMaximumSize(QSize(342, 39));
        txtwaring->setFont(font);
        txtwaring->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-style\357\274\232none\n"
"font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(180, 0, 0, 200);\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        txtwaring->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(txtwaring);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 6);
        horizontalWidget = new QWidget(login);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(90, 280, 321, 31));
        horizontalWidget->setMinimumSize(QSize(321, 21));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 1, -1);
        autologin = new QCheckBox(horizontalWidget);
        autologin->setObjectName(QStringLiteral("autologin"));
        sizePolicy1.setHeightForWidth(autologin->sizePolicy().hasHeightForWidth());
        autologin->setSizePolicy(sizePolicy1);
        autologin->setMinimumSize(QSize(105, 21));
        autologin->setStyleSheet(QString::fromUtf8("font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(165, 165, 165, 200);"));

        horizontalLayout_5->addWidget(autologin);

        memorypassword = new QCheckBox(horizontalWidget);
        memorypassword->setObjectName(QStringLiteral("memorypassword"));
        memorypassword->setEnabled(true);
        sizePolicy1.setHeightForWidth(memorypassword->sizePolicy().hasHeightForWidth());
        memorypassword->setSizePolicy(sizePolicy1);
        memorypassword->setMinimumSize(QSize(0, 21));
        memorypassword->setStyleSheet(QString::fromUtf8("font:  11pt \"\351\232\266\344\271\246\";\n"
"color: rgba(165, 165, 165, 200);"));

        horizontalLayout_5->addWidget(memorypassword);

        label = new QLabel(horizontalWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font:  11pt \"\351\232\266\344\271\246\";\n"
"	color: rgba(165, 165, 165, 200);\n"
"}\n"
"\n"
"QLabel:hover\n"
"{\n"
"	color: rgba(0, 0, 0, 255);\n"
"}"));

        horizontalLayout_5->addWidget(label);

        horizontalLayout_5->setStretch(0, 5);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 4);
        widget_2 = new QWidget(login);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(660, 130, 120, 80));
        widget_2->setStyleSheet(QStringLiteral("QWidget{background-color: rgb(255, 255, 255);color:rgb(0,0,0);}"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", 0));
        loginStart->setText(QApplication::translate("login", "\345\256\211\345\205\250\347\231\273\345\275\225", 0));
        user->setText(QApplication::translate("login", "\347\224\250\346\210\267\345\220\215", 0));
        txtuser->clear();
        txtuser->insertItems(0, QStringList()
         << QApplication::translate("login", "admin", 0)
        );
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201", 0));
        txtpassword->setText(QString());
        label_3->setText(QApplication::translate("login", "\345\217\270\345\210\233\347\247\221\346\212\200", 0));
        showmin->setText(QApplication::translate("login", "-", 0));
        closeWindow->setText(QApplication::translate("login", "\303\227", 0));
        pushButton_2->setText(QApplication::translate("login", "\346\263\250\345\206\214", 0));
        pushButton_5->setText(QApplication::translate("login", "\344\275\277\347\224\250\346\227\247\347\211\210", 0));
        txtwaring->setText(QApplication::translate("login", "\346\234\215\345\212\241\345\231\250\346\234\252\350\277\236\346\216\245\357\274\214\350\257\267\347\250\215\347\255\211/\351\207\215\350\257\225/\346\243\200\346\237\245\347\275\221\347\273\234\347\212\266\346\200\201", 0));
        autologin->setText(QApplication::translate("login", "\350\207\252\345\212\250\347\231\273\345\275\225", 0));
        memorypassword->setText(QApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("login", "\346\211\276\345\233\236\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
