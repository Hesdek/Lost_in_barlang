#include "collision.h"



collision::collision(int w_, int h_,int posx_, int posy_)
{
    w = w_;
    h = h_;
    posx = posx_;
    posy = posy_;

}

int collision::getw()
{
    return w;
}

int collision::geth()
{
    return h;
}

int collision::getposx()
{
    return posx;
}

int collision::getposy()
{
    return  posy;
}

QRectF collision::boundingRect() const
{
       return QRectF(posx,posy,w,h);
}

void collision::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //    painter->setBrush(Qt::blue);
    //    painter->drawRect(boundingRect());
}
