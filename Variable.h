#ifndef VARIABLE_H
#define VARIABLE_H

class Variable{
    char letra;
    bool valor;
    Variable *siguiente;

    public:
    Variable(){siguiente=nullptr;};
    ~Variable(){delete siguiente;};

    Variable (char c, bool v){letra=c;valor=v;siguiente=nullptr;};
    void setSiguiente(Variable *p){siguiente=p;};
    void setValor(bool e);
    char getLetra(){return letra;};
    bool getValor(){return valor;};
    Variable *getSiguiente(){return siguiente;};
};
#endif