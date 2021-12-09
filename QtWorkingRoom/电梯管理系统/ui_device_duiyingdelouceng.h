/********************************************************************************
** Form generated from reading UI file 'device_duiyingdelouceng.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICE_DUIYINGDELOUCENG_H
#define UI_DEVICE_DUIYINGDELOUCENG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_device_duiyingdelouceng
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *VLAYoutlistwidget;
    QLabel *b;
    QHBoxLayout *a;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *label;
    QListWidget *listWidget_haha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;

    void setupUi(QWidget *device_duiyingdelouceng)
    {
        if (device_duiyingdelouceng->objectName().isEmpty())
            device_duiyingdelouceng->setObjectName(QStringLiteral("device_duiyingdelouceng"));
        device_duiyingdelouceng->resize(740, 684);
        device_duiyingdelouceng->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        verticalLayout = new QVBoxLayout(device_duiyingdelouceng);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(15, 30, 15, 50);
        label_3 = new QLabel(device_duiyingdelouceng);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}\n"
""));

        verticalLayout->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        VLAYoutlistwidget = new QVBoxLayout();
        VLAYoutlistwidget->setObjectName(QStringLiteral("VLAYoutlistwidget"));
        b = new QLabel(device_duiyingdelouceng);
        b->setObjectName(QStringLiteral("b"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(b->sizePolicy().hasHeightForWidth());
        b->setSizePolicy(sizePolicy);
        b->setMinimumSize(QSize(350, 0));

        VLAYoutlistwidget->addWidget(b);

        a = new QHBoxLayout();
        a->setObjectName(QStringLiteral("a"));
        label_5 = new QLabel(device_duiyingdelouceng);
        label_5->setObjectName(QStringLiteral("label_5"));

        a->addWidget(label_5);

        label_6 = new QLabel(device_duiyingdelouceng);
        label_6->setObjectName(QStringLiteral("label_6"));

        a->addWidget(label_6);

        label_8 = new QLabel(device_duiyingdelouceng);
        label_8->setObjectName(QStringLiteral("label_8"));

        a->addWidget(label_8);

        label_7 = new QLabel(device_duiyingdelouceng);
        label_7->setObjectName(QStringLiteral("label_7"));

        a->addWidget(label_7);


        VLAYoutlistwidget->addLayout(a);

        listWidget = new QListWidget(device_duiyingdelouceng);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(350, 0));

        VLAYoutlistwidget->addWidget(listWidget);

        VLAYoutlistwidget->setStretch(0, 1);
        VLAYoutlistwidget->setStretch(1, 1);
        VLAYoutlistwidget->setStretch(2, 20);

        horizontalLayout->addLayout(VLAYoutlistwidget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(device_duiyingdelouceng);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        widget = new QWidget(device_duiyingdelouceng);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, -1, 0);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_4->addWidget(label_9);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);


        verticalLayout_3->addWidget(widget);

        listWidget_haha = new QListWidget(device_duiyingdelouceng);
        listWidget_haha->setObjectName(QStringLiteral("listWidget_haha"));

        verticalLayout_3->addWidget(listWidget_haha);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 20);

        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_3 = new QPushButton(device_duiyingdelouceng);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        label_4 = new QLabel(device_duiyingdelouceng);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        pushButton_5 = new QPushButton(device_duiyingdelouceng);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(device_duiyingdelouceng);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_4 = new QPushButton(device_duiyingdelouceng);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(device_duiyingdelouceng);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(1, 10);

        retranslateUi(device_duiyingdelouceng);

        QMetaObject::connectSlotsByName(device_duiyingdelouceng);
    } // setupUi

    void retranslateUi(QWidget *device_duiyingdelouceng)
    {
        device_duiyingdelouceng->setWindowTitle(QApplication::translate("device_duiyingdelouceng", "Form", 0));
        label_3->setText(QApplication::translate("device_duiyingdelouceng", "\350\256\276\345\244\207\347\256\241\347\220\206", 0));
        b->setText(QApplication::translate("device_duiyingdelouceng", "\350\256\276\345\244\207\344\277\241\346\201\257", 0));
        label_5->setText(QApplication::translate("device_duiyingdelouceng", "\350\256\276\345\244\207\347\274\226\347\240\201", 0));
        label_6->setText(QApplication::translate("device_duiyingdelouceng", "\347\224\265\346\242\257\345\220\215\347\247\260", 0));
        label_8->setText(QApplication::translate("device_duiyingdelouceng", "\345\261\202\346\225\260", 0));
        label_7->setText(QApplication::translate("device_duiyingdelouceng", "\346\230\257\345\220\246\351\227\250\347\246\201", 0));
        label_2->setText(QApplication::translate("device_duiyingdelouceng", "\345\220\204\345\261\202\345\257\271\345\272\224\345\220\215\347\247\260", 0));
        label_9->setText(QApplication::translate("device_duiyingdelouceng", "\346\245\274\345\261\202", 0));
        label->setText(QApplication::translate("device_duiyingdelouceng", "\346\245\274\345\261\202\345\220\215\347\247\260", 0));
        pushButton_3->setText(QApplication::translate("device_duiyingdelouceng", "\345\210\266\344\275\234\350\256\276\345\244\207\345\234\260\345\235\200\345\215\241", 0));
        label_4->setText(QString());
        pushButton_5->setText(QApplication::translate("device_duiyingdelouceng", "\346\267\273\345\212\240", 0));
        pushButton_6->setText(QApplication::translate("device_duiyingdelouceng", "\345\210\240\351\231\244", 0));
        pushButton_4->setText(QApplication::translate("device_duiyingdelouceng", "\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("device_duiyingdelouceng", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class device_duiyingdelouceng: public Ui_device_duiyingdelouceng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICE_DUIYINGDELOUCENG_H
