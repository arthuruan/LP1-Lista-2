#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){

    indice = 0;
    for(int i = 0; i < MAX_RANGE; i++){
        pedido[i] = Pedido();
    }
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    for(int i = 0; i < MAX_RANGE; i++){
        if(pedido[i].getQuantidade() == p.getQuantidade()){
            pedido[i].setQuantidade(pedido[i].getQuantidade() + p.getQuantidade());
            return;
        }
    }
    pedido[indice] = p;
    indice++;
}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < MAX_RANGE; i++){
        pedido[i].setQuantidade(0);
    }
}

double MesaDeRestaurante::calculaTotal(){
    double soma = 0;
    for(int i = 0; i < MAX_RANGE; i++){
        soma += pedido[i].getPreco() * pedido[i].getQuantidade();
    }
    return soma;
}

void MesaDeRestaurante::print(){
    for(int i = 0; i < MAX_RANGE; i++){
        if(pedido[i].getQuantidade() > 0){
            cout <<"\nDescricao: " << pedido[i].getDescricao() << endl <<
            "Quantidade: " << pedido[i].getQuantidade() << endl <<
            "Preco: " << pedido[i].getPreco() << " R$" << endl;
        }
    }
}