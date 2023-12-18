//
// Created by 10315 on 2023/12/19.
//

#include "../include/start.h"

StartWindow::StartWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::StartWindow)
{
    ui->setupUi(this);

}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::ChangeText(SIGNALS signal) {
}
