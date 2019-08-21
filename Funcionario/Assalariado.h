#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario{
    private:
        double salario;
    public:
        Assalariado();
        Assalariado(string n, int m, double s);

        double getSalario();
        void setSalario(double s);

        double calculaSalario();

};

#endif // ASSALARIADO_H