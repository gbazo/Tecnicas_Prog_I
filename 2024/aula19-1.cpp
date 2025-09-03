/*
Função para Verificar se um Número é Par ou Ímpar

Exemplo para criar uma função que verifica se um número é par ou ímpar e retorna um valor booleano.

*/

#include <iostream>
using namespace std;

bool ehPar(int numero){
    cout << "Entrada da função: " << numero << endl;
    return numero % 2 == 0;
}

int main (){
    int num;

    cout << " ## Par ou impar ## " << endl;
    cout << "Digite um numero: ";
    cin >> num;

    if(ehPar(num)){ 
        cout << num << " é par." << endl;
    } else {
        cout << num << " é impar." << endl;
    }

    return 0;
}