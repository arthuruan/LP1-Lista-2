#include "Ginecologista.h"

Ginecologista::Ginecologista(string n, float a, float p){
    setNome(n);
    setAltura(a);
    setPeso(p);
}

string Ginecologista::getEspecializacao(){
    return especializacao = "Ginecologista\n";
}

void Ginecologista::atendimentoEspecifico(){
    cout << "Realizando exame ginecologico\n";
}  

void Ginecologista::print(){
        cout<< "Nome: " << nome << endl
            << "Altura: " << altura << endl
            << "Peso: " << peso << endl
            << "Especificacao: " << getEspecializacao() << endl;
}