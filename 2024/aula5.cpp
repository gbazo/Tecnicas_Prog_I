/*
IF-ELSE

O if-else é uma estrutura de controle fundamental em muitas linguagens de programação, incluindo C++. Ela permite que um programa tome decisões com base em condições específicas, direcionando o fluxo de execução de acordo com o resultado dessas condições. Aqui está uma explicação geral sobre como o if-else funciona:

O Que é if-else?
    A estrutura if-else permite que um programa execute diferentes blocos de código dependendo de uma condição booleana (uma expressão que pode ser verdadeira ou falsa). É usada para implementar decisões e lógica condicional em um programa.

Sintaxe Básica
    A sintaxe básica do if-else em C++ é:

    if (condição) {
        // Bloco de código executado se a condição for verdadeira
    } else {
        // Bloco de código executado se a condição for falsa
    }

Componentes
    1. Condição:
        ◦ A expressão dentro dos parênteses do if é a condição que será avaliada.
        ◦ A condição deve ser uma expressão que resulta em true (verdadeira) ou false (falsa).
        ◦ Exemplos de condições: x > 10, y == 5, idade >= 18.
    2. Bloco if:
        ◦ O bloco de código dentro das chaves {} após o if é executado se a condição for verdadeira.
    3. Bloco else:
        ◦ O bloco de código dentro das chaves {} após o else é executado se a condição do if for falsa.
        ◦ O else é opcional; se não for fornecido, nenhum código será executado se a condição for falsa.
*/

#include <iostream>

using namespace std;

int main (){
    // declaracao da variavel
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    // inicio da estrutura de decisao
    // a verificação é baseada na variavel idade, onde, SE o valor da idade for maior ou igual (>=) 18, o primeiro bloco, logo após o if será executado, caso contrário (else), o segundo bloco é executado.

    if (idade >= 18){
        cout << "Você é maior de idade!" << endl;
    } else {
        cout << "Você é menor de idade!" << endl;
    }

    return 0;
}