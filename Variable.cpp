#include "Variable.h"

void Variable::setValor(bool e){
    if(valor==true){
        valor=e;
    }
    else{
        valor=!e;
    }
}