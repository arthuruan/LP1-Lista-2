#include "Pedido.h"

Pedido::Pedido(){
    numero = 0;
    descricao = "Sem descricao";
    quantidade = 0;
    preco = 0;
}

Pedido::Pedido(int n, string d, int q, double p) : Pedido(){
    setNumero(n);
    setDescricao(d);
    setQuantidade(q);
    setPreco(p);
}

int Pedido::getNumero(){
    return numero;
}

string Pedido::getDescricao(){
    return descricao;
}

int Pedido::getQuantidade(){
    return quantidade;
}

double Pedido::getPreco(){
    return preco;
}

void Pedido::setNumero(int n){
    if(n < 0){
        numero = 0;
    }else{
        numero = n;
    }
}

void Pedido::setDescricao(string d){
    if(d == ""){
        descricao = "Sem descricao";
    }else{
        descricao = d;
    }
}

void Pedido::setQuantidade(int q){
    if(q < 0){
        quantidade = 0;
    }else{
        quantidade = q;
    }
}

void Pedido::setPreco(double p){
    if(p < 0){
        preco = 0;
    }else{
        preco = p;
    }
}