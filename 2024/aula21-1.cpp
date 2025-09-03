/*
Contar a frequência de cada número
*/

#include <iostream>
using namespace std;

int main() {
    int numeros[10], frequencia[10] = {0};

    cout << "Digite 10 numeros entre 0 e 9:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        frequencia[numeros[i]]++;
    }

    cout << "Frequencia dos numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequencia[i] > 0) {
            cout << i << ": " << frequencia[i] << " vezes" << endl;
        }
    }

    return 0;
}
