#include<iostream>
using namespace std;

int main () {

    string nome{};
    string endereco{};
    double RA{};
    double CPF{};
    double data_admissao{};
    int funcionario{};

    double hora_extra;
    double calculo{};
    double bruto;
    double salario(1212);
    calculo = (5,50 + 2,25) * hora_extra;
    bruto = (salario + calculo) / 7,5 ;

    cout << "Bem vindo ao portal do trabalhador!" << endl;

    cout << "Digite seu RA: " << endl;
    cin >> RA;

    if (RA == 123456) {

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
    cout << "Agora informe qual o seu status de funcionario dentro da empresa: " << endl;
    cout << "====================================================================================" << endl;
    cout << "Para prosseguir com as informacoes, temos algumas informacoes fixas, sendo elas:" << endl;
    cout << "Salario base: 1212,00 reais" << endl << "Valor de contribuicao para o INSS: 115,47 reais" << endl;
    cout << "O valor da hora extra eh o valor da hora trabalhada: eh 7,5 porcento do valor trabalhado!" << endl;
    cout << "====================================================================================" << endl;

    cout << "" << endl;
    cout << "Digite 1 para funcionario efetivado, 2 para funcionario temporario e 3 para estagiario!" << endl;
    cin >> funcionario;

    switch (funcionario) {


        case 1 :

            cout << "====================================================================================" << endl;
            cout << "Entao voce eh um funcionario efetivado!" << endl;
            cout << "Voce fez hora extra no mes desejado? " << endl;
            cin >> hora_extra;

            cout << "Entao o valor do seu salario eh calculado pelo seu salario mais as horas extras realizadas menos 115,47 de INSS!" << endl;
            cout << "Seu salario eh: " << bruto << " reais!" << endl;
            cout << "====================================================================================" << endl;

        case 2 :

            cout << "====================================================================================" << endl;
            cout << "Entao voce eh um funcionario temporario!" << endl;
            cout << "Quantos dias no mes voce trabalho? " << endl;
            cin >> hora_extra;

            cout << "Entao o valor do seu salario eh calculado pelo seu salario mais quantos dias voce trabalhou menos 115,47 de INSS!" << endl;
            cout << "Seu salario eh: " << bruto << " reais!" << endl;
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
