#include "Horista.h"

Horista::Horista(){
    salarioPorHora = 0;
    horasTrabalhadas = 0;
}

Horista::Horista(string n, int m, double sph, double ht){
    setNome(n);
    setMatricula(m);
    setSalarioPorHora(sph);
    setHorasTrabalhadas(ht);
}

double Horista::getSalarioPorHora(){
    return salarioPorHora;
}

double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

