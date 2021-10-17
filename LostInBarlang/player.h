#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QGraphicsItem>
enum direction {
    Left,
    Right,
    Down,
    Up
};

class Player
{
public:
    explicit Player(QWidget *parent = nullptr);
    ~Player();
     int vida_one  = 100;//vida del jugador
};

#endif // PLAYER_H
