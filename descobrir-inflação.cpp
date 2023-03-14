#include <iostream>
using namespace std;


int main () {


    double valor;
    double inflacao1 = 0.1;
    double inflacao2 = 0.2;


    cout << "Bem vindo ao software desenvolvido para calcular a inflacao de alguns produtos!" << endl;
    cout << "Se o valor ate 100 reais a inflacao eh de 10 porcento, mas se for igual ou maior a 100 a inflacao e de 20 porcento" << endl;


    cout << "Digite o valor do produto: " << endl;
    cin >> valor;


if (valor < 100) {
   
    double conta10;
    conta10 = valor * inflacao1;
    double conta_total1;
    conta_total1 = valor + conta10;
    cout << "Como o produto eh menor que 100 reias, a inflacao aplicada e de 10 porcento!" << endl;
    cout << "O preco com a inflacao fica em " << conta_total1 << " reias!" << endl;


} else {


    double conta20;
    conta20 = valor * inflacao2;
    double conta_total2;
    conta_total2 = valor + conta20;
    cout << "como o produto eh maior que 100 reais, a inflacao aplicada e de 20 porcento!" << endl;
    cout << "O preco com a inflacao fica em " <<  conta_total2 << " reias" << endl;


}
}
