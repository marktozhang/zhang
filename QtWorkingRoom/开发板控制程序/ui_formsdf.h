/********************************************************************************
** Form generated from reading UI file 'formsdf.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSDF_H
#define UI_FORMSDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formsdf
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Formsdf)
    {
        if (Formsdf->objectName().isEmpty())
            Formsdf->setObjectName(QStringLiteral("Formsdf"));
        Formsdf->resize(400, 300);
        horizontalLayoutWidget = new QWidget(Formsdf);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(140, 130, 253, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Formsdf);

        QMetaObject::connectSlotsByName(Formsdf);
    } // setupUi

    void retranslateUi(QWidget *Formsdf)
    {
        Formsdf->setWindowTitle(QApplication::translate("Formsdf", "Form", 0));
        label->setText(QApplication::translate("Formsdf", "TextLabel", 0));
        label_2->setText(QApplication::translate("Formsdf", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Formsdf", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Formsdf: public Ui_Formsdf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSDF_H
