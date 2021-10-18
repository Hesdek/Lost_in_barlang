#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsItem>
#include "datareading.h"

enum direction {
    Left,
    Right,
    Down,
    Up
};

class Player
{
public:
    Player();
    ~Player();
    //void cargarmundo(int a);

private:
//    DataReading *lector;
    int vida_one  = 100;//vida del jugador
};

#endif // PLAYER_H
