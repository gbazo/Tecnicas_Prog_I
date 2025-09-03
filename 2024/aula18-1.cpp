/*
Determinante de uma Matriz 2x2

O cálculo do determinante de uma matriz 2x2 é dado pela fórmula:

Determinante = (a × d) − (b × c)

Sendo que o a (0,0), b (0,1), c (1,0), d (1,1)

Faça: Programa para calcular o determinante de uma matriz 2x2

*/

#include <iostream>
using namespace std;

int main(){
    int matriz[2][2];

    cout << "Digite os valores da matriz 2x2: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }
    }

    int determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    cout << "Determinante da matriz 2x2: " << determinante << endl;

    return 0;
}