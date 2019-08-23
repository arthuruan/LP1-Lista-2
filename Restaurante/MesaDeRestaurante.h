#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX_RANGE 20

class MesaDeRestaurante{
    private:
        int indice;
        Pedido pedido[MAX_RANGE];
    public:
        MesaDeRestaurante();

        void adicionaAoPedido(Pedido p);
        void zeraPedidos();
        double calculaTotal();
        void print();
};

#endif // MESADERESTAURANTE_H