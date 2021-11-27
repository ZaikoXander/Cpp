#include <iostream>
#include <string.h>

using namespace std;

/*
int main(int argc, char const *argv[])
{
    char c = 'M';
    c = tolower(c);
    cout << c << endl;
    c = toupper(c);
    cout << c << endl;
    return 0;
}
*/
int main(int argc, char const *argv[])
{
    char nome[100], sobrenome[100];

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite seu sobrenome: ";
    cin >> sobrenome;

    strcat(nome, sobrenome);

    cout << "Seu nome: " << nome;
    return 0;
}
