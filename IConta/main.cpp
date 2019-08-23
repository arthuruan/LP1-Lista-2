#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

int main(void){
    Conta *c1 = new Conta("Arthur", 50, 512, 1000);
    ContaEspecial *c2 = new ContaEspecial("Ruan", 60, 215, 500);

    try{
        c1->sacar(1200);
    }
    catch(SaldoNaoDisponivelException e){
        cerr << "Erro: " << e.what() << '\n';
    }
    
    
    c1->definirLimite();
    c1->print();

    cout << "\nDepositado\n\n";

    c1->depositar(10);
    c1->print();

    cout << "\nSacado\n\n";

    c1->sacar(10);
    c1->print();

    cout << endl << endl;

///Conta Especial

    c2->definirLimite();
    c2->print();

    cout << "\nDepositado\n\n";

    c2->depositar(10);
    c2->print();

    cout << "\nSacado\n\n";

    c2->sacar(10);
    c2->print();

    return 0;
}