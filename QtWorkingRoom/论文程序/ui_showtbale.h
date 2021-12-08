/********************************************************************************
** Form generated from reading UI file 'showtbale.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTBALE_H
#define UI_SHOWTBALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showTbale
{
public:

    void setupUi(QWidget *showTbale)
    {
        if (showTbale->objectName().isEmpty())
            showTbale->setObjectName(QStringLiteral("showTbale"));
        showTbale->resize(543, 500);

        retranslateUi(showTbale);

        QMetaObject::connectSlotsByName(showTbale);
    } // setupUi

    void retranslateUi(QWidget *showTbale)
    {
        showTbale->setWindowTitle(QApplication::translate("showTbale", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class showTbale: public Ui_showTbale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTBALE_H
