#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>
#include <string>
#include "ListaVariables.h"
#include "ListaMinterminos.h"


using namespace std;

class Controlador{
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *lista;
    int matriz[4][4];

    public:
    Controlador(){lista = new ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>>();matriz={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};};//
    ~Controlador(){delete lista;};
    void rellenarLista(string entrada);
    bool devolverResultado(bool a, bool b, bool c, bool d){return lista->evaluarTodosMinterminos(a,b,c,d);};
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *getLista(){return lista;};
};

#endif
