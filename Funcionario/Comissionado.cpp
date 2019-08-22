#include "Comissionado.h"

Comissionado::Comissionado(){
    vendasSemanais = 0;
    percentualComissao = 0;
    salarioBase = 0;
}

Comissionado::Comissionado(string n, int m, double vs, double pc, double sb){
    setNome(n);
    setMatricula(m);
    setVendasSemanais(vs);
    setPercentualComissao(pc);
    setSalarioBase(sb);
}

double Comissionado::getSalarioBase(){
    return salarioBase;
}

double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}

double Comissionado::getPercentualComissao(){
    return percentualComissao;
}

void Comissionado::setVendasSemanais(double vs){
    if(vs < 0){
        vendasSemanais = 0;
    }else{
        vendasSemanais = vs;
    }
}

void Comissionado::setPercentualComissao(double pc){
    if(pc < 0){
        percentualComissao = 0;
    }else{
        percentualComissao = pc;
    }
}

void Comissionado::setSalarioBase(double sb){
    if(sb < 0){
        salarioBase = 0;
    }else{
        salarioBase = sb;
    }
}

double Comissionado::calcularSalario(){
    return 4 * (salarioBase + (vendasSemanais * (percentualComissao/100)));
}

void Comissionado::print(){
    cout<< "\nComissionado\n" << endl
        << "Nome: " << nome << endl
        << "Matricula: " << matricula << endl
        << "Salario base: " << salarioBase << endl
        << "Vendas semanais: " << vendasSemanais << endl
        << "Percentual de comissao: " << percentualComissao << endl
        << "Salario mensal: " << calcularSalario() << endl << endl;
}