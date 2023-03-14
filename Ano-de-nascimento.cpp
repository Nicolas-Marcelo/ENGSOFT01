#include <iostream>
using namespace std;


int main () {


    int ano_nascimento;
    int ano_atual = 2023;


    cout << "Bem vindo ao software desenvolvido para descobrir a idade de uma pessoa baseada com o ano que voce nasceu" << endl;


    cout << "Informe o ano o qual voce nasceu: " << endl;
    cin >> ano_nascimento;


    int conta;
    conta = ano_nascimento - ano_atual;


    cout << "A sua idade eh de " << conta << endl;
}
