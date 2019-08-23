#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>
#include <iostream>

using namespace std;

class SaldoNaoDisponivelException : public exception{
    protected:
        string erro = "Saldo nao disponivel\n";
    public:
        SaldoNaoDisponivelException();
        virtual string what();
};


#endif // !SALDONAODISPONIVELEXCEPTION_H