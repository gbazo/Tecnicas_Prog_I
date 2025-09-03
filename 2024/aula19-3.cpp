/*
Função void para Dobrar o Valor de uma Variável

A função dobrarValor recebe uma variável por referência e altera seu valor para o dobro.
*/

#include <iostream>
using namespace std;

void dobraValor(int &numero){
    cout << "Valor recebido pela função ainda não alterada:" << numero << endl;
    numero *= 2;
    cout << "Pós-multiplicação: " << numero << endl;
}

int main(){
    int valor;

    cout << "Digite um valor inteiro para dobrar: ";
    cin >> valor;

    cout << "Valor digitado: " << valor << endl;
    dobraValor(valor); //chamada da função
    cout << "Valor após dobrar: " << valor << endl;

    return 0;
}