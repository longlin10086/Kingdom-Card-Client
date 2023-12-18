//
// Created by 10315 on 2023/12/18.
//

#include "server.h"
#include "./ui_serverwindow.h"


ServerWindow::ServerWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::ServerWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &ServerWindow::ButtonClicked);
}

ServerWindow::~ServerWindow()
{
    delete ui;
}

void ServerWindow::ButtonClicked() {
    Communicator::communicator().sendSignal(SIGNALS::GAME_START);
}

