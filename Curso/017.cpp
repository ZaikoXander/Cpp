#include <iostream>

using namespace std;

/*
void foo(int* n)
{
    *n = 20;
}

int main()
{
    int var = 10;
    int* pvar;

    foo(&var);  
    cout << var << endl;
    return 0;
}
*/

int main()
{
    int* pvet = new int[10];
 
    cout << "Digite um numero: ";
    cin >> *(pvet);
    cout << "Voce digitou: " << pvet[0] << endl;

    delete[] pvet;
    pvet = NULL;    
    return 0;
}
