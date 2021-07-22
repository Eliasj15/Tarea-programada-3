#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>
#include "ListaVariables.h"
#include "ListaMinterminos.h"


using namespace std;

class Controlador{
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *lista;

    public:
    Controlador(){lista = new ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>>();};//
    ~Controlador(){delete lista;};

    void rellenarLista(string entrada);
    bool devolverResultado(bool a, bool b, bool c, bool d){return lista->evaluarTodosMinterminos(a,b,c,d);};
    ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>> *getLista(){return lista;};
};

#endif