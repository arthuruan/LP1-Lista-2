#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario {
    private:
        double vendasSemanais;
        double percentualComissao;
        double salarioBase;
    public:
        Comissionado();
        Comissionado(string n, int m, double vs, double pc, double sb);

        double getVendasSemanais();
        double getPercentualComissao();
        double getSalarioBase();

        void setSalarioBase(double sb);
        void setVendasSemanais(double vs);
        void setPercentualComissao(double pc);

        void print();

        virtual double calcularSalario();
};

#endif // COMISSIONADO_H