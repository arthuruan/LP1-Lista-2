#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include <iostream>
#include "MesaDeRestaurante.h"
#define MAX_RANGE 20

using namespace std;

class RestauranteCaseiro{
    private:
        MesaDeRestaurante mesa[MAX_RANGE];
    public:

        RestauranteCaseiro();

        void adicionaAoPedido(int indice, Pedido p);
        double calculaTotalRestaurante();
        void print();
};

#endif // RESTAURANTECASEIRO_H