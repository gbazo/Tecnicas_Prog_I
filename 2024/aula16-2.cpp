/*
Imprimir Nome e Letra por Letra

Explicação:
1.	Vetor de string: O vetor nomes[] armazena 3 nomes ("Ana", "Carlos", "Beatriz").
2.	Primeiro Loop (for): O loop externo percorre os três nomes e os imprime.
3.	Segundo Loop (for): O loop interno usa nomes[i].length() para determinar o número de caracteres em cada nome e imprime cada letra separadamente.
4.	Impressão organizada: As letras são numeradas e exibidas uma por uma.


*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomes[3] = {"Ana", "Carlos", "Beatriz"};  // Vetor de nomes

    // Loop para percorrer cada nome no vetor
    for (int i = 0; i < 3; i++) {
        cout << "Nome " << i + 1 << ": " << nomes[i] << endl;

        // Loop interno para imprimir cada letra do nome
        for (size_t j = 0; j < nomes[i].length(); j++) { // unsigned int
            cout << "Letra " << j + 1 << ": " << nomes[i][j] << endl;
        }

        cout << endl;  // Linha em branco para separar os nomes
    }

    return 0;
}