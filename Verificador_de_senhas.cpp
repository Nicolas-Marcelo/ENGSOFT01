#include <iostream>
using namespace std;

int main () {

    cout << "Bem vindo ao verificador de senahs!" << endl;

    int senha; 

    do {
        cout << "Digite sua senha: " << endl;
        cin >> senha; 

    } while (senha < 1234 || senha > 1234 && cout << "Senha incorreta" << endl); 

    cout << "Senha correta!" << endl;


