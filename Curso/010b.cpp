#include <iostream>

using namespace std;

int main()
{
    int num, fat = 1;

    cout << "Digite um numero: ";
    cin >> num;
    for(int i = 1; i < num; i++)
    {
        fat = fat * (i + 1);
    }
    cout << "Fatorial: " << fat << endl;
    return 0;
}
