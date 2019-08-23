#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H 
#include "Medico.h"

class Ginecologista : public Medico{
    public:
        Ginecologista(string n, float a, float p);

        string getEspecializacao();

        void print();

        void atendimentoEspecifico();        
};

#endif // GINECOLOGISTA_H
