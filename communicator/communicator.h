//
// Created by 10315 on 2023/12/18.
//

#ifndef KINGDOM_CARD_COMMUNICATOR_H
#define KINGDOM_CARD_COMMUNICATOR_H

#include <QObject>

enum SIGNALS{
    GAME_START,
    GAME_STATUS,
    NOTICE_CARD,
    NOTICE_DYING,
    NOTICE_DEAD,
    GAME_OVER,
    YOUR_TURN,
    NEW_CARD,
    DISCARD_CARD,
    ACTION_PLAY,
    ACTION_PASS,
    CONNECT_REQ,
    CONNECT_REP,
    CONNECT_ACK,
    KICK
};

class Communicator : public QObject {
    Q_OBJECT

public:
    static Communicator& communicator(){
        static Communicator communicator;
        return communicator;
    }


signals:
    void messageSent(SIGNALS signal);
public slots:
    void sendSignal(SIGNALS signal);

private:
    Communicator(){}
};


#endif //KINGDOM_CARD_COMMUNICATOR_H
