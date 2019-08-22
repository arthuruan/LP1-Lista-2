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

void Horista::setSalarioPorHora(double sph){
    if(sph < 0){
        salarioPorHora = 0;
    }else{
        salarioPorHora = sph;
    }
}

void Horista::setHorasTrabalhadas(double ht){
    if(ht < 0){
        horasTrabalhadas = 0;
    }else{
        horasTrabalhadas = ht;
    }
}

double Horista::calcularSalario(){

    if(horasTrabalhadas <= 40){
        return 4 * salarioPorHora * horasTrabalhadas;
    }else{
        return 4 * ((salarioPorHora * 40) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5)));
    }
}

void Horista::print(){
    cout<< "\nHorista\n" << endl
        << "Nome: " << nome << endl
        << "Matricula: " << matricula << endl
        << "Salario por hora: " << salarioPorHora << endl
        << "Horas trabalhadas: " << horasTrabalhadas << endl
        << "Salario mensal: " << calcularSalario() << endl;
}