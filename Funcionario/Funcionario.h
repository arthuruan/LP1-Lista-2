#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>

using namespace std;

class Funcionario{
    protected:
        string nome;
        int matricula;
    public:
        Funcionario();
    
        string getNome();
        int getMatricula();

        void setNome(string n);
        void setMatricula(int m);

        virtual double calculaSalario() = 0;
};

#endif // FUNCIONARIO_H