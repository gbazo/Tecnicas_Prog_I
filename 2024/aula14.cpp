/*
Contagem de Vogais

escreva um programa em C++ que conta o número de vogais em uma string fornecida pelo usuário. O programa utiliza um laço for para iterar sobre cada caractere da string e um if para verificar se o caractere é uma vogal.

Explicação:

O laço for percorre a string usando um índice i, que varia de 0 até texto.length() - 1.
Para cada iteração, o caractere correspondente é acessado com texto[i].
O caractere é convertido para minúscula usando tolower() para simplificar a comparação.
Um if verifica se o caractere é uma vogal. Se for, contagemVogais é incrementada.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    int contagemVogais = 0, comp_string = 0;

    cout << "Digite um texto: ";
    getline(cin, texto); // Lê a linha completa de entrada

    comp_string = texto.length();

    // Itera por cada caractere da string usando o comprimento
    for (int i = 0; i <= comp_string; i++) {
        
        char c = tolower(texto[i]); // Converte o caractere atual para minúsculas
        // Verifica se o caractere é uma vogal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contagemVogais++; // Incrementa a contagem
        }
    }

    cout << "O número de vogais no texto é: " << contagemVogais << endl;

    return 0;
}
