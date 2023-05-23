#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<char> vogais {'a', 'e', 'i', 'o', 'u'};

    cout << vogais[0] << endl;


    vector<int> pontuacao {10, 98, 89};
    cout << "Pontuacao usando sintaxe vetorial!" << endl;
    cout << pontuacao.at(2) << endl;
    cout << pontuacao.at(1) << endl;

    cout << "Existem " << pontuacao.size() << endl;

    cout << "Digite uma nova pontuacao para add ao vetor: " << endl;
    int pontuacao_add{0};
    cin >> pontuacao_add;

    pontuacao.push_back(pontuacao_add);

    cout << "Insira mais um valor: " << endl;
    cin >> pontuacao_add;

    pontuacao.push_back(pontuacao_add);

    cout << "As pontuacoes ate entao:" << endl;
    cout << pontuacao.at(0) << endl;
    cout << pontuacao.at(1) << endl;
    cout << pontuacao.at(2) << endl;
    cout << pontuacao.at(3) << endl;
    cout << pontuacao.at(4) << endl;

cout << "Existem " << pontuacao.size() << endl;

}
