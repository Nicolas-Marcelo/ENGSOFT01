#include<iostream>
using namespace std;

int main () {

    double valor;

    cout << "Bem vindo ao software de verificar se um numero esta no intervalo de 5 a 20!" << endl;
    cout << "Digite um valor: " << endl;
    cin >> valor;

    if (valor <= 20 && valor >= 5) {

        cout << "O valor esta no intervalo de 5 a 20" << endl;

    } else {

        cout << "O valor nao esta no intervalo de 5 a 20" << endl;
    }

}
