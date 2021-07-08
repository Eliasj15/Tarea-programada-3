#include <iostream>
#include "ListaVariables.h"
using namespace std;

void ListaVariables::agregarVariable(Variable *p){
    if(cabeza==nullptr){
        cabeza=p;
    }
    else{
        Variable *it=cabeza;
        while(it!=nullptr){
            it=it->getSiguiente();
        }
        it->setSiguiente(p);
    }
}