#include <iostream>
#include "ListaVariables.h"
using namespace std;

void ListaVariables::agregarVariable(Variable *p){
    if(cabeza==nullptr){
        cabeza=p;
    }
    else{
        Variable *it=getCabeza();
        while((it->getSiguiente())!=nullptr){
            it=it->getSiguiente();
        }
        it->setSiguiente(p);
    }
}

bool ListaVariables::evaluarVariablesMintermino(){
    bool resultado=true;
    Variable *it=getCabeza();
    while(it!=nullptr&&resultado){
        resultado=resultado&&it->getValor();
        it=it->getSiguiente();
    }
    return resultado;
}