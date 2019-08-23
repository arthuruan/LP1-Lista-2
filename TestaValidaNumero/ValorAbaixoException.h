#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class ValorAbaixoException : public exception{
    protected:
        string erro = "Valor baixo";
    public:
        ValorAbaixoException();
        virtual string what();
};

#endif // VALORABAIXOEXCEPTION_H