/*
Maior e o menor valor em um array de 10 elementos

Crie um programa que declare um array de 10 posições do tipo inteiro, peça ao usuario que insira os valores e apos isso corra com um laço for e encontre o maior e o menor valor dentre os informados.

*/

#include <iostream>
using namespace std;

int main(){
    int numeros[10]; // declaração do vetor

    // entrada de dados pelo usuario
    for(int i = 0; i < 10; i++){
        cout << "Digite o valor para o elemento " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int maior = numeros[0];
    int menor = numeros[0];

    for(int i = 1; i < 10; i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
        if(numeros[i] < menor){
            menor = numeros[i];
        }
    }

    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}