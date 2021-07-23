#include "mainwindow.h"
#include "ListaMinterminos.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controlador *c = new Controlador();
    return a.exec();
}
