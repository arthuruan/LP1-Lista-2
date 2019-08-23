#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException(){}

string SaldoNaoDisponivelException::what(){
    return erro;
}