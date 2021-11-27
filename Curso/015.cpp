#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*int vetor[100];

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = i;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << vetor[i] << endl;
    }*/

    int vetor[] = {0,1,2,3,4};

    cout << "ultimo elemento " << vetor[4] << endl;
    cout << sizeof(vetor) << endl; // 4 bits cada inteiro, para char é 1 byte
    
    return 0;
}
