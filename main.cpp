#include <iostream>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "Dados da primeira pessoa: " << endl;
    cout << "Nome: ";
    getLine(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getLine(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media = (idade1 + idade2) 2.0;

    cout << "A idade m�dia de " << nome1 << " e " << nome2 << " eh de  " << media << " anos." << endl;


    return 0;
}
