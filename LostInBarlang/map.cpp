#include "map.h"

map::map(QString mundo1_)
{
    //contenedor = new QVector<colisiones *>;
    mundo1 = new QGraphicsScene;
    mundo1->setSceneRect(0,0,3840,720);
    mundo1->setBackgroundBrush(QBrush(QImage(mundo1_)));
}

QGraphicsScene *map::getMundo() const
{
    return mundo1;

}


map::~map()
{
delete mundo1;
}
