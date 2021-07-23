#ifndef LISTAMINTERMINOS_H
#define LISTAMINTERMINOS_H
#include "Mintermino.h"


template <class T>
class ListaMinterminos{
    T *cabeza;

    public:
    ListaMinterminos(){cabeza=nullptr;};
    ~ListaMinterminos(){delete cabeza;};

    void agregarMintermino(T *m){
        if(cabeza==nullptr){
            cabeza=m;
        }
        else{
            Mintermino<ListaVariables<Variable<char>>> *it=cabeza;
            while((it->getSiguiente())!=nullptr){
                it=it->getSiguiente();
            }
            it->setSiguiente(m);
        }
    };
    bool evaluarTodosMinterminos(bool a, bool b, bool c, bool d){
        bool resultado=false;
        Mintermino<ListaVariables<Variable<char>>> *it=cabeza;
        while(it!=nullptr){
            ListaVariables<Variable<char>> *lV=it->getListaVariables();
            resultado=resultado||lV->evaluarVariablesMintermino(a,b,c,d);
            it=it->getSiguiente();
        }
        return resultado;
    };
    T *getCabeza(){return cabeza;};
};
#endif
