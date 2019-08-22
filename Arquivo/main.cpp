#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    fstream input("teste.txt", ios::app);
    ofstream output("teste_bkp.txt", ios::out);

    string nome, nomebckp;
    int idade, idadebckp;

    if(!input.is_open()){
        cout << "Nao foi possivel abrir o arquivo";
        return -1;
    }
    if(!output.is_open()){
        cout << "Nao foi possivel abrir o arquivo";
        return -2;
    }
    
    cout << "Digite seu nome: ";
    getline(cin, nome);
    cout << "Digite sua idade: ";
    cin >> idade;

    input << nome << endl;
    input << idade;
    input.ignore();

    getline(input, nomebckp);
    input >> idadebckp;


    output << nome<< endl;
    output << idade;

    input.close();
    output.close();

    return 0;
}