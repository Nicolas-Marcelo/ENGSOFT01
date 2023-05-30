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

// Faz o codigo ficar em loop
int novamente;
cout << "===========================================================================================" << endl;
cout << "Bem vindo, pressione uma tecla!" << endl;
cout << "Por favor, digite apenas numeros para melhor funcionamento do software!" << endl;
cout << "===========================================================================================" << endl;
cin >> novamente;
// Termina a parte do loop

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

                    chave_acesso = 123456789;

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

                    cout << "Digite" << endl;
                    string atualizacao_nome{0};
                    cin >> atualizacao_nome;

                    nome_funcionario.push_back(atualizacao_nome);

                    cout << "Digite" << endl;
                    float atualizacao_CPF{0};
                    cin >> atualizacao_CPF;

                    CPF_funcionario.push_back(atualizacao_CPF);

                    cout << "Digite" << endl;
                    string atualizacao_endereco{0};
                    cin >> atualizacao_endereco;

                    endereco_funcionario.push_back(atualizacao_endereco);

                    cout << "Digite" << endl;
                    float atualizacao_data_adimissao{0};
                    cin >> atualizacao_data_adimissao;

                    data_admissao_funcionario.push_back(atualizacao_data_adimissao);

            // 

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

                        // Quantidade de cadastros feitos

                            soma_efetivado++;
                            cout << "Total de funcionarios cadastratados " << soma_efetivado << "!" << endl;

                        // Final da quantidade de cadastros

                } else if (funcionario == 2) {
                    
                    cout << "Voce selecionou tipo de funcionatio estagiario!" << endl;

                        // Quantidade de cadastros feitos

                            soma_estagiario++;
                            cout << "Total de funcionarios cadastratados " << soma_estagiario << "!" << endl;

                        // Final da quantidade de cadastros

                } else if (funcionario == 3) {

                    cout << "Voce selecionou o tipo de funcionario temporario!" << endl;

                        // Quantidade de cadastros feitos

                            soma_temporario++;
                            cout << "Total de funcionarios cadastratados " << soma_temporario << "!" << endl;

                        // Final da quantidade de cadastros

                } else {

                    cout << "Por favor, insira um numero valido (1), (2) ou (3)!!" << endl;

                }


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

            } while (novamente = 1, cout << "Obrigado por usar o software" << endl << "Ate um outro dia!" << endl);
            
            }

            return 0;
            }
