/********************************************************************************
** Form generated from reading UI file 'manageforrenyuan.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEFORRENYUAN_H
#define UI_MANAGEFORRENYUAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manageforrenyuan
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QListWidget *caozuorenyuan;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QRadioButton *guanli;
    QRadioButton *chaoji;
    QRadioButton *caozuoyuan;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *det;
    QPushButton *pushButton;

    void setupUi(QWidget *manageforrenyuan)
    {
        if (manageforrenyuan->objectName().isEmpty())
            manageforrenyuan->setObjectName(QStringLiteral("manageforrenyuan"));
        manageforrenyuan->resize(587, 314);
        manageforrenyuan->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        verticalLayout_4 = new QVBoxLayout(manageforrenyuan);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        widget_3 = new QWidget(manageforrenyuan);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 20, -1);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        caozuorenyuan = new QListWidget(widget_3);
        caozuorenyuan->setObjectName(QStringLiteral("caozuorenyuan"));

        verticalLayout_3->addWidget(caozuorenyuan);


        horizontalLayout_2->addWidget(widget_3);

        widget = new QWidget(manageforrenyuan);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-color:rgb(255, 255, 255);\n"
"border-width:4px;"));
        guanli = new QRadioButton(widget_2);
        guanli->setObjectName(QStringLiteral("guanli"));
        guanli->setGeometry(QRect(11, 90, 111, 24));
        guanli->setCheckable(true);
        guanli->setChecked(false);
        chaoji = new QRadioButton(widget_2);
        chaoji->setObjectName(QStringLiteral("chaoji"));
        chaoji->setGeometry(QRect(11, 35, 106, 24));
        chaoji->setCheckable(true);
        caozuoyuan = new QRadioButton(widget_2);
        caozuoyuan->setObjectName(QStringLiteral("caozuoyuan"));
        caozuoyuan->setGeometry(QRect(11, 145, 111, 24));
        caozuoyuan->setChecked(true);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(1, 4, 251, 201));
        label_3->setMinimumSize(QSize(251, 201));
        label_3->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));

        verticalLayout_2->addWidget(widget_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 10);

        horizontalLayout_2->addWidget(widget);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(manageforrenyuan);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        det = new QPushButton(manageforrenyuan);
        det->setObjectName(QStringLiteral("det"));

        horizontalLayout->addWidget(det);

        pushButton = new QPushButton(manageforrenyuan);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(manageforrenyuan);

        QMetaObject::connectSlotsByName(manageforrenyuan);
    } // setupUi

    void retranslateUi(QWidget *manageforrenyuan)
    {
        manageforrenyuan->setWindowTitle(QApplication::translate("manageforrenyuan", "Form", 0));
        label_2->setText(QApplication::translate("manageforrenyuan", "\350\264\246\345\217\267", 0));
        label->setText(QApplication::translate("manageforrenyuan", "\346\235\203\351\231\220\350\256\276\347\275\256", 0));
        guanli->setText(QApplication::translate("manageforrenyuan", "\347\256\241\347\220\206\345\221\230", 0));
        chaoji->setText(QApplication::translate("manageforrenyuan", "\350\266\205\347\272\247\347\256\241\347\220\206\345\221\230", 0));
        caozuoyuan->setText(QApplication::translate("manageforrenyuan", "\346\223\215\344\275\234\345\221\230", 0));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("manageforrenyuan", "\346\267\273\345\212\240", 0));
        det->setText(QApplication::translate("manageforrenyuan", "\345\210\240\351\231\244", 0));
        pushButton->setText(QApplication::translate("manageforrenyuan", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class manageforrenyuan: public Ui_manageforrenyuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEFORRENYUAN_H
