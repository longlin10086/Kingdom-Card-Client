#include "../include/client.h"


ClientWindow::ClientWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientWindow)
{
    ui->setupUi(this);

    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ClientWindow::ChangeText);

}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::ChangeText(SIGNALS signal) {
    if (signal == SIGNALS::GAME_START) ui->label->setText("----------------------------");
}

