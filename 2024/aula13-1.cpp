/*
TABUADA

Vamos criar um código que realize a tabuada de um determinado numero de 1 até 10
*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << " ### TABUADA 3000 ### " << endl;

    cout << "Digite o número que deseja calcular a tabuada: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    
    return 0;
}
