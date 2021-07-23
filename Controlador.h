#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "mainwindow.h"
#include "ListaMinterminos.h"
#include "Bitacora.h"
#include <iostream>
#include <string>


using namespace std;

class MainWindow;

class Controlador{
    MainWindow *w;
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *lista;
    int matriz[4][4];
    Bitacora *b = new Bitacora();

    public:
    //Controlador(){lista = new ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>>();w=new MainWindow(nullptr);w->setControlador(this);};
    Controlador();
    ~Controlador(){delete lista;};
    void rellenarLista(string entrada);
    bool devolverResultado(bool a, bool b, bool c, bool d){return lista->evaluarTodosMinterminos(a,b,c,d);};
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *getLista(){return lista;};
    string refresh();
    string obtenerHilera();
    void rellenarMatriz(int v, int f, int c);
};

#endif
