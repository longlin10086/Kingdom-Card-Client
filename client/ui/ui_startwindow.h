/********************************************************************************
** Form generated from reading UI file 'ui/startwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTextEdit *Account;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QTextEdit *Password;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *GameStart;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName("StartWindow");
        StartWindow->resize(800, 600);
        centralwidget = new QWidget(StartWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 10, 751, 531));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        label->setPixmap(QPixmap(QString::fromUtf8(":/img/start.jpg")));
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setMargin(0);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(label_2);

        Account = new QTextEdit(widget);
        Account->setObjectName("Account");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Account->sizePolicy().hasHeightForWidth());
        Account->setSizePolicy(sizePolicy1);
        Account->setMaximumSize(QSize(16777215, 40));

        horizontalLayout->addWidget(Account);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_2->addWidget(label_3);

        Password = new QTextEdit(widget);
        Password->setObjectName("Password");
        sizePolicy1.setHeightForWidth(Password->sizePolicy().hasHeightForWidth());
        Password->setSizePolicy(sizePolicy1);
        Password->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_2->addWidget(Password);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        GameStart = new QPushButton(widget);
        GameStart->setObjectName("GameStart");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GameStart->sizePolicy().hasHeightForWidth());
        GameStart->setSizePolicy(sizePolicy2);
        GameStart->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(GameStart);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        StartWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StartWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        StartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(StartWindow);
        statusbar->setObjectName("statusbar");
        StartWindow->setStatusBar(statusbar);

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QCoreApplication::translate("StartWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("StartWindow", "\347\231\273\345\275\225IP\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("StartWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        GameStart->setText(QCoreApplication::translate("StartWindow", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
