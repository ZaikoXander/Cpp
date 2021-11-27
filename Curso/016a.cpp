#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[]);

int main()
{
    char nome[] = "marcos";
    
    inverte(nome);
    return 0;
}

void inverte(char nome[])
{
    // obtendo o tamanho da string
    int tam = strlen(nome);
    /*
    int tam;
    for (tam = 0; nome[tam]; tam++);
    */
    for (int i = tam - 1; i >= 0; i--)
    {
        cout << nome[i];
    }
}
