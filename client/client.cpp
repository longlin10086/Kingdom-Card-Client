#include "client.h"
#include "ui_clientwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&Communicator::communicator(), &Communicator::messageSent, this, &MainWindow::ChangeText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ChangeText(SIGNALS signal) {
    if (signal == SIGNALS::GAME_START) ui->label->setText("----------------------------");
}

