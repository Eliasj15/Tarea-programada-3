#ifndef LISTAMINTERMINOS_H
#define LISTAMINTERMINOS_H
#include "Mintermino.h"
class ListaMinterminos{
    Mintermino *cabeza;

    public:
    ListaMinterminos(){cabeza=nullptr;};
    ~ListaMinterminos(){delete cabeza;};

    void agregarMintermino(ListaVariables *p);
    bool evaluarMonomios();

};
#endif