#ifndef COLLISION_H
#define COLLISION_H


#include <QGraphicsItem>
#include <QPainter>

//Clase para las colisiones
class collision: public QGraphicsItem
{

public:
    //Ancho y alto de la colision y posicion en X y en Y
    int w,h;
    int posx,posy;

    //Constructor de las plataformas
    collision(int w_, int h_,int posx_, int posy_);

    //metodos get
    int getw();
    int geth();
    int getposx();
    int getposy();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,QWidget *widget=nullptr);
};
#endif // COLLISION_H
