#ifndef MAP_H
#define MAP_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QGraphicsScene>

class map
{
public:
    map(QString mundo1_);
    ~map();

   // QVector<colisiones *> *getContenedor() const;
    QGraphicsScene *getMundo() const;
    //void carga_Datos(QString nombre_archivo, QVector<colisiones *> *container);
private:
    //colisiones *rec;
    QGraphicsScene *mundo1;
    //QVector<colisiones *> *contenedor;
};
#endif // MAP_H
