#include "map2.h"

map2::map2(QString mundo2_)
{
    //contenedor = new QVector<colisiones *>;
    mundo2 = new QGraphicsScene;
    mundo2->setSceneRect(0,0,3840,720);
    mundo2->setBackgroundBrush(QBrush(QImage(mundo2_)));
}

QGraphicsScene *map2::getMundo() const
{
    return mundo2;

}


map2::~map2()
{
delete mundo2;
}
