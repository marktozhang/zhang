/********************************************************************************
** Form generated from reading UI file 'addpeople.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPEOPLE_H
#define UI_ADDPEOPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addpeople
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *clear_card;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *unit;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *clear_telnum;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *clear_naem;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *clear_room;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *typecard;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QComboBox *floor;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QComboBox *bumen;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLabel *label_21;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_3;
    QSpinBox *spinBox_2;
    QLabel *label_11;
    QPushButton *adduser;
    QPushButton *wanchengxiugai;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QWidget *addpeople)
    {
        if (addpeople->objectName().isEmpty())
            addpeople->setObjectName(QStringLiteral("addpeople"));
        addpeople->resize(749, 407);
        addpeople->setStyleSheet(QString::fromUtf8("QWidget \n"
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
        verticalLayout_4 = new QVBoxLayout(addpeople);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_12 = new QLabel(addpeople);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(addpeople);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_4->addWidget(label_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(addpeople);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        clear_card = new QSpinBox(addpeople);
        clear_card->setObjectName(QStringLiteral("clear_card"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clear_card->sizePolicy().hasHeightForWidth());
        clear_card->setSizePolicy(sizePolicy);
        clear_card->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_2->addWidget(clear_card);


        verticalLayout->addLayout(horizontalLayout_2);

        label_14 = new QLabel(addpeople);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout->addWidget(label_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(addpeople);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        unit = new QComboBox(addpeople);
        unit->setObjectName(QStringLiteral("unit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(unit->sizePolicy().hasHeightForWidth());
        unit->setSizePolicy(sizePolicy1);
        unit->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_3->addWidget(unit);


        verticalLayout->addLayout(horizontalLayout_3);

        label_15 = new QLabel(addpeople);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout->addWidget(label_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(addpeople);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        clear_telnum = new QLineEdit(addpeople);
        clear_telnum->setObjectName(QStringLiteral("clear_telnum"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clear_telnum->sizePolicy().hasHeightForWidth());
        clear_telnum->setSizePolicy(sizePolicy2);
        clear_telnum->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_4->addWidget(clear_telnum);


        verticalLayout->addLayout(horizontalLayout_4);

        label_16 = new QLabel(addpeople);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout->addWidget(label_16);


        horizontalLayout_10->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(addpeople);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        clear_naem = new QLineEdit(addpeople);
        clear_naem->setObjectName(QStringLiteral("clear_naem"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(clear_naem->sizePolicy().hasHeightForWidth());
        clear_naem->setSizePolicy(sizePolicy3);
        clear_naem->setMinimumSize(QSize(0, 26));
        clear_naem->setMaximumSize(QSize(16777215, 26));

        horizontalLayout->addWidget(clear_naem);


        verticalLayout_2->addLayout(horizontalLayout);

        label_17 = new QLabel(addpeople);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(0, 26));
        label_17->setMaximumSize(QSize(16777215, 26));

        verticalLayout_2->addWidget(label_17);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(addpeople);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        clear_room = new QLineEdit(addpeople);
        clear_room->setObjectName(QStringLiteral("clear_room"));
        sizePolicy3.setHeightForWidth(clear_room->sizePolicy().hasHeightForWidth());
        clear_room->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(clear_room);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_18 = new QLabel(addpeople);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_2->addWidget(label_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(addpeople);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        typecard = new QComboBox(addpeople);
        typecard->setObjectName(QStringLiteral("typecard"));
        sizePolicy1.setHeightForWidth(typecard->sizePolicy().hasHeightForWidth());
        typecard->setSizePolicy(sizePolicy1);
        typecard->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_5->addWidget(typecard);


        verticalLayout_2->addLayout(horizontalLayout_5);

        label = new QLabel(addpeople);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 2);
        verticalLayout_2->setStretch(5, 1);

        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(addpeople);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setMinimumSize(QSize(0, 26));
        label_8->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_7->addWidget(label_8);

        floor = new QComboBox(addpeople);
        floor->setObjectName(QStringLiteral("floor"));
        sizePolicy4.setHeightForWidth(floor->sizePolicy().hasHeightForWidth());
        floor->setSizePolicy(sizePolicy4);
        floor->setMinimumSize(QSize(26, 0));

        horizontalLayout_7->addWidget(floor);


        verticalLayout_3->addLayout(horizontalLayout_7);

        label_19 = new QLabel(addpeople);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(0, 26));
        label_19->setMaximumSize(QSize(16777215, 26));

        verticalLayout_3->addWidget(label_19);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_9 = new QLabel(addpeople);
        label_9->setObjectName(QStringLiteral("label_9"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy5);
        label_9->setMinimumSize(QSize(0, 26));
        label_9->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_8->addWidget(label_9);

        bumen = new QComboBox(addpeople);
        bumen->setObjectName(QStringLiteral("bumen"));
        sizePolicy5.setHeightForWidth(bumen->sizePolicy().hasHeightForWidth());
        bumen->setSizePolicy(sizePolicy5);
        bumen->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_8->addWidget(bumen);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_10 = new QLabel(addpeople);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(16777215, 26));

        horizontalLayout_9->addWidget(label_10);


        verticalLayout_3->addLayout(horizontalLayout_9);

        label_21 = new QLabel(addpeople);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMaximumSize(QSize(16777215, 10));

        verticalLayout_3->addWidget(label_21);

        label_20 = new QLabel(addpeople);
        label_20->setObjectName(QStringLiteral("label_20"));

        verticalLayout_3->addWidget(label_20);


        horizontalLayout_10->addLayout(verticalLayout_3);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton_3 = new QPushButton(addpeople);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_11->addWidget(pushButton_3);

        spinBox_2 = new QSpinBox(addpeople);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy6);
        spinBox_2->setMinimumSize(QSize(0, 26));

        horizontalLayout_11->addWidget(spinBox_2);

        label_11 = new QLabel(addpeople);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        adduser = new QPushButton(addpeople);
        adduser->setObjectName(QStringLiteral("adduser"));

        horizontalLayout_11->addWidget(adduser);

        wanchengxiugai = new QPushButton(addpeople);
        wanchengxiugai->setObjectName(QStringLiteral("wanchengxiugai"));

        horizontalLayout_11->addWidget(wanchengxiugai);

        pushButton_4 = new QPushButton(addpeople);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_11->addWidget(pushButton_4);

        pushButton = new QPushButton(addpeople);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_11->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 5);
        verticalLayout_4->setStretch(3, 2);

        retranslateUi(addpeople);

        QMetaObject::connectSlotsByName(addpeople);
    } // setupUi

    void retranslateUi(QWidget *addpeople)
    {
        addpeople->setWindowTitle(QApplication::translate("addpeople", "Form", 0));
        label_12->setText(QApplication::translate("addpeople", "\346\267\273\345\212\240\346\226\260\347\224\250\346\210\267", 0));
        label_13->setText(QApplication::translate("addpeople", "\347\224\250\346\210\267\344\277\241\346\201\257", 0));
        label_2->setText(QApplication::translate("addpeople", "\345\215\241\345\217\267", 0));
        label_14->setText(QString());
        label_3->setText(QApplication::translate("addpeople", "\345\215\225\345\205\203", 0));
        label_15->setText(QString());
        label_4->setText(QApplication::translate("addpeople", "\347\224\265\350\257\235\345\217\267\347\240\201", 0));
        label_16->setText(QString());
        label_5->setText(QApplication::translate("addpeople", "\345\247\223\345\220\215", 0));
        label_17->setText(QString());
        label_6->setText(QApplication::translate("addpeople", "\346\210\277\351\227\264", 0));
        label_18->setText(QString());
        label_7->setText(QApplication::translate("addpeople", "\345\215\241\347\261\273\345\236\213", 0));
        typecard->clear();
        typecard->insertItems(0, QStringList()
         << QApplication::translate("addpeople", "\350\256\241\346\227\266\345\215\241", 0)
         << QApplication::translate("addpeople", "\350\256\241\346\254\241\345\215\241", 0)
         << QApplication::translate("addpeople", "\350\256\241\346\227\266\350\256\241\346\254\241\345\215\241", 0)
        );
        label->setText(QString());
        label_8->setText(QApplication::translate("addpeople", "\346\245\274\345\217\267", 0));
        label_19->setText(QString());
        label_9->setText(QApplication::translate("addpeople", "\351\203\250\351\227\250", 0));
        bumen->clear();
        bumen->insertItems(0, QStringList()
         << QApplication::translate("addpeople", "\344\270\232\344\270\273", 0)
         << QApplication::translate("addpeople", "\347\211\251\344\270\232", 0)
        );
        label_10->setText(QApplication::translate("addpeople", "*\345\277\205\345\241\253", 0));
        label_21->setText(QString());
        label_20->setText(QString());
        pushButton_3->setText(QApplication::translate("addpeople", "\346\211\271\351\207\217\346\267\273\345\212\240\347\224\250\346\210\267", 0));
        label_11->setText(QApplication::translate("addpeople", "\344\270\252", 0));
        adduser->setText(QApplication::translate("addpeople", "\346\267\273\345\212\240\347\224\250\346\210\267", 0));
        wanchengxiugai->setText(QApplication::translate("addpeople", "\345\256\214\346\210\220\344\277\256\346\224\271", 0));
        pushButton_4->setText(QApplication::translate("addpeople", "\346\270\205\347\251\272\344\277\241\346\201\257", 0));
        pushButton->setText(QApplication::translate("addpeople", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class addpeople: public Ui_addpeople {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPEOPLE_H
