#include<iostream>
using namespace std;

int main () {

    int reais;
    int centavos;

    cout << "Bem vindo ao software de contagem, da menor quantidade de notas que pode se ter de um valor!" << endl;
    cout << "Digite o valor em reias: " << endl;
    cin >> reais;

    cout << "Digite o valor em centavos:" << endl;
    cin >> centavos;
    
    int notas100 = reais/100;
    reais%=100;
    int notas50 = reais/50;
    reais%=50;
    int notas20 = reais/20;
    reais%=20;
    int notas10 = reais/10;
    reais%=10;
    int notas5 = reais/5;
    reais%=5;
    int notas2 = reais/2;
    reais%=2;
    int moedas50 = centavos/50;
    centavos%=50;
    int moedas25 = centavos/25;
    centavos%=25;
    int moedas10 = centavos/10;
    centavos%=10;
    int moedas5 = centavos/5;
    centavos%=5;
    int moedas1 = centavos/1;
    centavos%=1;

    cout << "Notas de 100: " << notas100 << endl;
    cout << "Notas de 50: " << notas50 << endl;
    cout << "Notas de 20: " << notas20 << endl;
    cout << "Notas de 10" << notas10 << endl;
    cout << "Notas de 5" << notas5 << endl;
    cout << "Notas de 2" << notas2 << endl;
    cout << "Moedas de 50: " << moedas50 << endl;
    cout << "Moedas de 25: " << moedas25 << endl;
    cout << "Moedas de 10: " << moedas10 << endl;
    cout << "Moedas de 5: " << moedas5 << endl;
    cout << "Moedas de 1: " << moedas1 << endl;

    return 0;
}
