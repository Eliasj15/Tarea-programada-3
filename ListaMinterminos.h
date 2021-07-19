#ifndef LISTAMINTERMINOS_H
#define LISTAMINTERMINOS_H
#include "Mintermino.h"
class ListaMinterminos{
    Mintermino *cabeza;

    public:
    ListaMinterminos(){cabeza=nullptr;};
    ~ListaMinterminos(){delete cabeza;};

    void agregarMintermino(Mintermino*p);
    bool evaluarTodosMinterminos(bool a, bool b, bool c, bool d);
    Mintermino *getCabeza(){return cabeza;};
};
#endif