#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include "IConta.h"

using namespace std;

class Conta : public IConta {
    protected:

        string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;

    public:

        Conta();
        Conta(string n, double sm, int nc, double s);

        string getNomeCliente();
        double getSalarioMensal();
        int  getNumeroConta();
        double getSaldo();
        double getLimite();

        void setNomeCliente(string n);
        void setSalarioMensal(double sm);
        void setNumeroConta(int nc);
        void setSaldo(double s);

        virtual void definirLimite();

        void sacar(double valor);
        void depositar(double valor);

        void print();
};

#endif // CONTA_H