#ifndef CIRCULO_H
#define CIRCULO_H
#include <iostream>
#include "FiguraGeometrica.h"
#define PI 3.14

class Circulo : public FiguraGeometrica {
    private:
        float raio;
    public:
        Circulo();
        Circulo(float r);

        float getRaio();
        void setRaio(float r);

        float calcularArea();

        void print();
};

#endif // CIRCULO_H