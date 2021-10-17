#include "map3.h"

map3::map3(QString mundo3_)
{
    //contenedor = new QVector<colisiones *>;
    mundo3 = new QGraphicsScene;
    mundo3->setSceneRect(0,0,1280,720);
    mundo3->setBackgroundBrush(QBrush(QImage(mundo3_)));
}

QGraphicsScene *map3::getMundo() const
{
    return mundo3;

}


map3::~map3()
{
delete mundo3;
}
