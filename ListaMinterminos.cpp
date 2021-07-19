#include <iostream>
#include "listaMinterminos.h"
using namespace std;

void ListaMinterminos::agregarMintermino(Mintermino *m){
    if(cabeza==nullptr){
        cabeza=m;
    }
    else{
        Mintermino *it=cabeza;
        while((it->getSiguiente())!=nullptr){
            it=it->getSiguiente();
        }
        it->setSiguiente(m);
    }
}

bool ListaMinterminos::evaluarTodosMinterminos(bool a, bool b, bool c, bool d){
    bool resultado=false;
    Mintermino *it=cabeza;
    while(it!=nullptr){
        ListaVariables *lV=it->getListaVariables();
        resultado=resultado||lV->evaluarVariablesMintermino(a,b,c,d);
        it=it->getSiguiente();
    }
    return resultado;
}