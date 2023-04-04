#include<iostream>
using namespace std;

int main () {

    int mes;

    cout << "Bem vindo ao software que indica os meses desejados no calendario!" << endl;
    cout << "Digite o mes que voce deseja" << endl;
    cin >> mes;

    switch (mes) {
    case 1:
        cout << "O numero 1 representa o mes de Janeiro!" << endl; 
        break;

    case 2:
        cout << "O numero 2 representa o mes de Fevereiro!" << endl;
        break;

    case 3:
        cout << "O numero 3 representa o mes de Março!" << endl;
        break;

    case 4:
        cout << "O numero 4 representa o mes de Abril!" << endl;
        break;

    case 5:
        cout << "O numero 5 representa o mes de Maio!" << endl;
        break;

    case 6:
        cout << "O numero 6 representa o mes de Julho!" << endl;
        break;

    case 7:
        cout << "O numero 7 representa o mes de Julho!" << endl;
        break;

    case 8:
        cout << "O numero 8 representa o mes de Agosto!" << endl;
        break;
  
    case 9:
        cout << "O numero 9 representa o mes de Setembro!" << endl;
        break;

    case 10:
        cout << "O numero 10 representa o mes de Outubro!" << endl;
        break;

    case 11:
        cout << "O numero 11 representa o mes de Novembro!" << endl;
        break;

    case 12:
        cout << "O numero 12 representa o mes de Dezembro!" << endl;
        break;

    default:
        cout << "Digite um numero valido, aos meses do ano, de 1 a 12!" << endl;
        break;
    }


}
