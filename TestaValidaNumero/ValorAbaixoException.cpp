#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException(){

}

string ValorAbaixoException::what(){
    return erro;
}