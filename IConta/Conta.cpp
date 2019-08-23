#include "Conta.h"

Conta::Conta(){
    nomeCliente = "Sem nome.";
    salarioMensal = 0;
    numeroConta = 0;
    saldo = 0;
    limite = 0;
}

Conta::Conta(string n, double sm, int nc, double s) : Conta() {
    setNomeCliente(n);
    setSalarioMensal(sm);
    setNumeroConta(nc);
    setSaldo(s);
}

string Conta::getNomeCliente(){
    return nomeCliente;
}
double Conta::getSalarioMensal(){
    return salarioMensal;
}
int Conta::getNumeroConta(){
    return numeroConta;
}
double Conta::getSaldo(){
    return saldo;
}
double Conta::getLimite(){
    return limite;
}

void Conta::setNomeCliente(string n){
    if(n == "" || n == "\n"){
        nomeCliente = "Sem nome.";
    }else{
        nomeCliente = n;
    }
}
void Conta::setSalarioMensal(double sm){
    if(sm < 0){
        salarioMensal = 0;
    }else{
        salarioMensal = sm;
    }
}
void Conta::setNumeroConta(int nc){
    if(nc < 0){
        numeroConta = 0;
    }else{
        numeroConta = nc;
    }
}
void Conta::setSaldo(double s){
    if(s < 0){
        saldo = 0;
    }else{
        saldo = s;
    }
}

void Conta::definirLimite(){
    limite = 2*salarioMensal;
}

void Conta::sacar(double valor){
    if(valor > saldo){
        throw SaldoNaoDisponivelException();
    }else{
        saldo -= valor;
    }
}

void Conta::depositar(double valor){
    saldo += valor;
}

void Conta::print(){
    cout<< "Informacoes da conta: \n" 
        << "Nome: " << nomeCliente << endl
        << "Salario Mensal: " << salarioMensal << endl
        << "Numero da conta: " << numeroConta << endl
        << "Saldo da conta: " << saldo << endl
        << "Limite: " << limite << endl;         
}