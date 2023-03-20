 #include<iostream>
 using namespace std;

 int main () {

    int num1{};
    int num2{};

    cout << boolalpha;
    
    cout << "Informe 2 numeros inteiros separados por espaco ";
    cin >> num1 >> num2;

    // cout << num1 << " > " << num2  <<" : " << (num1>num2) << endl;
    // cout << num1 << " >= " << num2 << " : " << (num1>=num2) << endl;
    // cout << num1 << " < " << num2 << " : " << (num1<num2) << endl;
    // cout << num1 << " <= " << num2 << " : " << (num1<=num2) << endl;

    const int maior{10};
    const int menor{20};

    cout << "\n Informe um valor maior que " << maior << " : ";
    cin >> num1;
    cout << num1 << " > " << maior << " eh " << (num1>maior) << endl;

    cout << "\n Informe um valor memor ou igual que " << menor << " : ";
    cin >> num2;
    cout << num2 << " > " << menor << " eh " << (num2 <= menor) << endl;

 }
