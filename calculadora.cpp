#include<iostream>
using namespace std;

int main () {

    int numero{};
    double num1;
    double num2;
    
    cout << "Digite o valor referente a operacao desejada!" << endl;
    cout << "(1) para soma; (2) para subtracao; (3) para multiplicacao; (4) para divisao!" << endl;
    cin >> numero;

    cout << "Digite o primeiro valor da conta: " << endl;
    cin >> num1;

    cout << "Digite o segundo valor da conta: " << endl;
    cin >> num2;

    switch (numero) {

    case 1:
    {
        cout << "Voce selecionou soma!" << endl;
        double mais{};
        mais = (num1 + num2);
        cout << mais;
        break;
    }
    case 2:
    {
        cout << "Voce selecionou subtracao" << endl;
        double menos{};
        menos = (num1 - num2);
        cout << menos;
        break;
    }
    case 3:
    {
        cout << "Voce selecionou multiplicacao" << endl;
        double vezes{};
        vezes = (num1 * num2);
        cout << vezes;
        break;
    }
    case 4:
    {
        cout << "Voce selecionou divisao" << endl;
        double divide;
        divide = (num1 / num2);
        cout << divide;
        break;
    }
    default:
        cout << "Digite um valor valido!" << endl;
        break;    
}
    return 0;
}
