#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    for(int i = 0; i < MAX_RANGE; i++){
        mesa[i] = MesaDeRestaurante();
    }
}

void RestauranteCaseiro::adicionaAoPedido(int indice, Pedido p){
    mesa[indice].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double soma = 0;
    for(int i = 0; i < MAX_RANGE; i++){
        soma += mesa[i].calculaTotal();
    }
    return soma;
}

void RestauranteCaseiro::print(){
    for(int i = 0; i < MAX_RANGE; i++){
        if(mesa[i].calculaTotal() > 0){
            cout << "\nMesa (" << i << "):\n";
            mesa[i].print();
        }
    }   
}