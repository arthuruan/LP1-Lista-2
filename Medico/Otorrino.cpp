#include "Otorrino.h"

Otorrino::Otorrino(string n, float a, float p){
    setNome(n);
    setAltura(a);
    setPeso(p);
}

string Otorrino::getEspecializacao(){
    return especializacao = "Otorrino\n";
}

void Otorrino::atendimentoEspecifico(){
    cout << "Realizando exame do ouvido\n";
}

void Otorrino::print(){
        cout<< "Nome: " << nome << endl
            << "Altura: " << altura << endl
            << "Peso: " << peso << endl
            << "Especificacao: " << getEspecializacao() << endl;
}