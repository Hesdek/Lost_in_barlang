#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    view = new QGraphicsView(this);

   /* this->window()->showFullScreen();
    if (this->width() <= 1280 && this->height() <= 720) {
        this->showFullScreen();
        //this->showMaximized();
    }
    else {
        this->setMaximumSize(1280,720);
        this->setMinimumSize(1280,720);
        this->showMaximized();
    }
*/
    view->resize(1280,720);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   cargar_mundo1();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}
void MainWindow::cargar_mundo1()
{

    escenario = new map(":/Pictures/nivel_1.png");
    view->setScene(escenario->getMundo());

}
