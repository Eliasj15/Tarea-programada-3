#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "ListaVariables.h"

template<class T>
class Mintermino{
    T *lista;
    U *siguiente;

    public:
    Mintermino(){lista=nullptr;};
    ~Mintermino(){delete lista;};
    Mintermino(T *l){lista=l; siguiente=nullptr;};
    bool evaluarMintermino(bool a, bool b, bool c, bool d);
    void setSiguiente(Mintermino *m){siguiente=m;};
    T *getListaVariables(){return lista;};
    Mintermino *getSiguiente(){return siguiente;};
};
#endif

