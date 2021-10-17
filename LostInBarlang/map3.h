#ifndef MAP3_H
#define MAP3_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QGraphicsScene>


class map3
{
public:
    map3(QString mundo3_);
    ~map3();

   // QVector<colisiones *> *getContenedor() const;
    QGraphicsScene *getMundo() const;
    //void carga_Datos(QString nombre_archivo, QVector<colisiones *> *container);
private:
    //colisiones *rec;
    QGraphicsScene *mundo3;
    //QVector<colisiones *> *contenedor;
};
#endif // MAP3_H
