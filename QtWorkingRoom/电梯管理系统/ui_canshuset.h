/********************************************************************************
** Form generated from reading UI file 'canshuset.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANSHUSET_H
#define UI_CANSHUSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_canshuset
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton_3;

    void setupUi(QWidget *canshuset)
    {
        if (canshuset->objectName().isEmpty())
            canshuset->setObjectName(QStringLiteral("canshuset"));
        canshuset->resize(503, 413);
        canshuset->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        label_2 = new QLabel(canshuset);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 10, 72, 15));
        label_3 = new QLabel(canshuset);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 80, 121, 16));
        calendarWidget = new QCalendarWidget(canshuset);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(50, 110, 431, 200));
        checkBox = new QCheckBox(canshuset);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(70, 40, 131, 19));
        lineEdit = new QLineEdit(canshuset);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(200, 80, 201, 21));
        horizontalLayoutWidget = new QWidget(canshuset);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 320, 453, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(canshuset);

        QMetaObject::connectSlotsByName(canshuset);
    } // setupUi

    void retranslateUi(QWidget *canshuset)
    {
        canshuset->setWindowTitle(QApplication::translate("canshuset", "Form", 0));
        label_2->setText(QApplication::translate("canshuset", "\350\265\267\345\247\213\346\227\245\346\234\237", 0));
        label_3->setText(QApplication::translate("canshuset", "\350\265\267\345\247\213\346\227\245\346\234\237\351\273\230\350\256\244\345\200\274\357\274\232", 0));
        checkBox->setText(QApplication::translate("canshuset", "\346\230\276\347\244\272\350\265\267\345\247\213\346\227\245\346\234\237", 0));
        pushButton->setText(QApplication::translate("canshuset", "\350\257\273\345\217\226\345\217\202\346\225\260", 0));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("canshuset", "\344\277\235\345\255\230\350\256\276\347\275\256", 0));
        label_4->setText(QString());
        pushButton_3->setText(QApplication::translate("canshuset", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class canshuset: public Ui_canshuset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANSHUSET_H
