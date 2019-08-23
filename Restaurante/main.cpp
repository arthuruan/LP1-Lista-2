#include "RestauranteCaseiro.h"

int main(void){

    RestauranteCaseiro rest = RestauranteCaseiro();

    Pedido p1;

    p1 = Pedido(12, "Suco", 1, 3.00);
    rest.adicionaAoPedido(1, p1);
    p1 = Pedido(13, "almoço completo", 2, 20.00);
    rest.adicionaAoPedido(2, p1);
    p1 = Pedido(14, "cafe", 2, 1.00);
    rest.adicionaAoPedido(1, p1);

    rest.print();

    

    cout << "\n\n\tTotal: " << rest.calculaTotalRestaurante() << " R$" <<endl;

    return 0;
}