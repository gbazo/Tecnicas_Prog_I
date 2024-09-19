/*
Classificação de Números com if-else

Neste exemplo, vamos usar um laço for para classificar números de 1 a 10 como "par" ou "ímpar".
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Classificação de Números de 1 a 10:" << endl;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << " é par." << endl; // Números pares
        } else {
            cout << i << " é ímpar." << endl; // Números ímpares
        }
    }

    return 0;
}
