/* 
    Exercicio: escreva um programa que leia 2 numeros inteiros e imprima esses mesmos 2 numeros inteiro, ou seja, crie 2 variaveis, numero1 e numero2
*/

#include <iostream>

using namespace std;

int main(){
    // declações das variaveis numericas tipo inteiro
    int numero1, numero2;

    // exibe a mensagem na tela (cout) para que o usuario insira o primeiro numero, apos armazena o valor digitado na variavel (cin)
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    // repetição do mesmo procedimento agora para o segundo numero
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "\nVoce digitou: " << numero1 << " e " << numero2 << endl;
    
    return 0;
}