#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>

using namespace std;

class FiguraGeometrica{
    protected:
        string nome;
    public:
        FiguraGeometrica();
        virtual float calcularArea() = 0;

        string getNome();
        void setNome(string n);
};

#endif // FIGURAGEOMETRICA_H