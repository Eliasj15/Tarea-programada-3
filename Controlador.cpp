#include "Controlador.h"
#include "mainwindow.h"
#include "ListaMinterminos.h"
#include "Bitacora.h"
#include <QString>

#include <QApplication>

using namespace std;

Controlador::Controlador(){
    w=new MainWindow(nullptr);
    w->setControlador(this);
    lista=new ListaMinterminos<Mintermino<ListaVariables<Variable<char>>>>();
    b= new Bitacora();
    w->show();
}
void Controlador::rellenarLista(string entrada){
    QString cadena=QString::fromStdString(entrada);
    int limite=cadena.size();
    ListaVariables<Variable<char>> *l=new ListaVariables<Variable<char>>();
    bool estado=true;
    for (int i=0;i<limite;i++){
        if(entrada[i]!='+'&&entrada[i]!='\''){
            if(entrada[i+1]=='\''&&i+1<limite){
                estado=false;
            }
            Variable<char> *n=new Variable<char>(entrada[i],estado);
            l->agregarVariable(n);    
            estado=true;
            bool condicionUno=(int)entrada[i]<101&&(int)entrada[i]>96&&entrada[i+1]=='+';
            bool condicionDos=entrada[i+1]=='\''&&entrada[i+2]=='+';
            bool condicionTres=(int)entrada[i]<101&&(int)entrada[i]>96&&i==limite-1;
            bool condicionCuatro=entrada[i+1]=='\''&&i+2==limite;
            if(condicionUno||condicionDos||condicionTres||condicionCuatro){
                Mintermino<ListaVariables<Variable<char>>> *m=new Mintermino<ListaVariables<Variable<char>>>(l);
                lista->agregarMintermino(m);
                l=nullptr;
                l=new ListaVariables<Variable<char>>();
                m=nullptr;
            }            
        }
    }
}

void Controlador::rellenarMatriz(int v, int f, int c){
    matriz[f][c]=v;
}

string Controlador::obtenerHilera(){
    bool primero=false;
    string resultado="";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matriz[i][j]==1){
                if(primero){
                    resultado+="+";
                }
                primero=true;
                switch(j){
                    case 0: resultado+="ab";break;
                    case 1: resultado+="ab'";break;
                    case 2: resultado+="a'b'";break;
                    case 3: resultado+="a'b";break;
                }
                switch(i){
                    case 0:resultado+="cd";break;
                    case 1: resultado+="cd'";break;
                    case 2: resultado+="c'd'";break;
                    case 3: resultado+="c'd";break;
                }

            }
        }
    }
    return resultado;
}
string Controlador::refresh(){
    string text = b->read();
    return text;
}

void Controlador::agregarFuncion(string u){
    b->write(u);
}
