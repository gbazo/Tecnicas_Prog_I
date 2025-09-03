/*
Somar Todos os Elementos de uma Matriz

Crie uma matriz 3x3 e faça um programa para calcular a soma de todos os elementos
*/

#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int soma = 0;

    // inserindo os valores pelo usuario
    for(int i = 0; i < 3; i++){ // linha
        for(int j = 0; j < 3; j++){ // coluna
            cout << "Digite o valor para a posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // soma de todos os elementos
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    cout << "A soma de todos os elemntos da matriz é: " << soma << endl;

    return 0;
}