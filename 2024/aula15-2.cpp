/*
Array de 10 inteiros com valores fornecidos pelo usuário

Crie um programa que declare um array de 10 elementos do tipo inteiro e peça ao usuario que informe todos os valores após imprima os mesmos.
*/

#include <iostream>

using namespace std;

int main(){
    int numeros[10]; // declaraçao do vetor de 10 inteiros

    // entrada de dados pelo usuario
    for (int i = 0; i < 10; i++){
        cout << "Digite o valor para o elemento " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Valores inseridos: ";
    for(int i = 0; i < 10; i++){
        cout << numeros[i] << " ";
    }

    return 0;
}