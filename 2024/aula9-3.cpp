/*
Menu de Conversão de Unidades

Descrição: Crie um programa que oferece um menu para conversão de unidades de temperatura (Celsius para Fahrenheit e vice-versa).

Explicação:

O switch realiza a conversão de temperatura com base na escolha do usuário.
Inclui fórmulas de conversão e tratamento de opções inválidas.

*/

#include <iostream>

using namespace std;

int main() {
    int escolha;
    float temperatura;

    cout << "Escolha a conversão desejada:" << endl;
    cout << "1. Celsius para Fahrenheit" << endl;
    cout << "2. Fahrenheit para Celsius" << endl;
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Digite a temperatura em Celsius: ";
            cin >> temperatura;
            cout << "Temperatura em Fahrenheit: " << (temperatura * 9/5 + 32) << endl;
            break;
        case 2:
            cout << "Digite a temperatura em Fahrenheit: ";
            cin >> temperatura;
            cout << "Temperatura em Celsius: " << ((temperatura - 32) * 5/9) << endl;
            break;
        default:
            cout << "Escolha inválida!" << endl;
            break;
    }

    return 0;
}

