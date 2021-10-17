#ifndef MAP2_H
#define MAP2_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QGraphicsScene>

class map2
{
public:
    map2(QString mundo2_);
    ~map2();

   // QVector<colisiones *> *getContenedor() const;
    QGraphicsScene *getMundo() const;
    //void carga_Datos(QString nombre_archivo, QVector<colisiones *> *container);
private:
    //colisiones *rec;
    QGraphicsScene *mundo2;
    //QVector<colisiones *> *contenedor;
};

#endif // MAP2_H
