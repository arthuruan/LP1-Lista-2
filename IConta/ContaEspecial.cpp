#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string n, double sm, int nc, double s){
    setNomeCliente(n);
    setSalarioMensal(sm);
    setNumeroConta(nc);
    setSaldo(s);
}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMensal;
}