//
// Created by 10315 on 2023/12/18.
//

#include "server.h"
#include "./ui_serverwindow.h"

#include <QMessageBox>

ServerWindow::ServerWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::ServerWindow)
{
    ui->setupUi(this);
    _is_begin_connect = false;

    connect(ui->pushButton, &QPushButton::clicked, this, &ServerWindow::ButtonClicked);
    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ServerWindow::BuildConnect);
    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ServerWindow::StopConnect);

}

ServerWindow::~ServerWindow()
{
    delete ui;
}

void ServerWindow::ButtonClicked() {
    if (_is_begin_connect) Communicator::communicator().sendSignal(SIGNALS::GAME_START);
}

void ServerWindow::BuildConnect(SIGNALS signal) {
    if (_is_begin_connect) return;
    if (signal == SIGNALS::CONNECT_REQUEST) _is_begin_connect = true;

    QMessageBox info;
    info.setText("connected");
    info.exec();
}

void ServerWindow::StopConnect(SIGNALS signal) {
    if(signal == SIGNALS::CONNECT_INTERRUPTED) _is_begin_connect = false;
}

