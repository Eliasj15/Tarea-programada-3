#ifndef VARIABLE_H
#define VARIABLE_H

class Variable{
    char letra;
    bool negado;
    bool valor;
    Variable *siguiente;

    public:
    Variable(){siguiente=nullptr;};
    ~Variable(){delete siguiente;};

    Variable (char c, bool n, bool v){letra=c;negado=n;valor=v;};
    void setLetra();
    void setNegado();
    void setValor();
    void setSiguiente(Variable *p){siguiente=p;};
    char getLetra(){return letra;};
    bool getNegado(){return negado;};
    bool getValor(){return valor;};
    Variable *getSiguiente(){return siguiente;};
};
#endif