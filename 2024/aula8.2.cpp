/*
Verificação de Intervalo com Operador NOT

Enunciado: Escreva um programa que solicita ao usuário que insira um número e verifica se o número está fora do intervalo de 10 a 50 (inclusive). O programa deve usar o operador NOT para verificar se o número está fora deste intervalo e informar o usuário se o número está dentro ou fora do intervalo.

Explicação
    1. Entrada de Dados:
        ◦ O programa solicita que o usuário insira um número.
    2. Uso do Operador NOT:
        ◦ A condição !(numero >= 10 && numero <= 50) é usada para verificar se o número está fora do intervalo de 10 a 50.
        ◦ O operador && é usado para garantir que o número esteja entre 10 e 50 (inclusive).
        ◦ O operador NOT ! inverte o resultado dessa condição. Portanto, !(numero >= 10 && numero <= 50) será verdadeiro se o número estiver fora do intervalo, e falso se o número estiver dentro do intervalo.
    3. Saída:
        ◦ Se o número estiver fora do intervalo, o programa exibe "O número está fora do intervalo de 10 a 50."
        ◦ Se o número estiver dentro do intervalo, o programa exibe "O número está dentro do intervalo de 10 a 50."

*/

#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    // Verifica se o número não está dentro do intervalo de 10 a 50 (inclusive)
    if (!(numero >= 10 && numero <= 50)) {
        cout << "O número está fora do intervalo de 10 a 50." << endl;
    } else {
        cout << "O número está dentro do intervalo de 10 a 50." << endl;
    }

    return 0;
}
