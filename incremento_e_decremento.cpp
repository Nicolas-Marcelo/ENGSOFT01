#include<iostream>
using namespace std;

int main (){

    int cont{10};
    int result{0};

    //Exemplo 1 - Incremento Simples
    cout << "Contando: "<< cont << endl;

    cont = cont + 1;
    cout << "Contando: "<< cont << endl;

    cont++;
    cout << "Contando: "<< cont << endl;

    ++cont;
    cout << "Contando: "<< cont << endl;

    //Exemplo 2 - Pre incremento
    cont = 10;
    result = 0;

    cout << "Contando: "<< cont << endl;

    result = ++cont;   //note pre incremento
    cout << "Contando: "<< cont << endl;
    cout << "Resultado: "<< result << endl;

    //Exemplo 3 - Pos incremento
    cont = 10;
    result = 0;

    cout << "Contando: "<< cont << endl;

    result = cont++;   //note pos incremento
    cout << "Contando: "<< cont << endl;
    cout << "Resultado: "<< result << endl;

    //Exemplo 4
    cont = 10;
    result = 0;

    cout << "Contando: "<< cont << endl;

    result = ++cont +10;   //note pre incremento
    cout << "Contando: "<< cont << endl;
    cout << "Resultado: "<< result << endl;

    //Exemplo 5
    cont = 10;
    result = 0;

    cout << "Contando: "<< cont << endl;

    result = cont++ +10;   //note pos incremento
    cout << "Contando: "<< cont << endl;
    cout << "Resultado: "<< result << endl;

    return 0;
}
