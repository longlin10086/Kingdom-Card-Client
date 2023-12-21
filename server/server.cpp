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
    _is_game_start = false;

    connect(ui->CONNECT_REP, &QPushButton::clicked, this, &ServerWindow::ConnectRep);
    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ServerWindow::BuildConnect);
    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ServerWindow::StopConnect);
    connect(ui->GAME_START, &QPushButton::clicked, this, &ServerWindow::GameStart);

}

ServerWindow::~ServerWindow()
{
    delete ui;
}

void ServerWindow::ConnectRep() {
    if (_is_begin_connect) Communicator::communicator().sendSignal(SIGNALS::CONNECT_REP);
}

void ServerWindow::BuildConnect(SIGNALS signal) {
    if (_is_begin_connect) return;
    if (signal == SIGNALS::CONNECT_REQ) _is_begin_connect = true;

    QMessageBox info;
    info.setText("connected");
    info.exec();

}

void ServerWindow::StopConnect(SIGNALS signal) {
    if(signal == SIGNALS::CONNECT_INTERRUPTED) _is_begin_connect = false;
}

void ServerWindow::GameStart() {
    if(_is_game_start) return;
    _is_game_start = true;
    Communicator::communicator().sendSignal(SIGNALS::GAME_START);
}
