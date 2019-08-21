#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){
    nome = "Sem nome";
}

string FiguraGeometrica::getNome(){
    return nome;
}

void FiguraGeometrica::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}