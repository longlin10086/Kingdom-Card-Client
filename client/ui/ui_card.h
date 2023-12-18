/********************************************************************************
** Form generated from reading UI file 'ui/card.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CARD_H
#define CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form{
public:
        QPushButton *Card;

        void setupUi(QWidget *Form)
        {
            if (Form->objectName().isEmpty())
                Form->setObjectName("Form");
            Form->resize(392, 369);
            Card = new QPushButton(Form);
            Card->setObjectName("Card");
            Card->setGeometry(QRect(140, 90, 100, 180));

            retranslateUi(Form);

            QMetaObject::connectSlotsByName(Form);
        } // setupUi

        void retranslateUi(QWidget *Form)
        {
            Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
            Card->setText(QCoreApplication::translate("Form", "Card", nullptr));
        } // retranslateUi

    };

namespace Ui {
        class Form: public Ui_Form {};
    } // namespace Ui

QT_END_NAMESPACE

#endif // CARD_H
