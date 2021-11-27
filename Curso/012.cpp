#include <iostream>

using namespace std;

void mensagem(int n)
{
    cout << "numero: " << n << endl;
}

void mensagem(char c)
{
    cout << "hello world" << endl;
}

int main()
{
    mensagem(10);
    mensagem('c');
    return 0;
}
