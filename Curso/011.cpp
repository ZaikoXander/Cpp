#include <iostream>

using namespace std;

bool par(int num);
void mensagem();

int main()
{
    int n;

    cout << "Digite um numero: ";
    cin >> n;
    if(par(n))
    {
        cout << "O numero " << n << " e par." << endl;
    }
    else
    {
        cout << "O numero " << n << " e impar." << endl;
    }
    return 0;
}

void mensagem()
{
    cout << "Aprendendo C++" << endl;
}

bool par(int num)
{
    if(num % 2 == 0)
        return true;
    return false;
}
