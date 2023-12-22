/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget_3;
    QVBoxLayout *Self;
    QPushButton *SelfCard;
    QLabel *SelfName;
    QLabel *SelfHP;
    QLabel *SelfIdentity;
    QProgressBar *progressBar;
    QComboBox *comboBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *CardBox;
    QPlainTextEdit *GameTable;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *PlayerBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(1094, 804);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientWindow->sizePolicy().hasHeightForWidth());
        ClientWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ClientWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 520, 131, 239));
        Self = new QVBoxLayout(layoutWidget_3);
        Self->setObjectName("Self");
        Self->setContentsMargins(0, 0, 0, 0);
        SelfCard = new QPushButton(layoutWidget_3);
        SelfCard->setObjectName("SelfCard");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SelfCard->sizePolicy().hasHeightForWidth());
        SelfCard->setSizePolicy(sizePolicy1);

        Self->addWidget(SelfCard);

        SelfName = new QLabel(layoutWidget_3);
        SelfName->setObjectName("SelfName");

        Self->addWidget(SelfName);

        SelfHP = new QLabel(layoutWidget_3);
        SelfHP->setObjectName("SelfHP");

        Self->addWidget(SelfHP);

        SelfIdentity = new QLabel(layoutWidget_3);
        SelfIdentity->setObjectName("SelfIdentity");

        Self->addWidget(SelfIdentity);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(210, 520, 641, 23));
        progressBar->setValue(24);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(950, 520, 69, 22));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(210, 560, 811, 181));
        CardBox = new QHBoxLayout(horizontalLayoutWidget);
        CardBox->setObjectName("CardBox");
        CardBox->setContentsMargins(0, 0, 0, 0);
        GameTable = new QPlainTextEdit(centralwidget);
        GameTable->setObjectName("GameTable");
        GameTable->setGeometry(QRect(110, 330, 861, 171));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GameTable->sizePolicy().hasHeightForWidth());
        GameTable->setSizePolicy(sizePolicy2);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(110, 30, 861, 281));
        PlayerBox = new QHBoxLayout(horizontalLayoutWidget_2);
        PlayerBox->setObjectName("PlayerBox");
        PlayerBox->setContentsMargins(0, 0, 0, 0);
        ClientWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ClientWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1094, 21));
        ClientWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ClientWindow);
        statusbar->setObjectName("statusbar");
        ClientWindow->setStatusBar(statusbar);

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "MainWindow", nullptr));
        SelfCard->setText(QCoreApplication::translate("ClientWindow", "PushButton", nullptr));
        SelfName->setText(QCoreApplication::translate("ClientWindow", "TextLabel", nullptr));
        SelfHP->setText(QCoreApplication::translate("ClientWindow", "TextLabel", nullptr));
        SelfIdentity->setText(QCoreApplication::translate("ClientWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
