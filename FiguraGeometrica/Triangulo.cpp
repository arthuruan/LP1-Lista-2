#include "Triangulo.h"

Triangulo::Triangulo(){
    base = altura = 0;
    setNome("Triangulo");   
}

Triangulo::Triangulo(float b, float h){
    setBase(b);
    setAltura(h);
    setNome("Triangulo");
}

float Triangulo::getBase(){
    return base;
}

float Triangulo::getAltura(){
    return altura;
}

void Triangulo::setBase(float b){
    if(b < 0){
        base = 0;
    }else{
        base = b;
    }
}

void Triangulo::setAltura(float h){
    if(h < 0){
        altura = 0;
    }else{
        altura = h;
    }
}

float Triangulo::calcularArea(){
    return (base * altura) / 2;
}

void Triangulo::print(){
    cout << "\nNome: " << getNome() << endl << "Area: " << calcularArea() << endl;
}