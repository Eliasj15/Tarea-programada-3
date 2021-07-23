#include "mainwindow.h"
#include "ListaMinterminos.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    Controlador *c = new Controlador();
    //w.show();
    return a.exec();
}
