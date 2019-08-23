#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"

class Cirurgiao : public Medico{
    public:
        Cirurgiao(string n, float a, float p);

        string getEspecializacao();

        void print();

        void atendimentoEspecifico();        
};

#endif // CIRURGIAO_H