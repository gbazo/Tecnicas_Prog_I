/*
OPERADOR TERNÁRIO

O operador ternário em C++ é uma maneira abreviada de escrever uma expressão if-else. Ele é chamado de "ternário" porque usa três operandos. O operador ternário é útil para expressões curtas onde você deseja tomar uma decisão rápida baseada em uma condição.

Sintaxe do Operador Ternário

> condicao ? valor_se_verdadeiro : valor_se_falso;

- condicao: A condição que será avaliada (verdadeira ou falsa).
- valor_se_verdadeiro: O valor ou expressão que será usada se a condição for verdadeira.
- valor_se_falso: O valor ou expressão que será usada se a condição for falsa.

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int idade;

    cout << "Qual a sua idade?";
    cin >> idade;

    // usando operador ternário para descidir se a idade é suficiente para digirir
    string mensagem = (idade >= 18) ? " Pode dirigir" : " Não pode dirigir";

    cout << "\nSua idade é: " << idade << " e " << mensagem;

    return 0;
}