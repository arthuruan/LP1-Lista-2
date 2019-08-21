#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica {
    private:
        float base, altura;
    public:
        Triangulo();
        Triangulo(float b, float h);

        float getBase();
        float getAltura();

        void setBase(float b);
        void setAltura(float h);

        float calcularArea();

        void print();
};

#endif // TRIANGULO_H