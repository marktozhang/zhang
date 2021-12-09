/********************************************************************************
** Form generated from reading UI file 'unitmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITMANAGE_H
#define UI_UNITMANAGE_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_unitManage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *delete_2;
    QPushButton *pushButton;

    void setupUi(QWidget *unitManage)
    {
        if (unitManage->objectName().isEmpty())
            unitManage->setObjectName(QStringLiteral("unitManage"));
        unitManage->resize(349, 728);
        unitManage->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        verticalLayout = new QVBoxLayout(unitManage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(unitManage);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label);

        listWidget_2 = new QListWidget(unitManage);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setStyleSheet(QStringLiteral(""));
        listWidget_2->setViewMode(QListView::ListMode);
        listWidget_2->setSortingEnabled(false);

        verticalLayout->addWidget(listWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(unitManage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        txt = new QLineEdit(unitManage);
        txt->setObjectName(QStringLiteral("txt"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txt->sizePolicy().hasHeightForWidth());
        txt->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(txt);

        label_3 = new QLabel(unitManage);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(unitManage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(unitManage);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        delete_2 = new QPushButton(unitManage);
        delete_2->setObjectName(QStringLiteral("delete_2"));

        horizontalLayout->addWidget(delete_2);

        pushButton = new QPushButton(unitManage);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        retranslateUi(unitManage);

        QMetaObject::connectSlotsByName(unitManage);
    } // setupUi

    void retranslateUi(QWidget *unitManage)
    {
        unitManage->setWindowTitle(QApplication::translate("unitManage", "Form", 0));
        label->setText(QApplication::translate("unitManage", "\345\215\225\345\205\203\345\220\215\347\247\260", 0));
        label_2->setText(QApplication::translate("unitManage", "\345\215\225\345\205\203\345\220\215\347\247\260", 0));
        label_3->setText(QString());
        pushButton_2->setText(QApplication::translate("unitManage", "\346\267\273\345\212\240", 0));
        pushButton_4->setText(QApplication::translate("unitManage", "\344\277\256\346\224\271", 0));
        delete_2->setText(QApplication::translate("unitManage", "\345\210\240\351\231\244", 0));
        pushButton->setText(QApplication::translate("unitManage", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class unitManage: public Ui_unitManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITMANAGE_H
