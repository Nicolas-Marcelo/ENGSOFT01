#include<iostream>
using namespace std;

int main () {

    string nome{};
    string endereco{};
    double RA{};
    double CPF{};
    double data_admissao{};
    int funcionario{};
    int dias_trabalhados;

    double hora_extra;
    double calculo{};
    double bruto;
    double salario(1320,00);
    calculo = 6,00 + (3,00 * hora_extra);
    bruto_efetivado = (salario + calculo) - ((salario + calculo) / 7,5)) ;
    bruto_temporario = (salario + (6,00 * dias_trabalhados);

    cout << "Bem vindo ao portal do trabalhador!" << endl;

    cout << "Digite seu RA: " << endl;
    cin >> RA;

    if (RA == 22022215275) {

        cout << "Vamos efetuar o login: " << endl;
        cout << "Digite seu nome: " << endl;
        cin >> nome;

        cout << "Digite seu CPF: " << endl;
        cin >> CPF;

        cout << "Digite seu endereco: " << endl;
        cin >> endereco;

        cout << "Digite a sua data de admissao: " << endl;
        cin >> data_admissao;

    } else {

        cout << "Seu RA esta incorreto!" << endl;

    }

    cout << "Perfeito!" << endl << endl;
    
    cout << "====================================================================================" << endl;
    cout << "Para prosseguir com o cadastro, temos algumas informacoes fixas, sendo elas:" << endl;
    cout << "Salario base atual: 1320,00 reais" << endl << "Valor de contribuicao para o INSS eh de 7,5% do salario base, 99 reais" << endl;
    cout << "O valor da hora extra eh o valor da hora trabalhada mais metade do valor da hora trabalhada: que seria 9.00 reais!" << endl;
    cout << "Trabalhador que ganhe acima de dois salarios minimos, 2,640, recebem isencao de imposto de renda!" << endl;
    cout << "====================================================================================" << endl;
   
    cout << "Agora informe qual o seu status de funcionario dentro da empresa: " << endl << endl;

    cout << "Digite 1 para funcionario efetivado, 2 para funcionario temporario e 3 para estagiario!" << endl;
    cin >> funcionario;

    switch (funcionario) {


        case 1 :

            cout << "====================================================================================" << endl;
            cout << "Entao voce eh um funcionario efetivado!" << endl;
            cout << "Voce fez alguma hora extra neste mes? Se nao digite  " << endl;
            cin >> hora_extra;

            cout << "Entao o valor do seu salario eh calculado pelo seu salario mais as horas extras realizadas menos 99 reais de contibuição para o INSS!" << endl;
            cout << "Seu salario eh: " << bruto_efetivado << " reais!" << endl;
            cout << "====================================================================================" << endl;

        case 2 :

            cout << "====================================================================================" << endl;
            cout << "Entao voce eh um funcionario temporario!" << endl;
            cout << "Quantos dias no mes voce trabalho? " << endl;
            cin >> dias_trabalhados;

            cout << "Entao o valor do seu salario eh calculado pelo seu salario mais quantos dias voce trabalhou menos 115,47 de INSS!" << endl;
            cout << "Seu salario eh: " << bruto_temporario << " reais!" << endl;
            cout << "====================================================================================" << endl;

        case 3 :

            cout << "====================================================================================" << endl;
            cout << "Entao voce eh um estagiario!" << endl; 
            cout << "O salario de estagiario eh apenas o salario base! Que eh igual a: " << salario << endl;
            cout << "====================================================================================" << endl;
   
        default :

            cout << "Selecione uma das tres opcoes!" << endl;
    
    }

    return 0;

}
