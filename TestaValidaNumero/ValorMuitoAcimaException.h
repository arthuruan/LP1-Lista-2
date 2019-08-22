#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class ValorMuitoAcimaException : public exception{
    protected:
        string erro = "Valor muito acima";
    public:
        ValorMuitoAcimaException();
        virtual string what();
};

#endif // VALORMUITOACIMAEXCEPTION_H