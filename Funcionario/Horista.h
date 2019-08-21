#ifndef HORISTA_H 
#define HORISTA_H
#include "Funcionario.h"

class Horista : public Funcionario{
    private:
        double salarioPorHora;
        double horasTrabalhadas;
    public:
        Horista();
        Horista(string n, int m, double sph, double ht);

        double getSalarioPorHora();
        double getHorasTrabalhadas();

        void setSalarioPorHora(double sph);
        void setHorasTrabalhadas(double ht);

        double calcularSalario();

};

#endif // HORISTA_H