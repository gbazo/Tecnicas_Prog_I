/*
Contagem Regressiva

o programa realiza uma contagem regressiva a partir de um número fornecido pelo usuário.
*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número para iniciar a contagem regressiva: ";
    cin >> numero;

    cout << "Contagem Regressiva:" << endl;
    for (int i = numero; i >= 0; i--) {
        cout << i << endl;
    }

    cout << "Fim da contagem!" << endl;
    return 0;
}
