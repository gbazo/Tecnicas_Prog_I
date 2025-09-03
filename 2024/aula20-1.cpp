/*
Exemplo 2 Operador ternário

Verificaçao de maior e menor com atribuição direta na variavel

*/

#include <iostream>

using namespace std;

int main(){
    int numA, numB;

    cout << "Digite o primeiro numero: " << endl;
    cin >> numA;

    cout << "Digite o segundo numero: " << endl;
    cin >> numB;

    // verificaçao do maior valor via operador ternario
    int maior = (numA > numB) ? numA : numB;

    cout << "O maior valor é: " << maior << endl;
    return 0;
}