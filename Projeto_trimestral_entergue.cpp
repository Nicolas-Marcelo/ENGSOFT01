#include <iostream>
#include <vector>
using namespace std;

int main () {

// Todos os vetores de tudo
vector <string> nome_funcionario{2};
vector <float> CPF_funcionario{2};
vector <string> endereco_funcionario{2};
vector <float> data_admissao_funcionario{2};
// Final da declaração de vetores

int soma_efetivado(0);
int soma_estagiario(0);
int soma_temporario(0);
int soma_funcionarios(0);

float total_efetivado;
float total_temporario;
float total_estagiario;
float total_empresa;

// Faz o codigo ficar em loop
int novamente;
cout << "===========================================================================================" << endl;
cout << "Bem vindo, pressione uma tecla!" << endl;
cout << "Por favor, digite apenas numeros para melhor funcionamento do software!" << endl;
cout << "===========================================================================================" << endl;
cin >> novamente;
// Termina a parte do loop

// Variavies dos IFs

    int dias_trabalhados;
    int horas_extras;
    float total_extras;
    float salario;

    int dias_trabalhados1;
    float salario_temp;

    float salario_estagiario;

    salario_estagiario = 1320.00;

// FInal da vairavel dos IFs

do {

// agora tenho que fazer a pagina inicial, escolher entre cadastrar usario, trocar informçoes e relatorio de tudo

    system("Pause");
    system("CLS");

    int funcao;

    cout << "===========================================================================================" << endl;
    cout << "Digite um numero de acordo a funcao que voce quer utilizar!" << endl;
    cout << "(1) para cadastrar usuario, (2) para trocar informacoes e (3) para gerar relatorio!" << endl;
    cout << "===========================================================================================" << endl;
    cin >> funcao;

    if (funcao == 1) {

            // Primeira parte do loop
                    system("Pause");
                    system("CLS");

                    int novamente;
                    cout << "Cadastrar usuario? Digite um numero!" << endl;
                    cin >> novamente;

                    system("Pause");
                    system("CLS");
            // Termino da primeira parte do loop

            // validação para poder se registrar

                    double permissao;
                    double chave_acesso;

                    cout << "===========================================================================================" << endl;
                    cout << "Bem vindo ao sistema de cadastramento de funcionarios!" << endl;
                    cout << "Para melhor interacao insira algumas informacoes, conforme os enunciados!" << endl;

                    cout << "===========================================================================================" << endl;
                    system("pause");
                    system("CLS");
                    cout << "===========================================================================================" << endl;

                    chave_acesso = 12345678;

                    cout << "Insira sua chave de acesso para continuar no software: " << endl;
                    cin >> permissao;

                    do {

                        cout << "Insira sua chave de acesso novamente:" << endl;
                        cin >> permissao;

                    } while  (chave_acesso < permissao || chave_acesso > permissao);

                    cout << "Boa!!" << endl;

                    cout << "===========================================================================================" << endl;
                    system("pause");
                    system("CLS");
                    cout << "===========================================================================================" << endl;

            // final da validação para se registrar

            // Perguntas para o cadastros

                    cout << "Digite seu nome: " << endl;
                    string atualizacao_nome{0};
                    cin >> atualizacao_nome;

                    nome_funcionario.push_back(atualizacao_nome);

                    cout << "Digite seu CPF: " << endl;
                    float atualizacao_CPF{0};
                    cin >> atualizacao_CPF;

                    CPF_funcionario.push_back(atualizacao_CPF);

                    cout << "Digite seu endereco: " << endl;
                    string atualizacao_endereco{0};
                    cin >> atualizacao_endereco;

                    endereco_funcionario.push_back(atualizacao_endereco);

                    cout << "Digite sua data admissao: " << endl;
                    float atualizacao_data_adimissao{0};
                    cin >> atualizacao_data_adimissao;

                    data_admissao_funcionario.push_back(atualizacao_data_adimissao);

            // Final perguntas para cadastros 

                    int funcionario;

                    cout << "Enfim, Bem vindo ao software propriamente dito!" << endl;
                    cout << "Se atente aos numeros!" << endl;
                    cout << "(1) para funcionario efetivado!" << endl;
                    cout << "(2) para funcionario estagiario!" << endl;
                    cout << "(3) para funcionario temporario!" << endl;
                    cout << "===========================================================================================" << endl;
                    cout << "Digite o tipo de funcionario voce que eh, de acordo com o numero!" << endl;
                    cout << "===========================================================================================" << endl;

                    cin >> funcionario;

            // final tipo de funcionario

            // validação do tipo de funcionario

                if (funcionario == 1) {

                        // Soma das informaçoes 

                            cout << "Voce escolheu cadastrar um funcionario efetivado!" << endl;
                            cout << "um funcionario efetivado ganha R$1320,00!" << endl;
                            cout << "O valor da sua hora extra eh de R$10,95!" << endl;
                            cout << "Informe quantas horas extras voce fez:" << endl;
                            cin >> horas_extras;

                            total_extras = horas_extras * 10.95;  
                            salario = (((1320.00 - 118.00) - 118.00) + 152.00);   

                            cout << "Voce tambem tera que contribuir com 9 porcento de seu salario para INSS, pense no seu futuro!" << endl;
                            cout << "Oque seria um total de R$118,00!" << endl;

                            cout << "Voce tambem tera de declarar imposto de renda!" << endl;
                            cout << "Um total de R$118,00!" << endl;

                            
                            cout << "Enfim seu salario eh R$" << salario << "!" << endl;
                            
                        // Final da soma dos salarios

                        // Quantidade de cadastros feitos

                            cout << "===========================================================================================" << endl;
                            soma_efetivado++;
                            cout << "Total de funcionarios cadastratados " << soma_efetivado << "!" << endl;
                            cout << "===========================================================================================" << endl;

                        // Final da quantidade de cadastros

                        return salario;

                } else if (funcionario == 2) {

                    // Soma das informaçoes 

                            cout << "Voce selecionou tipo de funcionatio estagiario!" << endl;
                            cout << "Voce escolheu cadastrar um funcionario temporario!" << endl;
                            cout << "O valor da hora trabalhada eh R$7,50!" << endl;
                            cout << "Informe quantos dias voce trabalhou:" << endl;
                            cin >> dias_trabalhados1;

                            salario_temp = (dias_trabalhados1 * 7.5);

                            cout << "Seu salario este mes esta no valor de R$" << salario_temp << "!" << endl;
                            
                        // Final da soma dos salarios

                        // Quantidade de cadastros feitos

                            soma_estagiario++;
                            cout << "Total de funcionarios cadastratados " << soma_estagiario << "!" << endl;

                        // Final da quantidade de cadastros

                        return salario_temp;

                } else if (funcionario == 3) {

                        // Soma salarios

                        cout << "Voce selecionou o tipo de funcionario temporario!" << endl;
                        cout << "Seu salario nao sofre alteracoes, entao fica no valor de R$1320,00!" << endl;

                        // FInal soma salarios

                        // Quantidade de cadastros feitos

                            soma_temporario++;
                            cout << "Total de funcionarios cadastratados " << soma_temporario << "!" << endl;

                        // Final da quantidade de cadastros

                        return soma_temporario;

                } else {

                    cout << "Por favor, insira um numero valido (1), (2) ou (3)!!" << endl;

                }

                // total de todos os salarios

                    total_efetivado = total_efetivado + salario;
                    total_temporario = total_temporario + salario_temp;
                    total_estagiario = total_estagiario + salario_estagiario;
                    total_empresa = total_efetivado + total_estagiario + total_temporario;


            cout << "===========================================================================================" << endl;
            system("Pause");
            system("CLS");
            cout << "===========================================================================================" << endl;

            // final da validação do tipo de funcionario
            // Quantidade de cadastros feitos

                    soma_funcionarios++;
                    
                    cout << "Ate o presente momento foram cadastrados " << soma_efetivado << " funcionarios efetivados!" << endl;
                    cout << "Ate o presente momento foram cadastrados " << soma_estagiario << " funcionarios estagiarios!" << endl;
                    cout << "Ate o presente momento foram cadastrados " << soma_temporario << " funcionarios temporarios!" << endl;
                    cout << "Ate o presente momento foram cadastrados " << soma_funcionarios << " funcionarios" << endl;

            // Final da quantidade de cadastros 

            system("Pause");
            system("CLS");

        // Funcao para trocar informacoes dos usuarios

        } else if (funcao == 2) {

            // Parte da segurança, senha para mecher nas informações 

            double permissao;
            double chave_acesso;

            chave_acesso = 12345678;

                    cout << "Voce selecionou trocar informacoes do usuario" << endl;

                    cout << "Insira sua chave de acesso para continuar no software: " << endl;
                    cin >> permissao;

                    do {

                        cout << "Insira sua chave de acesso novamente:" << endl;
                        cin >> permissao;

                    } while  (chave_acesso < permissao || chave_acesso > permissao);

            // Final da validação de senha

            system("Pause");
            system("CLS");

        }else if (funcao == 3) {

        //  Validação do acesso

            double permissao;
            double chave_acesso;

            chave_acesso = 12345678;

                    cout << "Voce selecionou a aba de relatorio!" << endl;

                    cout << "Insira sua chave de acesso para continuar no software: " << endl;
                    cin >> permissao;

                    do {

                        cout << "Insira sua chave de acesso novamente:" << endl;
                        cin >> permissao;

                    } while  (chave_acesso < permissao || chave_acesso > permissao);

        // Final da validação do acesso

            system("Pause");
            system("CLS");

        // geração do relatorio

    cout << "===========================================================================================" << endl;

        // Funcionarios cadastrados

            cout << "Foram cadastrados " << soma_efetivado << " funcionarios efetivados!" << endl;
            cout << "foram cadastrados " << soma_estagiario << " funcionarios estagiarios!" << endl;
            cout << "foram cadastrados " << soma_temporario << " funcionarios temporarios!" << endl;
            cout << "foram cadastrados " << soma_funcionarios << " funcionarios" << endl;

        // Final funcionairos cadastrados

    cout << "===========================================================================================" << endl;

        // Total de pagamento medio

            float media_efetivado;
            float media_temporario;
            float media_estagiario;

            media_efetivado = salario / soma_efetivado;
            media_estagiario = salario_temp / soma_estagiario;
            media_temporario = salario_estagiario / soma_temporario;

            cout << "A media dos salarios para funcioanario efetivado eh:" << endl;
            cout << media_efetivado << endl;

            cout << "A media dos salarios para funcioanario temporario eh:" << endl;
            cout << media_temporario << endl;

            cout << "A media dos salarios para funcioanario estagiario eh:" << endl;
            cout << media_estagiario << endl;

        // Final de pagamento medio

    cout << "===========================================================================================" << endl;

        } else {

            cout << "Digite um numero valido!" << endl;
        
        }
        } while (novamente = 1, cout << "Obrigado por usar o software" << endl << "Ate um outro dia!" << endl);
            
}
