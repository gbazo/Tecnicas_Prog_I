/*
Operações matemáticas

Descrição: o programa deve ler 2 numeros e imprimir as 4 operações matematicas basicas

Declaração das Variáveis:
    float numero1, numero2: Para armazenar os dois números que o usuário irá inserir.
    float soma, subtracao, multiplicacao, divisao: operacoes matematicas

Entrada de Dados (cin):
    O usuário insere dois números (numero1 e numero2).

Saída de Dados (cout):
    Devera ser exbido o valor das 4 operações basica da matematica como resultado.
*/

#include <iostream>

using namespace std;

int main(){
    // declaracao das variaveis
    float numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;

    cout << " *** MINI CALCULADORA *** " << endl;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    cout << "\n *** RESULTADOS *** " << endl;

    cout << "Adicao: " << soma << endl;
    cout << "Subtracao: " << subtracao << endl;
    cout << "Multiplicacao: " << multiplicacao << endl;
    cout << "Divisao: " << divisao << endl;

    cout << "FIM!";

    return 0;
}