/********************************************************************************
** Form generated from reading UI file 'serverwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWINDOW_H
#define UI_SERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *GAME_START;
    QPushButton *NOTICE_DYING;
    QPushButton *NOTICE_DEAD;
    QPushButton *YOUR_TURN;
    QPushButton *NEW_CARD;
    QPushButton *ACTION_PLAY;
    QPushButton *ACTION_PASS;
    QPushButton *CONNECT_ACK;
    QPushButton *KICK;
    QPushButton *GAME_STATUS;
    QPushButton *GAME_OVER;
    QPushButton *NOTICE_CARD;
    QPushButton *DISCARD_CARD;
    QPushButton *CONNECT_REP;
    QLineEdit *Value;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ServerWindow)
    {
        if (ServerWindow->objectName().isEmpty())
            ServerWindow->setObjectName("ServerWindow");
        ServerWindow->resize(849, 653);
        centralwidget = new QWidget(ServerWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 100, 721, 431));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        GAME_START = new QPushButton(layoutWidget);
        GAME_START->setObjectName("GAME_START");

        gridLayout->addWidget(GAME_START, 0, 0, 1, 1);

        NOTICE_DYING = new QPushButton(layoutWidget);
        NOTICE_DYING->setObjectName("NOTICE_DYING");

        gridLayout->addWidget(NOTICE_DYING, 1, 0, 1, 1);

        NOTICE_DEAD = new QPushButton(layoutWidget);
        NOTICE_DEAD->setObjectName("NOTICE_DEAD");

        gridLayout->addWidget(NOTICE_DEAD, 1, 1, 1, 1);

        YOUR_TURN = new QPushButton(layoutWidget);
        YOUR_TURN->setObjectName("YOUR_TURN");

        gridLayout->addWidget(YOUR_TURN, 2, 0, 1, 1);

        NEW_CARD = new QPushButton(layoutWidget);
        NEW_CARD->setObjectName("NEW_CARD");

        gridLayout->addWidget(NEW_CARD, 2, 1, 1, 1);

        ACTION_PLAY = new QPushButton(layoutWidget);
        ACTION_PLAY->setObjectName("ACTION_PLAY");

        gridLayout->addWidget(ACTION_PLAY, 3, 0, 1, 1);

        ACTION_PASS = new QPushButton(layoutWidget);
        ACTION_PASS->setObjectName("ACTION_PASS");

        gridLayout->addWidget(ACTION_PASS, 3, 1, 1, 1);

        CONNECT_ACK = new QPushButton(layoutWidget);
        CONNECT_ACK->setObjectName("CONNECT_ACK");

        gridLayout->addWidget(CONNECT_ACK, 4, 0, 1, 1);

        KICK = new QPushButton(layoutWidget);
        KICK->setObjectName("KICK");

        gridLayout->addWidget(KICK, 4, 1, 1, 1);

        GAME_STATUS = new QPushButton(layoutWidget);
        GAME_STATUS->setObjectName("GAME_STATUS");

        gridLayout->addWidget(GAME_STATUS, 0, 1, 1, 1);

        GAME_OVER = new QPushButton(layoutWidget);
        GAME_OVER->setObjectName("GAME_OVER");

        gridLayout->addWidget(GAME_OVER, 1, 2, 1, 1);

        NOTICE_CARD = new QPushButton(layoutWidget);
        NOTICE_CARD->setObjectName("NOTICE_CARD");

        gridLayout->addWidget(NOTICE_CARD, 0, 2, 1, 1);

        DISCARD_CARD = new QPushButton(layoutWidget);
        DISCARD_CARD->setObjectName("DISCARD_CARD");

        gridLayout->addWidget(DISCARD_CARD, 2, 2, 1, 1);

        CONNECT_REP = new QPushButton(layoutWidget);
        CONNECT_REP->setObjectName("CONNECT_REP");

        gridLayout->addWidget(CONNECT_REP, 3, 2, 1, 1);

        Value = new QLineEdit(layoutWidget);
        Value->setObjectName("Value");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Value->sizePolicy().hasHeightForWidth());
        Value->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Value, 4, 2, 1, 1);

        ServerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ServerWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 849, 21));
        ServerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ServerWindow);
        statusbar->setObjectName("statusbar");
        ServerWindow->setStatusBar(statusbar);

        retranslateUi(ServerWindow);

        QMetaObject::connectSlotsByName(ServerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ServerWindow)
    {
        ServerWindow->setWindowTitle(QCoreApplication::translate("ServerWindow", "MainWindow", nullptr));
        GAME_START->setText(QCoreApplication::translate("ServerWindow", "GAME_START", nullptr));
        NOTICE_DYING->setText(QCoreApplication::translate("ServerWindow", "NOTICE_DYING", nullptr));
        NOTICE_DEAD->setText(QCoreApplication::translate("ServerWindow", "NOTICE_DEAD", nullptr));
        YOUR_TURN->setText(QCoreApplication::translate("ServerWindow", "YOUR_TURN", nullptr));
        NEW_CARD->setText(QCoreApplication::translate("ServerWindow", "NEW_CARD", nullptr));
        ACTION_PLAY->setText(QCoreApplication::translate("ServerWindow", "ACTION_PLAY", nullptr));
        ACTION_PASS->setText(QCoreApplication::translate("ServerWindow", "ACTION_PASS", nullptr));
        CONNECT_ACK->setText(QCoreApplication::translate("ServerWindow", "CONNECT_ACK", nullptr));
        KICK->setText(QCoreApplication::translate("ServerWindow", "KICK", nullptr));
        GAME_STATUS->setText(QCoreApplication::translate("ServerWindow", "GAME_STATUS", nullptr));
        GAME_OVER->setText(QCoreApplication::translate("ServerWindow", "GAME_OVER", nullptr));
        NOTICE_CARD->setText(QCoreApplication::translate("ServerWindow", "NOTICE_CARD", nullptr));
        DISCARD_CARD->setText(QCoreApplication::translate("ServerWindow", "DISCARD_CARD", nullptr));
        CONNECT_REP->setText(QCoreApplication::translate("ServerWindow", "CONNECT_REP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerWindow: public Ui_ServerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWINDOW_H
