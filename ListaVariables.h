#ifndef LISTAVARIABLES_H
#define LISTAVARIABLES_H
#include "Variable.h"
class ListaVariables{
    Variable *cabeza;
    
    public:
    ListaVariables(){cabeza=nullptr;};
    ~ListaVariables(){delete cabeza;};

    void agregarVariable();
    
};  
#endif