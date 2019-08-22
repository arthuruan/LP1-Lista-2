#include "TestaValidaNumero.h"

int main(void){
    
    TestaValidaNumero *t1 = new TestaValidaNumero();

    try{
        cout << "Lancando 50";
        t1->validaNumero(50);
        cout << "Lancando -5";
        t1->validaNumero(-5);
        cout << "Lancando 200";
        t1->validaNumero(200);
        cout << "Lancando 1200";
        t1->validaNumero(1200);
    }
    catch(ValorAbaixoException e){
        cerr << "Erro: " << e.what() << '\n';
    }
    catch(ValorAbaixoException e){
        cerr << "Erro: " << e.what() << '\n';
    }
    catch(ValorMuitoAcimaException e){
        cerr << "Erro: " << e.what() << '\n';
    }
    

    return 0;
}