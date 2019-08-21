#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

int main(void){

    Triangulo t1 = Triangulo(10, 5);
    Quadrado q1= Quadrado(4);
    Circulo c1 = Circulo(5);

    t1.print();
    q1.print();
    c1.print();

    return 0;
}