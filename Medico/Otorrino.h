#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"

class Otorrino : public Medico{
    public:
        Otorrino(string n, float a, float p);

        string getEspecializacao();

        void print();

        void atendimentoEspecifico();
};

#endif // OTORRINO_H