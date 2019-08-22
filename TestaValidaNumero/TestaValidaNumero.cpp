#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero(){

}

void TestaValidaNumero::validaNumero(int n){
    if(n <= 0){
        throw ValorAbaixoException();
    }else if(n > 100 && n < 1000){
        throw ValorAcimaException();
    }else if(n >= 1000){
        throw ValorMuitoAcimaException();
    }
}