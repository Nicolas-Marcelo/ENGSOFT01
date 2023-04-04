#include<iostream>
using namespace std;

int main () {

    int numero(1);

    while (numero<1000) {
    
        int valor;
        int condicao; 

        cout << "Bem vindo ao software de verificação se um valor inteiro eh impar ou par!" << endl;
        cin >> valor;

        condicao = valor % 2;

        if (condicao == 0) {
        
            cout << "O valor eh par!" << endl;
        
        } else if (condicao != 0) {

            cout << "O valor eh impar!" << endl;

        } else {

            cout << "digite um numero valido!" << endl;
        }

    numero = numero + 1;    
    return 0;
}}
