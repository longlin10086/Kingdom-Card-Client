//
// Created by 10315 on 2023/12/20.
//

#include "../include/card.h"

void Card::SetImage() {

}

void Card::SetupUi() {
    this->setGeometry(QRect(140, 90, 100, 180));

}

Card::Card(QPushButton *parent) {
    this->SetupUi();
}