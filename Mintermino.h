#ifndef MINTERMINO_H
#define MINTERMINO_H
#include "ListaVariables.h"

class Mintermino{
    ListaVariables *lista;
    Mintermino *siguiente;

    public:
    Mintermino(){lista=nullptr;};
    ~Mintermino(){delete lista;};

    bool evaluarMintermino();
    void setSiguiente();
    Mintermino getSiguiente();
};
#endif