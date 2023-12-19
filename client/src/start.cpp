//
// Created by 10315 on 2023/12/19.
//

#include "../include/start.h"
#include <QMessageBox>


StartWindow::StartWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::StartWindow)
{
    ui->setupUi(this);
    ui->Password->setEchoMode(QLineEdit::Password);

    connect(ui->GameStart, &QPushButton::clicked, this, &StartWindow::GameStart);
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::GameStart() {
    account = ui->Account->text();
    password = ui->Password->text();
    if (!account.isEmpty() and !password.isEmpty()){
        ui->Account->setReadOnly(true);
        ui->Password->setReadOnly(true);
        QMessageBox TestOK;
        TestOK.setText(account);
        TestOK.exec();
    }
    else{
        QMessageBox warning;
        warning.setText("账号密码不能为空");
        warning.exec();
    }

}

