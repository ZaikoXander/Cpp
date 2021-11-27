#include <iostream>

using namespace std;

int main()
{
    int num = 19;

    if((num % 2 == 0) && num < 20)
    {
        cout << "numero par e menor do que 20" << endl;
    }
    if((num % 2 == 0) || num < 20)
    {
        cout << "mensagem" << endl;
    }
    return 0;
}
