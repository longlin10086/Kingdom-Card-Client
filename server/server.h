//
// Created by 10315 on 2023/12/18.
//

#ifndef KINGDOM_CARD_SERVER_H
#define KINGDOM_CARD_SERVER_H

#include <QMainWindow>
#include "../communicator/communicator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ServerWindow; }
QT_END_NAMESPACE

class ServerWindow : public QMainWindow
{
Q_OBJECT

public:
    ServerWindow(QWidget *parent = nullptr);
    ~ServerWindow();



private slots:
    void ButtonClicked();
    void BuildConnect(SIGNALS signal);
    void StopConnect(SIGNALS signal);

private:
    Ui::ServerWindow *ui;
    bool _is_begin_connect;


};

#endif //KINGDOM_CARD_SERVER_H
