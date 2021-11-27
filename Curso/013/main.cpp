#include <iostream>
#include "my_math.h"

using namespace std;

int main()
{
    int num = 5;
    cout << "Fatorial de " << num << " e: " << fatorial(num) << endl;
    cout << "Area do quadrado de lado " << num << ": " << area_quadrado(num) << endl;
    cout << "Area do retangulo de altura de altura " << num << " e base " << num << " e: " << area_retangulo(num, num) << endl;
    return 0;
}
