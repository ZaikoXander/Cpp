#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char nome[] = "marcos";
    char nome2[] = "castro";

    if(strcmp(nome, nome2) == 0)
    {
        cout << "string iguais" << endl;
    }
    else
    {
        cout << "strings diferentes" << endl;
    }
    return 0;
}
