#include "TestaValidaNumero.h"

int main(void){
    
    TestaValidaNumero *t1 = new TestaValidaNumero();

    for(int i = 0; i < 1002; i += 500){
        try{
            cout << "\nLancando: " << i << endl;
            t1->validaNumero(i);
        }
        catch(ValorAbaixoException e){
            cerr << "Erro: " << e.what() << '\n';
        }
        catch(ValorAcimaException e){
            cerr << "Erro: " << e.what() << '\n';
        }
        catch(ValorMuitoAcimaException e){
            cerr << "Erro: " << e.what() << '\n';
        }
    }
    
    return 0;
}