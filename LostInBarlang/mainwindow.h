#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QMediaPlayer>
#include "map.h"
#include "map2.h"
#include "map3.h"
#include "datareading.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QTimer>
#include <QKeyEvent>
#include <QWidget>
#include <math.h>
#include <string>
#include "player.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     std::string N;
     void nivel(std::string N_);
     void cargar_mundo1();
     void cargar_mundo2();
     void cargar_mundo3();
//    void move(direction dir,QVector<collision *>*contenedor);
private:
    Ui::MainWindow *ui;
//niveles
    QGraphicsView *view;
    map *escenario;
    map2 *escenario2;
    map3 *escenario3;
 //   DataReading *lector;


};
#endif // MAINWINDOW_H
