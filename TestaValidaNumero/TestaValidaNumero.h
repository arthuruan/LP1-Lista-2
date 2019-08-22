#ifndef TESTAVALIDANUMERO_H
#define TESTEVALIDANUMERO_H
#include <iostream>
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

using namespace std;

class TestaValidaNumero{
    public:
        TestaValidaNumero();
        void validaNumero(int num);
};
#endif // TESTEVALIDANUMERO_H