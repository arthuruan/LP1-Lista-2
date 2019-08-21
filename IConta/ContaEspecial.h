#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta {
    public:
        ContaEspecial(string n, double sm, int nc, double s);
        void definirLimite();
};

#endif // CONTAESPECIAL_H