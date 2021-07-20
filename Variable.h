#ifndef VARIABLE_H
#define VARIABLE_H

template <class T>
class Variable{
    T letra;
    bool valor;
    U *siguiente;

    public:
    Variable(){siguiente=nullptr;};
    ~Variable(){delete siguiente;};

    Variable (T c, bool v){letra=c;valor=v;siguiente=nullptr;};
    void setSiguiente(Variable *p){siguiente=p;};
    void setValor(bool e);
    T getLetra(){return letra;};
    bool getValor(){return valor;};
    Variable *getSiguiente(){return siguiente;};
};
#endif

template <class T>
void Variable<T>::setValor(bool e){
    if(valor==true){
        valor=e;
    }
    else{
        valor=!e;
    }
}