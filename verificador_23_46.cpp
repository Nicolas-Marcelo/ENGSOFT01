#include <iostream>
using namespace std;

int main () {

    cout << "Bem vindo ao software que verifica se o numero digitado esta no intervalo de 23 a 46" << endl;

    int numero;

    do {

        cout << "Digite um numero" << endl;
        cin >> numero;

    } while (numero <= 23 || numero >= 46);

        cout << "O numero digitado foi " << numero << " voce acertou o intervalo!" << endl;

}
