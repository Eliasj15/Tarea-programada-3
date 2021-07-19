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

bool ListaVariables::evaluarVariablesMintermino(bool a, bool b, bool c, bool d){
    bool resultado=true;
    Variable *it=getCabeza();
    while(it!=nullptr&&resultado){
        if(it->getLetra()=='a'){
            it->setValor(a);
        }
        else{
            if(it->getLetra()=='b'){
                it->setValor(b);
            }
            else{
                if(it->getLetra()=='c'){
                    it->setValor(c);
                }
                else{
                    it->setValor(d);
                }
            }
        }
        resultado=resultado&&it->getValor();
        it=it->getSiguiente();
    }
    return resultado;
}