#include <iostream>
#include "Controlador.h"
#include <string>

using namespace std;

void Controlador::rellenarLista(string entrada){
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
            if(entrada[i+1]=='+'&&i+1<entrada.size()||i==entrada.size()-1||i==entrada.size()-2){
                Mintermino *m=new Mintermino(l);
                lista->agregarMintermino(m);
                l=nullptr;
                l=new ListaVariables();
                m=nullptr;
            }            
        }
    }
}