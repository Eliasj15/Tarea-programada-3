#ifndef LISTAVARIABLES_H
#define LISTAVARIABLES_H
#include "Variable.h"
class ListaVariables{
    Variable *cabeza;
    
    public:
    ListaVariables(){cabeza=nullptr;};
    ~ListaVariables(){delete cabeza;};

    void agregarVariable(Variable *p);
    Variable *getCabeza(){return cabeza;};
    bool evaluarVariablesMintermino(bool a, bool b, bool c, bool d);
    
};  
#endif