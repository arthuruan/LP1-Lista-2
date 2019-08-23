#ifndef PEDIDO_H
#define PEDIDO_H
#include <iostream>

using namespace std;

class Pedido{
    private:
        int numero;
        string descricao;
        int quantidade;
        double preco;
    public:
        Pedido();
        Pedido(int n, string d, int q, double p);

        int getNumero();
        string getDescricao();
        int getQuantidade();
        double getPreco();

        void setNumero(int n);
        void setDescricao(string d);
        void setQuantidade(int q);
        void setPreco(double p);
};

#endif // PEDIDO_H