#include "Ginecologista.h"
#include "Oftalmologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"

int main(void){
    Medico *m1 = new Cirurgiao("Arthur", 1.80, 72);
    Medico *m2 = new Ginecologista("Gorgonho", 1.85, 75);
    Medico *m3 = new Oftalmologista("Teteu", 1.78, 85);
    Medico *m4 = new Otorrino("sam", 1.80, 70);

    m1->print();
    m1->atendimentoEspecifico();
    cout << endl;

    m2->print();
    m2->atendimentoEspecifico();
    cout << endl;

    m3->print();
    m3->atendimentoEspecifico();
    cout << endl;

    m4->print();
    m4->atendimentoEspecifico();
    cout << endl;

    return 0;
}