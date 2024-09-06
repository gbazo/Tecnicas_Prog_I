/*
Exemplo Calculadora Simples

Descrição: Desenvolva uma calculadora simples que realiza operações básicas (+, -, *, /) com base na escolha do usuário.

Explicação:

- O switch lida com diferentes operações matemáticas com base no caractere da operação.
- Verifica se a operação é válida e realiza o cálculo correspondente.
- Inclui uma verificação para evitar divisão por zero.

*/
#include <iostream>

using namespace std;

int main () {
    char operacao;
    float num1, num2;

    cout << "### POWER CALCULATOR ###" << endl;
    cout << "Digite a operação que ira realizar (+, -, *, /): ";
    cin >> operacao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    switch (operacao) {
        case '+':
            cout << "Resultado: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0){
                cout << "Resultado: " << (num1 / num2) << endl;
            } else {
                cout << "ERROR: divisão por zero" << endl;
            }
            break;
        default:
            cout << "Opção invalida!" << endl;
    }
    return 0;
}
