#ifndef LISTAVARIABLES_H
#define LISTAVARIABLES_H
#include "Variable.h"

template <class T>
class ListaVariables{
    T *cabeza;
    
    public:
    ListaVariables(){cabeza=nullptr;};
    ~ListaVariables(){delete cabeza;};

    void agregarVariable(T *p){
        if(cabeza==nullptr){
            cabeza=p;
        }
        else{
            Variable<char> *it=getCabeza();
            while((it->getSiguiente())!=nullptr){
                it=it->getSiguiente();
            }
            it->setSiguiente(p);
        }
    };
    T *getCabeza(){return cabeza;};
    bool evaluarVariablesMintermino(bool a, bool b, bool c, bool d){
        bool resultado=true;
        Variable<char> *it=getCabeza();
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
    };
    
};  
#endif

