// Situação problema:
// Dado um vetor de 10 numeros inteiros, encontre o maior e o menor valor.

//bibliotecas
//
//função principal(){
//  vetor inteiro valores[10]
//  inteiro maior, menor
//
//  escreva("Digite 10 números: ")
//  para (int i = 0; i < 10; i++){
//      cin >> valores[i]
//  }
//
//  maior = vetor valores[0]
//  menor = vetor valores[0]
//
//  para (int i = 1; i < 10; i++){
//  se (valores[i] > maior)
//      maior = valores[i]
//  se (valores[i] < menor)
//      menor = valores[i]
//}
//  escreva("Maior valor: ", maior)
//  escreva("Menor valor: ", menor)
//
//  retorna 0;
//}

#include <iostream>

using namespace std;

int main(){
    int valores[10];
    int maior, menor;

    cout << "Digite 10 numeros: " << endl;
    for(int i = 0; i < 10; i++){
        cin >> valores[i];
    }

    maior = valores[0];
    menor = valores[0];
    for(int i = 1; i < 10; i++){
        if(valores[i] > maior){
            maior = valores[i];
        };
        if (valores[i] < menor){
            menor = valores[i];
        };
    }
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    return 0;
}