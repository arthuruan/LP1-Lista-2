#include "Oftalmologista.h"

Oftalmologista::Oftalmologista(string n, float a, float p){
    setNome(n);
    setAltura(a);
    setPeso(p);
}

string Oftalmologista::getEspecializacao(){
    return especializacao = "Oftalmologista\n";
}

void Oftalmologista::atendimentoEspecifico(){
    cout << "Realizando analise do olho\n";
}

void Oftalmologista::print(){
        cout<< "Nome: " << nome << endl
            << "Altura: " << altura << endl
            << "Peso: " << peso << endl
            << "Especificacao: " << getEspecializacao()<< endl;
}