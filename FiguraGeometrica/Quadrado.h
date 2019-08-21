#ifndef QUADRADO_H
#define QUADRADO_H
#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

class Quadrado : public FiguraGeometrica{
    private:
        float lado;
    public:
        Quadrado();
        Quadrado(float l);

        float getLado();
        void setLado(float l);

        float calcularArea();

        void print();
};

#endif // QUADRADO_H