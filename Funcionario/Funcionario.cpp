#include "Funcionario.h"

Funcionario::Funcionario(){
    nome = "Sem nome";
    matricula = 0;
}

string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Funcionario::setMatricula(int m){
    if(m < 0){
        matricula = 0;
    }else{
        matricula = m;
    }
}
