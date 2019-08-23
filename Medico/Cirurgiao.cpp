#include "Cirurgiao.h"

Cirurgiao::Cirurgiao(string n, float a, float p){
    setNome(n);
    setAltura(a);
    setPeso(p);
}

string Cirurgiao::getEspecializacao(){
    return especializacao = "Cirurgiao\n";
}

void Cirurgiao::atendimentoEspecifico(){
    cout << "Realizando Cirurgia\n";
}

void Cirurgiao::print(){
    cout<< "Nome: " << nome << endl
        << "Altura: " << altura << endl
        << "Peso: " << peso << endl
        << "Especificacao: " << getEspecializacao() << endl;
}