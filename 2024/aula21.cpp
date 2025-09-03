/*
REVISAO

Inverte numeros no vetor
*/

#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Digite 5 numeros:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << "Vetor invertido:" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
