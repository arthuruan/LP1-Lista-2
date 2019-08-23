#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>

using namespace std;

class Medico{
    protected:
        string nome;
        float altura;
        float peso;
        string especializacao;
    public:
        Medico();

        string getNome();
        float getAltura();
        float getPeso();
        virtual string getEspecializacao();

        void setNome(string n);
        void setAltura(float a);
        void setPeso(float p);

        virtual void print();

        virtual void atendimentoEspecifico() = 0;
};

#endif // MEDICO_H
