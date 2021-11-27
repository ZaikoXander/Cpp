#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char nome[] = "marcos";

    if(isalpha(nome[0]))
    {
        cout << "caractere alfabetico" << endl;
    }
    else
    {
        cout << "caractere numerico" << endl;
    }
    /* isdigit() -> numero, isupper() -> maiuscula, islower() -> minuscula,
    isalpha() -> letra, isspace() -> espaco, isalnum() -> letra e numero
    */
    /*
    if(isdigit(nome[0]))
    {
        cout << "numero" << endl;
    }
    else
    {
        cout << "letra" << endl;
    }
    */
    return 0;
}
