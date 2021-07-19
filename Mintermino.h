#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "ListaVariables.h"

class Mintermino{
    ListaVariables *lista;
    Mintermino *siguiente;

    public:
    Mintermino(){lista=nullptr;};
    ~Mintermino(){delete lista;};
    Mintermino(ListaVariables *l){lista=l;siguiente=nullptr;};
    bool evaluarMintermino(bool a, bool b, bool c, bool d);
    void setSiguiente(Mintermino *m){siguiente=m;};
    ListaVariables *getListaVariables(){return lista;};
    Mintermino *getSiguiente(){return siguiente;};
};
#endif