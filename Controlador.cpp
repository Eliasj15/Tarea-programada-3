#include <iostream>
#include "Controlador.h"
#include <string>

using namespace std;

void Controlador::rellenarLista(string entrada){
    int contador=0;
    ListaVariables *l=new ListaVariables();
    bool estado=true;
    for (int i=0;i<entrada.size();i++){
        if(entrada[i]!='+'&&entrada[i]!='\''){
            if(entrada[i+1]=='\''&&i+1<entrada.size()){
                estado=false;
            }
            Variable *n=new Variable(entrada[i],estado);
            l->agregarVariable(n);    
            estado=true;
            bool condicionUno=i+1<entrada.size()-1&&entrada[i+1]=='+';
            bool condicionDos=i+2<entrada.size()-2&&entrada[i+2]=='+';
            bool condicionTres=i==entrada.size()-1;
            bool condicionCuatro=entrada[i+1]=='\''&&i+2==entrada.size();
            if(condicionUno||condicionDos||condicionTres||condicionCuatro){
                Mintermino *m=new Mintermino(l);
                lista->agregarMintermino(m);
                l=nullptr;
                l=new ListaVariables();
                m=nullptr;
            }            
        }
    }
}
