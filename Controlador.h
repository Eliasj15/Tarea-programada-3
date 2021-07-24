#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <QString>
#include "mainwindow.h"
#include "ListaMinterminos.h"
#include "Bitacora.h"
#include <iostream>


using namespace std;

class MainWindow;

class Controlador{
    MainWindow *w;
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *lista;
    int matriz[4][4];
    Bitacora *b;//= new Bitacora();

    public:
    Controlador();
    ~Controlador(){delete lista;};
    void rellenarLista(string entrada);
    bool devolverResultado(bool a, bool b, bool c, bool d){return lista->evaluarTodosMinterminos(a,b,c,d);};
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *getLista(){return lista;};
    string refresh();
    string obtenerHilera();
    void rellenarMatriz(int v, int f, int c);
    void agregarFuncion(string u);
    string devolverMinterminos(){return lista->devolverComoString();};
};
#endif
