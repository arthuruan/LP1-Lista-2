#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"

class Oftalmologista : public Medico{
    public:
        Oftalmologista(string n, float a, float p);

        string getEspecializacao();

        void print();

        void atendimentoEspecifico();
};

#endif // OFTALMOLOGISTA_H