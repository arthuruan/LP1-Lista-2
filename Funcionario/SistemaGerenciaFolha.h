#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Comissionado.h"
#include "Horista.h"
#include "Funcionario.h"

class SistemaGerenciaFolha{
    private:
        Funcionario *funcionario[4];
        int i = 0;
    public:
        SistemaGerenciaFolha();

        void setFuncionario(Funcionario *func);
        double calculaValorFolha();
        double consultaSalarioFuncionario(string n);
};
#endif // SISTEMAGERENCIAFOLHA_H