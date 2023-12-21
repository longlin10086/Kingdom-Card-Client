#include "../include/client.h"


ClientWindow::ClientWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientWindow)
{
    ui->setupUi(this);

    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ClientWindow::StartGame);
    connect(&Communicator::communicator(), &Communicator::messageSent, this, &ClientWindow::ShowWindow);

}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::StartGame(SIGNALS signal) {
    if (signal == SIGNALS::GAME_START){

        for (int i = 0; i < CARD_ORIGIN_NUM; ++i) {
            CardsInHand.emplace_back(new Card());
            ui->CardBox->addWidget(CardsInHand[i].get());
        }
    }
}

void ClientWindow::ShowWindow(SIGNALS signal) {
    if (signal == SIGNALS::CONNECT_REP) {
        this->show();
    }
}

