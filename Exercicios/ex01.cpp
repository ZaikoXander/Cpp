#include <iostream>

using namespace std;

int main()
{
    float preco, compra, precoatual, percentual, resultado;
    cout << "- Calcular % de Valorizacao -\n" << endl;
    cout << "Digite o preco que voce comprou: U$";
    cin >> preco;
    cout << "Digite o valor da compra: U$";
    cin >> compra;
    cout << "Digite o preco atual: U$";
    cin >> precoatual;
    percentual = (precoatual * 100 / preco) - 100;
    resultado = compra + (compra * (percentual/100));
    cout << "-------------------------------------------------------------------------------" << endl; 
    cout << "| Voce fez " << percentual << "% de Valorizacao nesta compra, retornando com U$" << resultado << " !|" << endl;  
    cout << "-------------------------------------------------------------------------------" << endl;
    return 0;
}
