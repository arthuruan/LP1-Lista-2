#include "Circulo.h"

Circulo::Circulo(){
    raio = 0;
    setNome("Circulo");
}

Circulo::Circulo(float r){
    setRaio(r);
    setNome("Circulo");
}

float Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(float r){
    if(r < 0){
        raio = 0;
    }else{
        raio = r;
    }
}

float Circulo::calcularArea(){
    return (raio * raio * PI);
}

void Circulo::print(){
    cout << "\nNome: " << nome << endl << "Area: " << calcularArea() << endl;
}