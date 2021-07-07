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

    void setLetra();
    void setNegado();
    void setValor();
    void setSiguiente();
    char getLetra(){return letra;};
    bool getNegado(){return negado;};
    bool getValor(){return valor;};
    Variable *getSiguiente(){return siguiente;};
};
#endif