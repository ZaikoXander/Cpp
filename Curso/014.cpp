#include <iostream>

using namespace std;

int num_global = 12;

void foo()
{
    int num = 10;
    static int num_static = 1;
    cout << "Num local: " << num << endl;
    cout << "Num global: " << num_global << endl;
    num_static++;
    cout << "Num estatico: " << num_static << "\n" << endl;
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}
