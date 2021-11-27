#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int* parray = &array[0];

    cout << *parray << endl;

    return 0;
}
