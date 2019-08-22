#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class ValorAbaixoException : public exception{
    protected:
        string erro = "Valor muito baixo";
    public:
        ValorAbaixoException();
        virtual string wath();
};

#endif // VALORABAIXOEXCEPTION_H