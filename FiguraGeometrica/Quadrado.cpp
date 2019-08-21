#include "Quadrado.h"

Quadrado::Quadrado(){
    lado = 0;
    setNome("Quadrado");
}

Quadrado::Quadrado(float l){
    setLado(l);
    setNome("Quadrado");
}

float Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(float l){
    if(l < 0){
        lado = 0;
    }else{
        lado = l;
    }
}

float Quadrado::calcularArea(){
    return lado * lado;
}

void Quadrado::print(){
    cout << "\nNome: " << nome << endl << "Area: " << calcularArea() << endl;
}