#include "Assalariado.h"

Assalariado::Assalariado(){
    salario = 0;
    nome = "Sem nome";
    matricula = 0;
}

Assalariado::Assalariado(string n, int m, double s){
    setNome(n);
    setMatricula(m);
    setSalario(s);
}

double Assalariado::getSalario(){
    return salario;
}

void Assalariado::setSalario(double s){
    if(s < 0){
        salario = 0;
    }else{
        salario = s;
    }
}

double Assalariado::calculaSalario(){
    salario = salario;
}
