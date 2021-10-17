#ifndef MENU_H
#define MENU_H


#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>
#include <QMediaPlayer>
#include <QMediaPlaylist>


class Menu: public QObject, public QGraphicsItem
{
public:

    Menu();
    QTimer *timer_inicio;
    QPixmap *pixmap_inicio;

    float filas, columnas;
    float ancho, alto;

    QMediaPlaylist *playlist;
    QMediaPlayer *musica;

};


#endif // MENU_H
