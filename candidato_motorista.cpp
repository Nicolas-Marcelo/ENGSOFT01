#include <iostream>
using namespace std;

int main () {

    int idade_para_dirigir = 18;
    int idade_atual;
    bool seguro_social = false;
    bool acidente_carro = false;
    bool permissao_pais = false;
    cout << boolalpha;
    
    cout << "Olá seja bem vindo ao nosso software de contratação para vaga de motorista!" << endl;
    
    cout << "Digite sua idade: " << endl;
    cin >> idade_atual;
    
    cout << "Seus pais permitem voce a dirigir? Digite 1 para sim, ou 0 para nao: " << endl;
    cin >> permissao_pais;

    cout << "Voce ja se envolveu em um acidente de carro? Digite 1 para sim, ou 0 para nao: " << endl;
    cin >> acidente_carro;

    cout << "Voce tem um numero de seguro social? Digite 1 para sim, ou 0 para nao:  " << endl;
    cin >> seguro_social;

    bool permissao_dirigir;
    permissao_dirigir = (((idade_para_dirigir >= 18) || (idade_atual >= 16) && permissao_pais) && !acidente_carro && seguro_social);
    cout << "Sua permissao para dirigir e igual a: " << permissao_dirigir << endl;

    return 0;
}
