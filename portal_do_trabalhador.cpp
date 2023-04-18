#include<iostream>
#include<string>
using namespace std;

int main () {

    string nome;
    string endereco;
    string CPF;
    string data_admissao;
    int funcionario;
    double RA;
    double dias_trabalhados;
    double RA_correto{2022215275};
    double bruto_efetivado;
    double bruto_temporario;
    double hora_extra;
    double calculo;
    double bruto;
    double salario(1320);

    cout << "Bem vindo ao portal do trabalhador!" << endl;

    cout << "Digite seu RA: " << endl;
    cin >> RA;

    if (RA = RA_correto) {

        cout << "Vamos efetuar o login: " << endl;
        cout << "Digite seu nome: " << endl;
        cin.ignore();
        getline(cin, nome);
        
        cout << "Digite seu CPF: " << endl;
        cin.ignore();
        getline(cin, CPF);

        cout << "Digite seu endereco: " << endl;
        cin.ignore();
        getline(cin, endereco);

        cout << "Digite a sua data de admissao: " << endl;
        cin.ignore();
        getline(cin, data_admissao);

    } else {

        cout << "Seu RA esta incorreto!" << endl;

    }

    cout << "Perfeito!" << endl << endl;
    
    cout << "====================================================================================" << endl;
    cout << "Para prosseguir com o cadastro, temos algumas informacoes fixas, sendo elas:" << endl;
    cout << "Salario base atual: 1320,00 reais" << endl << "Valor de contribuicao para o INSS eh de 7,5 porcento do salario base, 99 reais" << endl;
    cout << "O valor da hora extra eh o valor da hora trabalhada mais metade do valor da hora trabalhada: que seria 9.00 reais!" 
    << endl;
    cout << "Trabalhador que ganhe acima de dois salarios minimos, 2.640, recebem isencao de imposto de renda!" << endl;
    cout << "====================================================================================" << endl;
   
    cout << "Agora informe qual o seu status de funcionario dentro da empresa: " << endl << endl;
    cout << "Digite 1 para funcionario efetivado, 2 para funcionario temporario e 3 para estagiario! " << endl;
    cin >> funcionario;

    if (funcionario == 1) {
        cout << "====================================================================================" << endl;
        cout << "Entao voce eh um funcionario efetivado!" 
        << endl;
        cout << "Quantas horas extras voce fez este mes?" << endl;
        cin >> hora_extra;

        cout << "Entao o valor do seu salario eh calculado pelo seu salario mais as horas extras realizadas menos 99 reais de contibuicao para o INSS!" << endl;
        cout << "Seu salario eh: " << (((6 + (3 * hora_extra) - salario) / 7,5) + salario - 99) << " reais!" << endl;
        cout << "====================================================================================" << endl;

    } else if (funcionario == 2) {

        cout << "====================================================================================" << endl;
        cout << "Entao voce eh um funcionario temporario!" << endl;
        cout << "Quantos dias no mes voce trabalho? " << endl;
        cin >> dias_trabalhados;

        cout << "Entao o valor do seu salario eh calculado pelo seu salario mais quantos dias voce trabalhou menos115,47 de INSS!" << endl;
        cout << "Seu salario eh: " << 6 * dias_trabalhados + salario << " reais!" << endl;
        cout << "====================================================================================" << endl;

    } else if (funcionario == 3) {

        cout << "====================================================================================" << endl;
        cout << "Entao voce eh um estagiario!" << endl;
        cout << "O salario de estagiario eh apenas o salario base! Que eh igual a: " << salario << endl;
        cout << "====================================================================================" << endl;

    } else {

        cout << " Ate mais!" << endl;

    }

    return 0;
}
