/********************************************************************************
** Form generated from reading UI file 'add_device.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DEVICE_H
#define UI_ADD_DEVICE_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ADD_device
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *label_3;
    QSpinBox *diantidizhi;
    QLabel *ll;
    QLineEdit *diantiname;
    QCheckBox *ismengjin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLabel *label_4;
    QSpinBox *dianticengshu;
    QLabel *label;
    QLabel *label_9;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_12;
    QWidget *button64;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QPushButton *adddddd;
    QLabel *label_2;
    QPushButton *hidexiugai;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;

    void setupUi(QWidget *ADD_device)
    {
        if (ADD_device->objectName().isEmpty())
            ADD_device->setObjectName(QStringLiteral("ADD_device"));
        ADD_device->resize(911, 588);
        ADD_device->setStyleSheet(QString::fromUtf8("QWidget \n"
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
"\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
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
"}\n"
"\n"
"QSpinBox\n"
"{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        verticalLayout = new QVBoxLayout(ADD_device);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, -1);
        label_13 = new QLabel(ADD_device);
        label_13->setObjectName(QStringLiteral("label_13"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);
        label_13->setStyleSheet(QString::fromUtf8("#label_13\n"
"{\n"
"\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"}"));

        verticalLayout->addWidget(label_13);

        widget = new QWidget(ADD_device);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 100));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_10);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_3);

        diantidizhi = new QSpinBox(widget);
        diantidizhi->setObjectName(QStringLiteral("diantidizhi"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(diantidizhi->sizePolicy().hasHeightForWidth());
        diantidizhi->setSizePolicy(sizePolicy2);
        diantidizhi->setMinimum(1);
        diantidizhi->setMaximum(64);

        horizontalLayout->addWidget(diantidizhi);

        ll = new QLabel(widget);
        ll->setObjectName(QStringLiteral("ll"));
        sizePolicy.setHeightForWidth(ll->sizePolicy().hasHeightForWidth());
        ll->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(ll);

        diantiname = new QLineEdit(widget);
        diantiname->setObjectName(QStringLiteral("diantiname"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(diantiname->sizePolicy().hasHeightForWidth());
        diantiname->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(diantiname);

        ismengjin = new QCheckBox(widget);
        ismengjin->setObjectName(QStringLiteral("ismengjin"));

        horizontalLayout->addWidget(ismengjin);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_11);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_4);

        dianticengshu = new QSpinBox(widget);
        dianticengshu->setObjectName(QStringLiteral("dianticengshu"));
        sizePolicy1.setHeightForWidth(dianticengshu->sizePolicy().hasHeightForWidth());
        dianticengshu->setSizePolicy(sizePolicy1);
        dianticengshu->setMinimum(1);
        dianticengshu->setMaximum(64);

        horizontalLayout_2->addWidget(dianticengshu);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(ADD_device);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);

        verticalLayout_5->addWidget(label_12);

        button64 = new QWidget(widget_2);
        button64->setObjectName(QStringLiteral("button64"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(button64->sizePolicy().hasHeightForWidth());
        button64->setSizePolicy(sizePolicy5);
        button64->setMinimumSize(QSize(849, 268));

        verticalLayout_5->addWidget(button64);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 100);
        button64->raise();
        label_12->raise();

        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(ADD_device);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        adddddd = new QPushButton(widget_3);
        adddddd->setObjectName(QStringLiteral("adddddd"));

        horizontalLayout_3->addWidget(adddddd);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        hidexiugai = new QPushButton(widget_3);
        hidexiugai->setObjectName(QStringLiteral("hidexiugai"));

        horizontalLayout_3->addWidget(hidexiugai);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy6);
        label_8->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"\n"
"}\n"
""));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_8);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout->addWidget(widget_3);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 5);
        verticalLayout->setStretch(3, 1);

        retranslateUi(ADD_device);

        QMetaObject::connectSlotsByName(ADD_device);
    } // setupUi

    void retranslateUi(QWidget *ADD_device)
    {
        ADD_device->setWindowTitle(QApplication::translate("ADD_device", "Form", 0));
        label_13->setText(QApplication::translate("ADD_device", "\350\256\276\345\244\207\346\267\273\345\212\240", 0));
        label_10->setText(QString());
        label_3->setText(QApplication::translate("ADD_device", "\347\224\265\346\242\257\345\234\260\345\235\200(\347\274\226\345\217\267)\357\274\232", 0));
        ll->setText(QApplication::translate("ADD_device", "\347\224\265\346\242\257\345\220\215\347\247\260\357\274\232", 0));
        ismengjin->setText(QApplication::translate("ADD_device", "\346\230\257\345\220\246\351\227\250\347\246\201(\351\227\250\347\246\201\350\256\276\345\244\207\342\210\232)", 0));
        label_11->setText(QString());
        label_4->setText(QApplication::translate("ADD_device", "   \347\224\265\346\242\257\347\232\204\346\200\273\345\261\202\346\225\260\357\274\232", 0));
        label->setText(QApplication::translate("ADD_device", "\346\245\274\345\261\202\345\217\257\344\273\245\347\233\264\346\216\245\347\202\271\345\207\273\344\270\213\350\241\250\346\225\260\345\255\227", 0));
        label_9->setText(QString());
        label_12->setText(QApplication::translate("ADD_device", "\346\245\274\345\261\202\345\220\215\347\247\260", 0));
        label_6->setText(QString());
        adddddd->setText(QApplication::translate("ADD_device", "\346\267\273\345\212\240", 0));
        label_2->setText(QString());
        hidexiugai->setText(QApplication::translate("ADD_device", "\344\277\256\346\224\271", 0));
        label_5->setText(QString());
        pushButton->setText(QApplication::translate("ADD_device", "\350\277\224\345\233\236", 0));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("ADD_device", "    \346\270\251\351\246\250\345\260\217\350\264\264\345\243\253\357\274\232\346\257\217\344\270\252\350\256\276\345\244\207\347\232\204\347\274\226\347\240\201\344\270\215\350\246\201\346\234\211\351\207\215\345\244\215", 0));
    } // retranslateUi

};

namespace Ui {
    class ADD_device: public Ui_ADD_device {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DEVICE_H
