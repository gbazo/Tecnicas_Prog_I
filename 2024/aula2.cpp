/* 

Explicação do Código:

Tipos de Dados:
    int: Para números inteiros.
    double: Para números decimais (ponto flutuante).
    char: Para um único caractere.
    bool: Para valores booleanos (true ou false).
    string: Para sequências de caracteres (strings).

Entrada e Saída:
    Inteiro: Lê um número inteiro e o imprime.
    Decimal: Lê um número decimal e o imprime.
    Caractere: Lê um único caractere e o imprime.
    Booleano: Lê um valor booleano (0 para false e 1 para true) e o imprime como true ou false.
    String: Lê uma string (com espaços) e a imprime. 

Uso de getline:
    getline(std::cin, texto);: Lê uma linha completa de entrada, incluindo espaços, e a armazena na variável texto.

*/

#include <iostream>
#include <string> // necessário para usar a variavel do tipo string

using namespace std;

int main(){
    // variaveis para armazenar os diferentes tipos de dados
    int inteiro;
    double decimal;
    char caractere;
    bool logico;
    string texto;

    // entrada e saida para o tipo int
    cout << "Digite um numero inteiro: ";
    cin >> inteiro;
    cout << "Voce digitou o numero inteiro: " << inteiro;

    // entrada e saida do tipo double
    cout << "\nDigite um numero decimal: ";
    cin >> decimal;
    cout << "Voce digitou o numero decimal: " << decimal;

    //entrada e saida do tipo char
    cout << "\nDigite um caractere: ";
    cin >> caractere;
    cout << "Voce digitou o caractere: " << caractere;

    // entrada e saida do tipo booleano
    cout << "\nDigite 1 para verdadeiro ou 0 para falso: ";
    cin >> logico;
    cout << "Voce digitou o valor booleano: " << logico;

    // entrada e saida para o tipo string
    cout << "\nDigite uma string (texto): ";
    // limpa o buffer antes de getline, é recomendado para evitar problemas ao alternar entre o uso de diferentes tipos de entrada
    cin.ignore();
    getline(cin, texto);
    cout << "Voce digitou o texto: " << texto;

    return 0;
}