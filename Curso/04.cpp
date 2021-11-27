#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    // n += 1
    // n = n + 1
    cout << ++n << endl;

    // n -= 1
    // n = n - 1
    cout << --n << endl;

    // n = n * 5
    cout << (n*= 5) << endl;

    // n = n / 5
    cout << (n/= 5) << endl;

  /*n1 = 20;
    n2 = 10;
    resultado = n1 % n2;
    cout << resultado << endl;*/
    return 0;
}
