#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>
#include <string>
#include "ListaVariables.h"
#include "ListaMinterminos.h"
#include "mainwindow.h"

using namespace std;

class MainWindow;

class Controlador{
    MainWindow *w;
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *lista;
    int matriz[4][4];

    public:
    //Controlador(){lista = new ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>>();w=new MainWindow(nullptr);w->setControlador(this);};
    Controlador();
    ~Controlador(){delete lista;};
    void rellenarLista(string entrada);
    bool devolverResultado(bool a, bool b, bool c, bool d){return lista->evaluarTodosMinterminos(a,b,c,d);};
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *getLista(){return lista;};
};

#endif
