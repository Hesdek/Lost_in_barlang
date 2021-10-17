#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //construyendo escena
    ui->setupUi(this);
    view = new QGraphicsView(this);
    view->resize(1280,720);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->setMaximumSize(1280,720);
    this->setMinimumSize(1280,720);
    this->showMaximized();
    //Se construye el nivel seleccionado
    N= "2"; //Selecciona el nivel a comenzar
    nivel(N);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::nivel(std::string N_)
{
    if(N_=="1"){
        cargar_mundo1();
    }
    else if(N_=="2"){
        cargar_mundo2();
    }
    else if(N_=="3"){
        cargar_mundo3();
    }
}
void MainWindow::cargar_mundo1()
{

    escenario = new map(":/Pictures/nivel_1.png");
    view->setScene(escenario->getMundo());

}
void MainWindow::cargar_mundo2()
{

    escenario2 = new map2(":/Pictures/nivel_2.png");
    view->setScene(escenario2->getMundo());

}

void MainWindow::cargar_mundo3()
{

    escenario3 = new map3(":/Pictures/nivel_3.png");
    view->setScene(escenario3->getMundo());

}

