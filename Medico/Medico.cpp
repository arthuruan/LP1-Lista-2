#include "Medico.h"

Medico::Medico(){
    nome = "Sem nome";
    altura = 0;
    peso = 0;
    especializacao = "Nao especificada";
}

string Medico::getNome(){
    return nome;
}

float Medico::getAltura(){
    return altura;
}

float Medico::getPeso(){
    return peso;
}

string Medico::getEspecializacao(){
    return especializacao;
}

void Medico::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Medico::setAltura(float a){
    if(a < 0){
        altura = 0;
    }else{
        altura = a;
    }
}

void Medico::setPeso(float p){
    if(p < 0){
        peso = 0;
    }else{
        peso = p;
    }
}

void Medico::print(){}